#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_METHOD_4_15BB9FDCF0DBE86A_OFFSET UNITYSDK_OFFSET(0x1D68DBF0)
#define RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_METHOD_4_8010DECADAF5A94B_OFFSET UNITYSDK_OFFSET(0x1D68DC70)
#define RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68DC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnterDashPrepareStateAction_TypeDefinitionIndex = 18739;

	class FiveDimEnterDashPrepareStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_15BB9FDCF0DBE86A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_METHOD_4_15BB9FDCF0DBE86A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8010DECADAF5A94B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnterDashPrepareStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTERDASHPREPARESTATEACTION_METHOD_4_8010DECADAF5A94B_OFFSET))(a1, a2);
		}
	};
}
