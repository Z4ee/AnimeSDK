#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_METHOD_4_5605CFE452016ECE_OFFSET UNITYSDK_OFFSET(0x18E26EB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_METHOD_4_D9178CA14FCAAF2E_OFFSET UNITYSDK_OFFSET(0x18E26F40)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E26F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueMiracleRecordParam_TypeDefinitionIndex = 20627;

	class SetDynamicValueByRogueMiracleRecordParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5605CFE452016ECE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecordParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecordParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_METHOD_4_5605CFE452016ECE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D9178CA14FCAAF2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecordParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueMiracleRecordParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMIRACLERECORDPARAM_METHOD_4_D9178CA14FCAAF2E_OFFSET))(a1, a2);
		}
	};
}
