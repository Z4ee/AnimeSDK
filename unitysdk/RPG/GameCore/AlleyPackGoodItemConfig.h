#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackGoodsTypeEnum.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyPackAnchorsConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYPACKGOODITEMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19470390)
#define RPG_GAMECORE_ALLEYPACKGOODITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19470560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyPackGoodItemConfig_TypeDefinitionIndex = 14911;

	class AlleyPackGoodItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AlleyPackAnchorsConfig* TopAnchors; // 0x10
		::RPG::GameCore::AlleyPackAnchorsConfig* BottomAnchors; // 0x18
		::RPG::GameCore::AlleyPackGoodsTypeEnum GoodsType; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::String* BottomAnchorPicPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYPACKGOODITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyPackGoodItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyPackGoodItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYPACKGOODITEMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
