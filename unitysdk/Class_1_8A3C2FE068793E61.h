#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_63D18ECF87218619;
class Class_2_0A142DC5409043BE;
namespace Entitas { class IEntity; }

#define CLASS_1_8A3C2FE068793E61_GET_AIROOT_OFFSET UNITYSDK_OFFSET(0x17C6A480)
#define CLASS_1_8A3C2FE068793E61_GET_LITTLEGAMECOREINSTANCE_OFFSET UNITYSDK_OFFSET(0x17C6A440)
#define CLASS_1_8A3C2FE068793E61_GET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x17C6A420)
#define CLASS_1_8A3C2FE068793E61_GET_ROOTSTATE_OFFSET UNITYSDK_OFFSET(0x17C6A460)
#define CLASS_1_8A3C2FE068793E61_SET_AIROOT_OFFSET UNITYSDK_OFFSET(0x17C6A490)
#define CLASS_1_8A3C2FE068793E61_SET_LITTLEGAMECOREINSTANCE_OFFSET UNITYSDK_OFFSET(0x17C6A450)
#define CLASS_1_8A3C2FE068793E61_SET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x17C6A430)
#define CLASS_1_8A3C2FE068793E61_SET_ROOTSTATE_OFFSET UNITYSDK_OFFSET(0x17C6A470)
#define CLASS_1_8A3C2FE068793E61__CTOR_OFFSET UNITYSDK_OFFSET(0x17C6A4A0)

inline static constexpr unsigned int Class_1_8A3C2FE068793E61_TypeDefinitionIndex = 34507;

class Class_1_8A3C2FE068793E61 : public ::System::Object
{
public:
	::Class_2_0A142DC5409043BE* _AIRoot_k__BackingField; // 0x10
	::Class_2_0A142DC5409043BE* _RootState_k__BackingField; // 0x18
	::Entitas::IEntity* _LittleGameEntity_k__BackingField; // 0x20
	::Class_1_63D18ECF87218619* _LittleGameCoreInstance_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A3C2FE068793E61__CTOR_OFFSET))(this);
	}

	::Entitas::IEntity* get_LittleGameEntity()
	{
		return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A3C2FE068793E61_GET_LITTLEGAMEENTITY_OFFSET))(this);
	}

	::System::Void set_LittleGameEntity(::Entitas::IEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A3C2FE068793E61_SET_LITTLEGAMEENTITY_OFFSET))(this, value);
	}

	::Class_1_63D18ECF87218619* get_LittleGameCoreInstance()
	{
		return ((::Class_1_63D18ECF87218619*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A3C2FE068793E61_GET_LITTLEGAMECOREINSTANCE_OFFSET))(this);
	}

	::System::Void set_LittleGameCoreInstance(::Class_1_63D18ECF87218619* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619*))((::PBYTE)hIl2Cpp + CLASS_1_8A3C2FE068793E61_SET_LITTLEGAMECOREINSTANCE_OFFSET))(this, value);
	}

	::Class_2_0A142DC5409043BE* get_RootState()
	{
		return ((::Class_2_0A142DC5409043BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A3C2FE068793E61_GET_ROOTSTATE_OFFSET))(this);
	}

	::System::Void set_RootState(::Class_2_0A142DC5409043BE* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0A142DC5409043BE*))((::PBYTE)hIl2Cpp + CLASS_1_8A3C2FE068793E61_SET_ROOTSTATE_OFFSET))(this, value);
	}

	::Class_2_0A142DC5409043BE* get_AIRoot()
	{
		return ((::Class_2_0A142DC5409043BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A3C2FE068793E61_GET_AIROOT_OFFSET))(this);
	}

	::System::Void set_AIRoot(::Class_2_0A142DC5409043BE* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0A142DC5409043BE*))((::PBYTE)hIl2Cpp + CLASS_1_8A3C2FE068793E61_SET_AIROOT_OFFSET))(this, value);
	}
};
