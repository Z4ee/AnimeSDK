#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackGoodsTypeEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyPackGoodItemConfig; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x9ABB980)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackGoodDef_TypeDefinitionIndex = 68210;

	class AlleyPackGoodDef : public ::System::Object
	{
	public:
		::System::String* SettleAudioEvent; // 0x10
		::RPG::GameCore::AlleyPackGoodItemConfig* Config; // 0x18
		::System::String* RotateAudioEvent; // 0x20
		::System::UInt32 GoodID; // 0x28
		::RPG::GameCore::AlleyPackGoodsTypeEnum Type; // 0x2C

		::System::Void _ctor(::System::UInt32 goodID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDEF__CTOR_OFFSET))(this, goodID);
		}
	};
}
