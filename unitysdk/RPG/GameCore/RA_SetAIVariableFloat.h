#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ReactionTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_METHOD_4_A374DEC5A1355C45_OFFSET UNITYSDK_OFFSET(0x1D192E80)
#define RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_METHOD_4_E2781B68F998BD92_OFFSET UNITYSDK_OFFSET(0x1D192E40)
#define RPG_GAMECORE_RA_SETAIVARIABLEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D192E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_SetAIVariableFloat_TypeDefinitionIndex = 19809;

	class RA_SetAIVariableFloat : public ::RPG::GameCore::ReactionTaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Single Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E2781B68F998BD92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_SetAIVariableFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_SetAIVariableFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_METHOD_4_E2781B68F998BD92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A374DEC5A1355C45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_SetAIVariableFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_SetAIVariableFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETAIVARIABLEFLOAT_METHOD_4_A374DEC5A1355C45_OFFSET))(a1, a2);
		}
	};
}
