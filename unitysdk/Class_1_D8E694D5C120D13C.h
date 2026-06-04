#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D8E694D5C120D13C_GET_OFFSET UNITYSDK_OFFSET(0xAB0F710)
#define CLASS_1_D8E694D5C120D13C_METHOD_1_23B75E90AB730380_OFFSET UNITYSDK_OFFSET(0xAB0FA30)
#define CLASS_1_D8E694D5C120D13C_METHOD_1_2F8C1CDF056C52FC_OFFSET UNITYSDK_OFFSET(0xAB0F3A0)
#define CLASS_1_D8E694D5C120D13C_METHOD_1_8069620AD6655433_OFFSET UNITYSDK_OFFSET(0xAB0F860)
#define CLASS_1_D8E694D5C120D13C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAB0F6D0)
#define CLASS_1_D8E694D5C120D13C_METHOD_1_F10CDB08E0E6C4E8_OFFSET UNITYSDK_OFFSET(0xAB0F590)
#define CLASS_1_D8E694D5C120D13C_PRELOAD_OFFSET UNITYSDK_OFFSET(0xAB0F5F0)
#define CLASS_1_D8E694D5C120D13C_RETURN_OFFSET UNITYSDK_OFFSET(0xAB0F8E0)
#define CLASS_1_D8E694D5C120D13C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB0F4E0)

inline static constexpr unsigned int Class_1_D8E694D5C120D13C_TypeDefinitionIndex = 69165;

class Class_1_D8E694D5C120D13C : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* Field_1_1; // 0x10
	::RPG::Client::UIPrefabLoader* Field_1_2; // 0x18
	::UnityEngine::Transform* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E694D5C120D13C__CTOR_OFFSET))(this);
	}

	static ::Class_1_D8E694D5C120D13C* Method_1_2F8C1CDF056C52FC()
	{
		return ((::Class_1_D8E694D5C120D13C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8E694D5C120D13C_METHOD_1_2F8C1CDF056C52FC_OFFSET))();
	}

	::System::Void Method_1_F10CDB08E0E6C4E8(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D8E694D5C120D13C_METHOD_1_F10CDB08E0E6C4E8_OFFSET))(this, a1, a2);
	}

	::System::Void PreLoad(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8E694D5C120D13C_PRELOAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E694D5C120D13C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::GameObject* Get()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E694D5C120D13C_GET_OFFSET))(this);
	}

	::System::Void Return(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_D8E694D5C120D13C_RETURN_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_8069620AD6655433()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8E694D5C120D13C_METHOD_1_8069620AD6655433_OFFSET))(this);
	}

	::System::Void Method_1_23B75E90AB730380(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_D8E694D5C120D13C_METHOD_1_23B75E90AB730380_OFFSET))(this, a1);
	}
};
