#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E240B71398B174A9_DisplayIntent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5986F534F0638CE0;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xC36B720)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC36B740)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_INTENT_OFFSET UNITYSDK_OFFSET(0xC36B730)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC36B760)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC36B790)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_METHOD_1_13A3A59895E7B569_OFFSET UNITYSDK_OFFSET(0xC369D80)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC369FC0)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xC36A360)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC36B750)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC36B780)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC36B7A0)
#define CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76__CTOR_OFFSET UNITYSDK_OFFSET(0xC36A780)

inline static constexpr unsigned int Class_1_E240B71398B174A9_Class_1_0301936AAEC52B76_TypeDefinitionIndex = 80236;

class Class_1_E240B71398B174A9_Class_1_0301936AAEC52B76 : public ::System::Object
{
public:
	::Class_1_5986F534F0638CE0* _Instance_k__BackingField; // 0x10
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x20
	::System::Boolean EPFLDJJINLC; // 0x2C
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x30
	::Class_1_E240B71398B174A9_DisplayIntent _Intent_k__BackingField; // 0x40

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_5986F534F0638CE0* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_1_E240B71398B174A9_DisplayIntent a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_5986F534F0638CE0*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_1_E240B71398B174A9_DisplayIntent))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_ENTITY_OFFSET))(this);
	}

	::Class_1_E240B71398B174A9_DisplayIntent get_Intent()
	{
		return ((::Class_1_E240B71398B174A9_DisplayIntent(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_INTENT_OFFSET))(this);
	}

	::Class_1_5986F534F0638CE0* get_Instance()
	{
		return ((::Class_1_5986F534F0638CE0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_INSTANCE_OFFSET))(this);
	}

	::System::Void set_Instance(::Class_1_5986F534F0638CE0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5986F534F0638CE0*))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_SET_INSTANCE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_SET_POSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_SET_ROTATION_OFFSET))(this, a1);
	}

	::System::Void Method_1_13A3A59895E7B569(::Class_1_5986F534F0638CE0* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5986F534F0638CE0*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_METHOD_1_13A3A59895E7B569_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_5986F534F0638CE0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5986F534F0638CE0*))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9_CLASS_1_0301936AAEC52B76_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
