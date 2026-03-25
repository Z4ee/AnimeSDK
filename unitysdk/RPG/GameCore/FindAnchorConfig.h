#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_FINDANCHORCONFIG_METHOD_2_EE27815B77EE5D63_OFFSET UNITYSDK_OFFSET(0x171D5D70)
#define RPG_GAMECORE_FINDANCHORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171D5E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FindAnchorConfig_TypeDefinitionIndex = 19792;

	class FindAnchorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaName; // 0x10
		::RPG::GameCore::DynamicString* AnchorName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDANCHORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EE27815B77EE5D63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FindAnchorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FindAnchorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDANCHORCONFIG_METHOD_2_EE27815B77EE5D63_OFFSET))(a1, a2);
		}
	};
}
