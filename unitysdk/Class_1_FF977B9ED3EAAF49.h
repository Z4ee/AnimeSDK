#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_16F410D309DC331F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_91;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FF977B9ED3EAAF49_CLEAR_OFFSET UNITYSDK_OFFSET(0x1675CB70)
#define CLASS_1_FF977B9ED3EAAF49_METHOD_1_FAA1EB17625DA9B4_OFFSET UNITYSDK_OFFSET(0x1675CD60)
#define CLASS_1_FF977B9ED3EAAF49_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1675CC90)
#define CLASS_1_FF977B9ED3EAAF49_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1675CD20)
#define CLASS_1_FF977B9ED3EAAF49__CTOR_OFFSET UNITYSDK_OFFSET(0x1675CF10)

inline static constexpr unsigned int Class_1_FF977B9ED3EAAF49_TypeDefinitionIndex = 32282;

class Class_1_FF977B9ED3EAAF49 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_91* Field_1_18; // 0x10
	::Struct_2_16F410D309DC331F Field_1_19; // 0x18
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* Field_1_12; // 0x40
	::System::String* Field_1_9; // 0x48
	::UnityEngine::GameObject* Field_1_15; // 0x50
	::System::String* Field_1_6; // 0x58
	::System::String* Field_1_7; // 0x60
	::System::String* Field_1_1; // 0x68
	::RPG::PoolList_1<::Struct_2_16F410D309DC331F>* Field_1_20; // 0x70
	::UnityEngine::Transform* Field_1_16; // 0x78
	::UnityEngine::Vector3 Field_1_4; // 0x80
	::System::Boolean Field_1_14; // 0x8C
	::System::Boolean Field_1_13; // 0x8D
	::System::Boolean Field_1_3; // 0x8E
	::UnityEngine::Vector3 Field_1_11; // 0x90
	::UnityEngine::Vector3 Field_1_10; // 0x9C
	::System::Boolean Field_1_17; // 0xA8
	::System::Boolean Field_1_0; // 0xA9
	::System::Boolean Field_1_8; // 0xAA
	::System::Boolean Field_1_2; // 0xAB
	::UnityEngine::Quaternion Field_1_5; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_FAA1EB17625DA9B4(::Class_1_FF977B9ED3EAAF49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF977B9ED3EAAF49*))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49_METHOD_1_FAA1EB17625DA9B4_OFFSET))(this, a1);
	}
};
