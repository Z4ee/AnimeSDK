#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_METHOD_4_1E998E255C7D2953_OFFSET UNITYSDK_OFFSET(0x1D6D73B0)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_METHOD_4_5723F58ECF6E4216_OFFSET UNITYSDK_OFFSET(0x1D6D7470)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D7460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRemoveGlobalTimeScaleAction_TypeDefinitionIndex = 18670;

	class FiveDimRemoveGlobalTimeScaleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1E998E255C7D2953(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_METHOD_4_1E998E255C7D2953_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5723F58ECF6E4216(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_METHOD_4_5723F58ECF6E4216_OFFSET))(a1, a2);
		}
	};
}
