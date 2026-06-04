#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_METHOD_3_0565C969A07D0CBF_OFFSET UNITYSDK_OFFSET(0x19433960)
#define RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_METHOD_3_44ED71A668164D8E_OFFSET UNITYSDK_OFFSET(0x194338E0)
#define RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19433930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRoguePhotoEntityFaceToPlayer_TypeDefinitionIndex = 19425;

	class AdvRoguePhotoEntityFaceToPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44ED71A668164D8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_METHOD_3_44ED71A668164D8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0565C969A07D0CBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_METHOD_3_0565C969A07D0CBF_OFFSET))(a1, a2);
		}
	};
}
