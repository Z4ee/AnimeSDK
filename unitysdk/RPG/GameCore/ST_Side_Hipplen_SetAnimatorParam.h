#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_METHOD_4_70E6DE2C282E3FAE_OFFSET UNITYSDK_OFFSET(0x1D4D0E20)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_METHOD_4_7829B0263DD2D05A_OFFSET UNITYSDK_OFFSET(0x1D4D0DE0)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D0E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_SetAnimatorParam_TypeDefinitionIndex = 21068;

	class ST_Side_Hipplen_SetAnimatorParam : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* ParameterName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x20
		::System::Boolean BoolValue; // 0x24
		::System::Single FloatValue; // 0x28
		::System::Int32 IntValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7829B0263DD2D05A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_METHOD_4_7829B0263DD2D05A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_70E6DE2C282E3FAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_SetAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_SETANIMATORPARAM_METHOD_4_70E6DE2C282E3FAE_OFFSET))(a1, a2);
		}
	};
}
