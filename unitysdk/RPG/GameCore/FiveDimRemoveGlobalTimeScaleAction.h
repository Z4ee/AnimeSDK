#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_METHOD_3_2AD27B72F19F5D97_OFFSET UNITYSDK_OFFSET(0x17207400)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_METHOD_3_6C0DBD5E4D4DE40B_OFFSET UNITYSDK_OFFSET(0x17207500)
#define RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x172074E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRemoveGlobalTimeScaleAction_TypeDefinitionIndex = 17136;

	class FiveDimRemoveGlobalTimeScaleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AD27B72F19F5D97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_METHOD_3_2AD27B72F19F5D97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C0DBD5E4D4DE40B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREMOVEGLOBALTIMESCALEACTION_METHOD_3_6C0DBD5E4D4DE40B_OFFSET))(a1, a2);
		}
	};
}
