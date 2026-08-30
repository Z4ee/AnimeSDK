#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_65D53F1DC92F7257_OFFSET UNITYSDK_OFFSET(0x1E1B6560)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_B3837C580F65A4BA_OFFSET UNITYSDK_OFFSET(0x1E1B65C0)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_D1793B12E5076D87_OFFSET UNITYSDK_OFFSET(0x1E1B65E0)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_FFCB74CF16B5C8E6_OFFSET UNITYSDK_OFFSET(0x1E1B64E0)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B6550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchProjectileHitEntity_TypeDefinitionIndex = 23646;

	class TargetFetchProjectileHitEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FFCB74CF16B5C8E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_FFCB74CF16B5C8E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_65D53F1DC92F7257(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_65D53F1DC92F7257_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3837C580F65A4BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_B3837C580F65A4BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1793B12E5076D87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_D1793B12E5076D87_OFFSET))(a1, a2);
		}
	};
}
