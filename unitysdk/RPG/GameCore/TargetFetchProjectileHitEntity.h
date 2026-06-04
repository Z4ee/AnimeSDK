#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_3044E2B5E20AD379_OFFSET UNITYSDK_OFFSET(0x19D0E690)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_3939400D92CD5E97_OFFSET UNITYSDK_OFFSET(0x19D06D90)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_65D53F1DC92F7257_OFFSET UNITYSDK_OFFSET(0x19CFB980)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_D1793B12E5076D87_OFFSET UNITYSDK_OFFSET(0x19D0E750)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFB930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchProjectileHitEntity_TypeDefinitionIndex = 22603;

	class TargetFetchProjectileHitEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3044E2B5E20AD379(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_3044E2B5E20AD379_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_65D53F1DC92F7257(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_65D53F1DC92F7257_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3939400D92CD5E97(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_3939400D92CD5E97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1793B12E5076D87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_METHOD_4_D1793B12E5076D87_OFFSET))(a1, a2);
		}
	};
}
