#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_63D18ECF87218619;
class Class_2_0A142DC5409043BE;
namespace Entitas { class IEntity; }

#define CLASS_1_D93F8AE271D8A728_GET_AIROOT_OFFSET UNITYSDK_OFFSET(0x19D41B40)
#define CLASS_1_D93F8AE271D8A728_GET_LITTLEGAMECOREINSTANCE_OFFSET UNITYSDK_OFFSET(0x19D41B00)
#define CLASS_1_D93F8AE271D8A728_GET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x19D41AE0)
#define CLASS_1_D93F8AE271D8A728_GET_ROOTSTATE_OFFSET UNITYSDK_OFFSET(0x19D41B20)
#define CLASS_1_D93F8AE271D8A728_SET_AIROOT_OFFSET UNITYSDK_OFFSET(0x19D41B50)
#define CLASS_1_D93F8AE271D8A728_SET_LITTLEGAMECOREINSTANCE_OFFSET UNITYSDK_OFFSET(0x19D41B10)
#define CLASS_1_D93F8AE271D8A728_SET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x19D41AF0)
#define CLASS_1_D93F8AE271D8A728_SET_ROOTSTATE_OFFSET UNITYSDK_OFFSET(0x19D41B30)
#define CLASS_1_D93F8AE271D8A728__CTOR_OFFSET UNITYSDK_OFFSET(0x19D41B60)

inline static constexpr unsigned int Class_1_D93F8AE271D8A728_TypeDefinitionIndex = 36321;

class Class_1_D93F8AE271D8A728 : public ::System::Object
{
public:
	::Class_2_0A142DC5409043BE* _RootState_k__BackingField; // 0x10
	::Class_2_0A142DC5409043BE* _AIRoot_k__BackingField; // 0x18
	::Class_1_63D18ECF87218619* _LittleGameCoreInstance_k__BackingField; // 0x20
	::Entitas::IEntity* _LittleGameEntity_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D93F8AE271D8A728__CTOR_OFFSET))(this);
	}

	::Entitas::IEntity* get_LittleGameEntity()
	{
		return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D93F8AE271D8A728_GET_LITTLEGAMEENTITY_OFFSET))(this);
	}

	::System::Void set_LittleGameEntity(::Entitas::IEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D93F8AE271D8A728_SET_LITTLEGAMEENTITY_OFFSET))(this, a1);
	}

	::Class_1_63D18ECF87218619* get_LittleGameCoreInstance()
	{
		return ((::Class_1_63D18ECF87218619*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D93F8AE271D8A728_GET_LITTLEGAMECOREINSTANCE_OFFSET))(this);
	}

	::System::Void set_LittleGameCoreInstance(::Class_1_63D18ECF87218619* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63D18ECF87218619*))((::PBYTE)hIl2Cpp + CLASS_1_D93F8AE271D8A728_SET_LITTLEGAMECOREINSTANCE_OFFSET))(this, a1);
	}

	::Class_2_0A142DC5409043BE* get_RootState()
	{
		return ((::Class_2_0A142DC5409043BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D93F8AE271D8A728_GET_ROOTSTATE_OFFSET))(this);
	}

	::System::Void set_RootState(::Class_2_0A142DC5409043BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0A142DC5409043BE*))((::PBYTE)hIl2Cpp + CLASS_1_D93F8AE271D8A728_SET_ROOTSTATE_OFFSET))(this, a1);
	}

	::Class_2_0A142DC5409043BE* get_AIRoot()
	{
		return ((::Class_2_0A142DC5409043BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D93F8AE271D8A728_GET_AIROOT_OFFSET))(this);
	}

	::System::Void set_AIRoot(::Class_2_0A142DC5409043BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0A142DC5409043BE*))((::PBYTE)hIl2Cpp + CLASS_1_D93F8AE271D8A728_SET_AIROOT_OFFSET))(this, a1);
	}
};
