#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_METHOD_4_1EBD45E2D3CD62C9_OFFSET UNITYSDK_OFFSET(0x199E54B0)
#define RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_METHOD_4_68E58D600870F792_OFFSET UNITYSDK_OFFSET(0x199E55F0)
#define RPG_GAMECORE_PARAMFORMULAEXPRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199E5570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamFormulaExprConfig_TypeDefinitionIndex = 16223;

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

		static ::System::Void Method_4_1EBD45E2D3CD62C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamFormulaExprConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamFormulaExprConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_METHOD_4_1EBD45E2D3CD62C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_68E58D600870F792(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamFormulaExprConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamFormulaExprConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMFORMULAEXPRCONFIG_METHOD_4_68E58D600870F792_OFFSET))(a1, a2);
		}
	};
}
