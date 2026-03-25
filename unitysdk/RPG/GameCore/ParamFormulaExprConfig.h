#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_METHOD_4_3DB220714181345C_OFFSET UNITYSDK_OFFSET(0x174893D0)
#define RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_METHOD_4_6E8FF222DD99DA37_OFFSET UNITYSDK_OFFSET(0x17489510)
#define RPG_GAMECORE_PARAMFORMULAEXPRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17489490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamFormulaExprConfig_TypeDefinitionIndex = 15656;

	class ParamFormulaExprConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::String* Expr; // 0x10
		::Il2CppArray<::RPG::GameCore::MiParameterConfigBase*>* ParamList; // 0x18
		::System::Double DefaultValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMFORMULAEXPRCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3DB220714181345C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamFormulaExprConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamFormulaExprConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_METHOD_4_3DB220714181345C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E8FF222DD99DA37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamFormulaExprConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamFormulaExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_METHOD_4_6E8FF222DD99DA37_OFFSET))(a1, a2);
		}
	};
}
