#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDLOGICANDCONFIG_METHOD_4_4E7DEF042F4E2956_OFFSET UNITYSDK_OFFSET(0x19671390)
#define RPG_GAMECORE_CONDLOGICANDCONFIG_METHOD_4_AFD6BB7B485F071B_OFFSET UNITYSDK_OFFSET(0x19671450)
#define RPG_GAMECORE_CONDLOGICANDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196715B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondLogicAndConfig_TypeDefinitionIndex = 16207;

	class CondLogicAndConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiConditionConfigBase*>* ConditionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICANDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4E7DEF042F4E2956(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicAndConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicAndConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICANDCONFIG_METHOD_4_4E7DEF042F4E2956_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AFD6BB7B485F071B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicAndConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicAndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICANDCONFIG_METHOD_4_AFD6BB7B485F071B_OFFSET))(a1, a2);
		}
	};
}
