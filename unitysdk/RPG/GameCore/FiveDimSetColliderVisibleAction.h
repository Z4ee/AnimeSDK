#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_METHOD_3_79C1A8D294C9B62C_OFFSET UNITYSDK_OFFSET(0x1BEB0280)
#define RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_METHOD_3_BCB5F9B8131211E7_OFFSET UNITYSDK_OFFSET(0x1BEB0240)
#define RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB0270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetColliderVisibleAction_TypeDefinitionIndex = 17952;

	class FiveDimSetColliderVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10
		::Il2CppArray<::System::String*>* RelativePaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BCB5F9B8131211E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_METHOD_3_BCB5F9B8131211E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79C1A8D294C9B62C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_METHOD_3_79C1A8D294C9B62C_OFFSET))(a1, a2);
		}
	};
}
