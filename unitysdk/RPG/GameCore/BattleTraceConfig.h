#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLETRACECONFIG_METHOD_2_456E31FC7C436BC2_OFFSET UNITYSDK_OFFSET(0x1A3FA450)
#define RPG_GAMECORE_BATTLETRACECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FA5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTraceConfig_TypeDefinitionIndex = 17417;

	class BattleTraceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* DelayPreShowModifierBlackList; // 0x10
		::Il2CppArray<::System::String*>* DelayPreShowAbilityBlackList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETRACECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_456E31FC7C436BC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleTraceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleTraceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETRACECONFIG_METHOD_2_456E31FC7C436BC2_OFFSET))(a1, a2);
		}
	};
}
