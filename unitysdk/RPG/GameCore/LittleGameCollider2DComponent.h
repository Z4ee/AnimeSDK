#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_METHOD_3_E7EC0D74CDFC8CC2_OFFSET UNITYSDK_OFFSET(0x1BCBF940)
#define RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_METHOD_3_E8F36321F99880BD_OFFSET UNITYSDK_OFFSET(0x1BCBF7E0)
#define RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCBEAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCollider2DComponent_TypeDefinitionIndex = 18135;

	class LittleGameCollider2DComponent : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Single Density; // 0x10
		::System::Single Friction; // 0x14
		::System::Boolean IsSensor; // 0x18
		::System::Single Restitution; // 0x1C
		::System::Boolean EnableCollisionEvent; // 0x20
		::System::Boolean EnableSensorEvent; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8F36321F99880BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCollider2DComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCollider2DComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_METHOD_3_E8F36321F99880BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E7EC0D74CDFC8CC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameCollider2DComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameCollider2DComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOLLIDER2DCOMPONENT_METHOD_3_E7EC0D74CDFC8CC2_OFFSET))(a1, a2);
		}
	};
}
