#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleBaseEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERASETANIMATORPARAM_METHOD_3_0FC85A3E4FA76AD5_OFFSET UNITYSDK_OFFSET(0x1CFD2BB0)
#define RPG_GAMECORE_CHIMERASETANIMATORPARAM_METHOD_3_A09047462D543A43_OFFSET UNITYSDK_OFFSET(0x1CFD2B50)
#define RPG_GAMECORE_CHIMERASETANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD2BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraSetAnimatorParam_TypeDefinitionIndex = 15698;

	class ChimeraSetAnimatorParam : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleBaseEvaluator* Target; // 0x18
		::System::String* AnimatorAttachPoint; // 0x20
		::System::String* ParameterName; // 0x28
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x30
		::System::Single Value; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETANIMATORPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A09047462D543A43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraSetAnimatorParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraSetAnimatorParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETANIMATORPARAM_METHOD_3_A09047462D543A43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FC85A3E4FA76AD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraSetAnimatorParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraSetAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERASETANIMATORPARAM_METHOD_3_0FC85A3E4FA76AD5_OFFSET))(a1, a2);
		}
	};
}
