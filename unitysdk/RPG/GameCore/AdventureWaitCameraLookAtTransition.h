#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_METHOD_3_2422339310790645_OFFSET UNITYSDK_OFFSET(0x186802D0)
#define RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_METHOD_3_EAF4851BCC657307_OFFSET UNITYSDK_OFFSET(0x186801B0)
#define RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18680250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureWaitCameraLookAtTransition_TypeDefinitionIndex = 21006;

	class AdventureWaitCameraLookAtTransition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitPercentage; // 0x18
		::RPG::GameCore::DynamicFloat* WaitDegreeSpeed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EAF4851BCC657307(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureWaitCameraLookAtTransition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureWaitCameraLookAtTransition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_METHOD_3_EAF4851BCC657307_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2422339310790645(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureWaitCameraLookAtTransition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureWaitCameraLookAtTransition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREWAITCAMERALOOKATTRANSITION_METHOD_3_2422339310790645_OFFSET))(a1, a2);
		}
	};
}
