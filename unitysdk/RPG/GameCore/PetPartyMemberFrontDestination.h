#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetPartyNavigateDestination.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_METHOD_3_8BA24D3541091BC2_OFFSET UNITYSDK_OFFSET(0x1D90A240)
#define RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_METHOD_3_EDE652EF72DD1BC6_OFFSET UNITYSDK_OFFSET(0x1D90A2C0)
#define RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D90A2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyMemberFrontDestination_TypeDefinitionIndex = 21084;

	class PetPartyMemberFrontDestination : public ::RPG::GameCore::PetPartyNavigateDestination
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReferenceTarget; // 0x10
		::System::Single SurfaceGap; // 0x18
		::System::Single PositionTolerance; // 0x1C
		::System::Single FacingAngleTolerance; // 0x20
		::System::Boolean ContinueInteractionOnNavigateFailure; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8BA24D3541091BC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyMemberFrontDestination*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyMemberFrontDestination*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_METHOD_3_8BA24D3541091BC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EDE652EF72DD1BC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyMemberFrontDestination* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyMemberFrontDestination*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYMEMBERFRONTDESTINATION_METHOD_3_EDE652EF72DD1BC6_OFFSET))(a1, a2);
		}
	};
}
