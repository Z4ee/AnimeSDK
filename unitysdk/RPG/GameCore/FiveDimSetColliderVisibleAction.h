#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_METHOD_4_156DAC5AB5AED6DD_OFFSET UNITYSDK_OFFSET(0x1D6AB860)
#define RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_METHOD_4_90A32569279131DE_OFFSET UNITYSDK_OFFSET(0x1D6AB820)
#define RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AB850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetColliderVisibleAction_TypeDefinitionIndex = 18682;

	class FiveDimSetColliderVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10
		::Il2CppArray<::System::String*>* RelativePaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90A32569279131DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_METHOD_4_90A32569279131DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_156DAC5AB5AED6DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_METHOD_4_156DAC5AB5AED6DD_OFFSET))(a1, a2);
		}
	};
}
