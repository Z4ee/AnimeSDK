#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENMINIGAMEGOODSCONFIG_METHOD_2_430A554965B63163_OFFSET UNITYSDK_OFFSET(0x18A046D0)
#define RPG_GAMECORE_HIPPLENMINIGAMEGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A04800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameGoodsConfig_TypeDefinitionIndex = 15894;

	class HipplenMiniGameGoodsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* AnchorName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMEGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_430A554965B63163(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenMiniGameGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenMiniGameGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMEGOODSCONFIG_METHOD_2_430A554965B63163_OFFSET))(a1, a2);
		}
	};
}
