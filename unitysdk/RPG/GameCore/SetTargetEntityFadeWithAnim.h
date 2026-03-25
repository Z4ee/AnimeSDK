#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_METHOD_3_633C624641099C6D_OFFSET UNITYSDK_OFFSET(0x176E2500)
#define RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_METHOD_3_C0F83E57D8FBB8F8_OFFSET UNITYSDK_OFFSET(0x176E2580)
#define RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x176E2550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetEntityFadeWithAnim_TypeDefinitionIndex = 18815;

	class SetTargetEntityFadeWithAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TargetValue; // 0x20
		::System::Single Duration; // 0x24
		::System::Boolean EnableMultiTargets; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_633C624641099C6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetEntityFadeWithAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetEntityFadeWithAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_METHOD_3_633C624641099C6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C0F83E57D8FBB8F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetEntityFadeWithAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetEntityFadeWithAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETENTITYFADEWITHANIM_METHOD_3_C0F83E57D8FBB8F8_OFFSET))(a1, a2);
		}
	};
}
