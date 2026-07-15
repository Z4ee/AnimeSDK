#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackGoodsTypeEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyPackGoodItemConfig; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x194C46C0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackGoodDef_TypeDefinitionIndex = 70705;

	class AlleyPackGoodDef : public ::System::Object
	{
	public:
		::System::String* RotateAudioEvent; // 0x10
		::System::String* SettleAudioEvent; // 0x18
		::RPG::GameCore::AlleyPackGoodItemConfig* Config; // 0x20
		::RPG::GameCore::AlleyPackGoodsTypeEnum Type; // 0x28
		::System::UInt32 GoodID; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDEF__CTOR_OFFSET))(this, a1);
		}
	};
}
