#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERREATTACHEFFECT_METHOD_3_128BE72D99351558_OFFSET UNITYSDK_OFFSET(0x1AF72440)
#define RPG_GAMECORE_MODIFIERREATTACHEFFECT_METHOD_3_990853E537AF706D_OFFSET UNITYSDK_OFFSET(0x1AF72400)
#define RPG_GAMECORE_MODIFIERREATTACHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF72430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierReattachEffect_TypeDefinitionIndex = 20939;

	class ModifierReattachEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AddColliderHeightOffset; // 0x28
		::System::Single ColliderHeightRatio; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERREATTACHEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_990853E537AF706D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierReattachEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierReattachEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERREATTACHEFFECT_METHOD_3_990853E537AF706D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_128BE72D99351558(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierReattachEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierReattachEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERREATTACHEFFECT_METHOD_3_128BE72D99351558_OFFSET))(a1, a2);
		}
	};
}
