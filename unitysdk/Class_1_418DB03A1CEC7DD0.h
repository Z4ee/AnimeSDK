#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/EAilmentStateType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_418DB03A1CEC7DD0_GET_HITSTATEOVERRIDEANIMHASH_OFFSET UNITYSDK_OFFSET(0x19AF5F10)
#define CLASS_1_418DB03A1CEC7DD0_GET_HITSTATEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19AF5EF0)
#define CLASS_1_418DB03A1CEC7DD0_GET_IDLESTATEREDIRECT_OFFSET UNITYSDK_OFFSET(0x19AF5ED0)
#define CLASS_1_418DB03A1CEC7DD0_GET_PLAYHITANIM_OFFSET UNITYSDK_OFFSET(0x19AF5F30)
#define CLASS_1_418DB03A1CEC7DD0_METHOD_1_83E2BE9AFD99DEF2_OFFSET UNITYSDK_OFFSET(0x19AF5DE0)
#define CLASS_1_418DB03A1CEC7DD0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19AF5E90)
#define CLASS_1_418DB03A1CEC7DD0_METHOD_1_D8ECBC347869E733_OFFSET UNITYSDK_OFFSET(0x19AF5E40)
#define CLASS_1_418DB03A1CEC7DD0_SET_HITSTATEOVERRIDEANIMHASH_OFFSET UNITYSDK_OFFSET(0x19AF5F20)
#define CLASS_1_418DB03A1CEC7DD0_SET_HITSTATEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x19AF5F00)
#define CLASS_1_418DB03A1CEC7DD0_SET_IDLESTATEREDIRECT_OFFSET UNITYSDK_OFFSET(0x19AF5EE0)
#define CLASS_1_418DB03A1CEC7DD0_SET_PLAYHITANIM_OFFSET UNITYSDK_OFFSET(0x19AF5F40)
#define CLASS_1_418DB03A1CEC7DD0__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF5DC0)

inline static constexpr unsigned int Class_1_418DB03A1CEC7DD0_TypeDefinitionIndex = 57202;

class Class_1_418DB03A1CEC7DD0 : public ::System::Object
{
public:
	::System::Boolean _PlayHitAnim_k__BackingField; // 0x10
	::System::Int32 _HitStateOverrideAnimHash_k__BackingField; // 0x14
	::RPG::GameCore::AdventureAnimStateType _IdleStateRedirect_k__BackingField; // 0x18
	::RPG::GameCore::EAilmentStateType _HitStateOverride_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_83E2BE9AFD99DEF2(::RPG::GameCore::EAilmentStateType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EAilmentStateType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_METHOD_1_83E2BE9AFD99DEF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D8ECBC347869E733(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_METHOD_1_D8ECBC347869E733_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType get_IdleStateRedirect()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_GET_IDLESTATEREDIRECT_OFFSET))(this);
	}

	::System::Void set_IdleStateRedirect(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_SET_IDLESTATEREDIRECT_OFFSET))(this, a1);
	}

	::RPG::GameCore::EAilmentStateType get_HitStateOverride()
	{
		return ((::RPG::GameCore::EAilmentStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_GET_HITSTATEOVERRIDE_OFFSET))(this);
	}

	::System::Void set_HitStateOverride(::RPG::GameCore::EAilmentStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EAilmentStateType))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_SET_HITSTATEOVERRIDE_OFFSET))(this, a1);
	}

	::System::Int32 get_HitStateOverrideAnimHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_GET_HITSTATEOVERRIDEANIMHASH_OFFSET))(this);
	}

	::System::Void set_HitStateOverrideAnimHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_SET_HITSTATEOVERRIDEANIMHASH_OFFSET))(this, a1);
	}

	::System::Boolean get_PlayHitAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_GET_PLAYHITANIM_OFFSET))(this);
	}

	::System::Void set_PlayHitAnim(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_418DB03A1CEC7DD0_SET_PLAYHITANIM_OFFSET))(this, a1);
	}
};
