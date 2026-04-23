#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifyAIVariableFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MODIFYAIVARIABLEINT_METHOD_3_A7E21FFBAB61401C_OFFSET UNITYSDK_OFFSET(0x18B36090)
#define RPG_GAMECORE_MODIFYAIVARIABLEINT_METHOD_3_E3041E04EFFAEA61_OFFSET UNITYSDK_OFFSET(0x18B36010)
#define RPG_GAMECORE_MODIFYAIVARIABLEINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B36060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAIVariableInt_TypeDefinitionIndex = 18944;

	class ModifyAIVariableInt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* VarName; // 0x18
		::RPG::GameCore::ModifyAIVariableFunction ModifyFunc; // 0x20
		::System::Int32 ChangeValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVARIABLEINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E3041E04EFFAEA61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAIVariableInt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAIVariableInt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVARIABLEINT_METHOD_3_E3041E04EFFAEA61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A7E21FFBAB61401C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAIVariableInt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYAIVARIABLEINT_METHOD_3_A7E21FFBAB61401C_OFFSET))(a1, a2);
		}
	};
}
