#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameBoxCollider2DComponent; }

#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_METHOD_3_9E9B3B2D96F98CF8_OFFSET UNITYSDK_OFFSET(0x1DD67CA0)
#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_METHOD_3_C632F9ADBC629828_OFFSET UNITYSDK_OFFSET(0x1DD67C40)
#define RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD67C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameBoxCollider2DGroupComponent_TypeDefinitionIndex = 18661;

	class LittleGameBoxCollider2DGroupComponent : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameBoxCollider2DComponent*>* Colliders; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C632F9ADBC629828(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBoxCollider2DGroupComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBoxCollider2DGroupComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_METHOD_3_C632F9ADBC629828_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E9B3B2D96F98CF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBoxCollider2DGroupComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBoxCollider2DGroupComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBOXCOLLIDER2DGROUPCOMPONENT_METHOD_3_9E9B3B2D96F98CF8_OFFSET))(a1, a2);
		}
	};
}
