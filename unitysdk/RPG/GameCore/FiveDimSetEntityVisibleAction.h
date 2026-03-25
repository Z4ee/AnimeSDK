#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_METHOD_3_46C19EDFAAE9BAFC_OFFSET UNITYSDK_OFFSET(0x172099F0)
#define RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_METHOD_3_470721F925674C30_OFFSET UNITYSDK_OFFSET(0x172098C0)
#define RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x172099D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetEntityVisibleAction_TypeDefinitionIndex = 17148;

	class FiveDimSetEntityVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_470721F925674C30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_METHOD_3_470721F925674C30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46C19EDFAAE9BAFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETENTITYVISIBLEACTION_METHOD_3_46C19EDFAAE9BAFC_OFFSET))(a1, a2);
		}
	};
}
