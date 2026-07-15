#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/PhysicsRigidBodyType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_METHOD_3_1AE06EE1F16AF0C2_OFFSET UNITYSDK_OFFSET(0x1BCC4A40)
#define RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_METHOD_3_5B3ECCC95A6A7F42_OFFSET UNITYSDK_OFFSET(0x1BCC4AA0)
#define RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC4A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameRigidBody2DComponent_TypeDefinitionIndex = 18134;

	class LittleGameRigidBody2DComponent : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::PhysicsRigidBodyType Type; // 0x10
		::System::Single LinearDamping; // 0x14
		::System::Single AngularDamping; // 0x18
		::System::Boolean AllowSleep; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1AE06EE1F16AF0C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameRigidBody2DComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameRigidBody2DComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_METHOD_3_1AE06EE1F16AF0C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B3ECCC95A6A7F42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameRigidBody2DComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameRigidBody2DComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERIGIDBODY2DCOMPONENT_METHOD_3_5B3ECCC95A6A7F42_OFFSET))(a1, a2);
		}
	};
}
