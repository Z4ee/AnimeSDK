#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPEPARAM_METHOD_4_993C56238F6AAFD1_OFFSET UNITYSDK_OFFSET(0x1E821DD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPEPARAM_METHOD_4_D6CD2CFC87DB4AF5_OFFSET UNITYSDK_OFFSET(0x1E821E20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E821E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffNumWithTypeParam_TypeDefinitionIndex = 21530;

	class SetDynamicValueByRogueBuffNumWithTypeParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_993C56238F6AAFD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithTypeParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithTypeParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPEPARAM_METHOD_4_993C56238F6AAFD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D6CD2CFC87DB4AF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithTypeParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumWithTypeParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMWITHTYPEPARAM_METHOD_4_D6CD2CFC87DB4AF5_OFFSET))(a1, a2);
		}
	};
}
