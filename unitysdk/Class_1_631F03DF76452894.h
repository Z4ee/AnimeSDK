#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_16F410D309DC331F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_109;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_631F03DF76452894_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8FE390)
#define CLASS_1_631F03DF76452894_METHOD_1_9636FCCD0F2A7398_OFFSET UNITYSDK_OFFSET(0x1A8FE5B0)
#define CLASS_1_631F03DF76452894_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A8FE4E0)
#define CLASS_1_631F03DF76452894_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A8FE570)
#define CLASS_1_631F03DF76452894__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FE790)

inline static constexpr unsigned int Class_1_631F03DF76452894_TypeDefinitionIndex = 39551;

class Class_1_631F03DF76452894 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_109* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::UnityEngine::GameObject* Field_1_3; // 0x28
	::RPG::PoolList_1<::Struct_2_16F410D309DC331F>* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::UnityEngine::Transform* Field_1_7; // 0x48
	::Struct_2_16F410D309DC331F Field_1_8; // 0x50
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* Field_1_9; // 0x78
	::UnityEngine::Vector3 Field_1_10; // 0x80
	::UnityEngine::Vector3 Field_1_11; // 0x8C
	::System::Boolean Field_1_12; // 0x98
	::System::Boolean Field_1_13; // 0x99
	::System::Boolean Field_1_14; // 0x9A
	::System::Boolean Field_1_15; // 0x9B
	::UnityEngine::Vector3 Field_1_16; // 0x9C
	::UnityEngine::Vector3 Field_1_17; // 0xA8
	::System::Boolean Field_1_18; // 0xB4
	::System::Boolean Field_1_19; // 0xB5
	::System::Boolean Field_1_20; // 0xB6
	::System::Boolean Field_1_21; // 0xB7
	::UnityEngine::Quaternion Field_1_22; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_9636FCCD0F2A7398(::Class_1_631F03DF76452894* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_631F03DF76452894*))((::PBYTE)hIl2Cpp + CLASS_1_631F03DF76452894_METHOD_1_9636FCCD0F2A7398_OFFSET))(this, a1);
	}
};
