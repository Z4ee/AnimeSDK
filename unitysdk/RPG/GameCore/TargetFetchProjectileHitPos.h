#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_3F4BF9EDFCE53DC2_OFFSET UNITYSDK_OFFSET(0x19D06E50)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_8E33552671733EC8_OFFSET UNITYSDK_OFFSET(0x19D0E760)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_976A10E390C1EA5A_OFFSET UNITYSDK_OFFSET(0x19CFBAF0)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_E306282B4BDD7B82_OFFSET UNITYSDK_OFFSET(0x19D0E820)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFBAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchProjectileHitPos_TypeDefinitionIndex = 22604;

	class TargetFetchProjectileHitPos : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8E33552671733EC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_8E33552671733EC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_976A10E390C1EA5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_976A10E390C1EA5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F4BF9EDFCE53DC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_3F4BF9EDFCE53DC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E306282B4BDD7B82(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_METHOD_4_E306282B4BDD7B82_OFFSET))(a1, a2);
		}
	};
}
