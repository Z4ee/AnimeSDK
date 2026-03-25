#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG_METHOD_2_326A7763C6714573_OFFSET UNITYSDK_OFFSET(0x173808B0)
#define RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17380A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationGlobalTagConfig_TypeDefinitionIndex = 15606;

	class MapRotationGlobalTagConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HoyoTagContainer* NoHideNPCTag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_326A7763C6714573(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationGlobalTagConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationGlobalTagConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG_METHOD_2_326A7763C6714573_OFFSET))(a1, a2);
		}
	};
}
