#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PROPSTATEMATCHCONFIG_METHOD_2_0C394121D7B478D3_OFFSET UNITYSDK_OFFSET(0x18C7A3B0)
#define RPG_GAMECORE_PROPSTATEMATCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7A510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateMatchConfig_TypeDefinitionIndex = 20892;

	class PropStateMatchConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* PropKey; // 0x10
		::Il2CppArray<::RPG::GameCore::PropState>* States; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEMATCHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0C394121D7B478D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateMatchConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateMatchConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEMATCHCONFIG_METHOD_2_0C394121D7B478D3_OFFSET))(a1, a2);
		}
	};
}
