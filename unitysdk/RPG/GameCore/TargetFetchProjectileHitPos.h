#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_35E2458A4202DC4F_OFFSET UNITYSDK_OFFSET(0x1D0BC670)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_976A10E390C1EA5A_OFFSET UNITYSDK_OFFSET(0x1D0BC610)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_E306282B4BDD7B82_OFFSET UNITYSDK_OFFSET(0x1D0BC690)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_F68AE90BC1108C7B_OFFSET UNITYSDK_OFFSET(0x1D0BC590)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BC600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchProjectileHitPos_TypeDefinitionIndex = 23067;

	class TargetFetchProjectileHitPos : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F68AE90BC1108C7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_F68AE90BC1108C7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_976A10E390C1EA5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_976A10E390C1EA5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_35E2458A4202DC4F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_35E2458A4202DC4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E306282B4BDD7B82(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_E306282B4BDD7B82_OFFSET))(a1, a2);
		}
	};
}
