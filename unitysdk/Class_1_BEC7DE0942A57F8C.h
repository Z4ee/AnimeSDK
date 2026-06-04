#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_16F410D309DC331F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_90;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BEC7DE0942A57F8C_CLEAR_OFFSET UNITYSDK_OFFSET(0x18CF77E0)
#define CLASS_1_BEC7DE0942A57F8C_METHOD_1_F048DD9CE44FEA43_OFFSET UNITYSDK_OFFSET(0x18CF79D0)
#define CLASS_1_BEC7DE0942A57F8C_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18CF7900)
#define CLASS_1_BEC7DE0942A57F8C_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18CF7990)
#define CLASS_1_BEC7DE0942A57F8C__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF7B80)

inline static constexpr unsigned int Class_1_BEC7DE0942A57F8C_TypeDefinitionIndex = 38743;

class Class_1_BEC7DE0942A57F8C : public ::System::Object
{
public:
	::Struct_2_16F410D309DC331F Field_1_0; // 0x10
	::RPG::PoolList_1<::Struct_2_16F410D309DC331F>* Field_1_1; // 0x38
	::Class_0_16E4307DCC419505_90* Field_1_2; // 0x40
	::UnityEngine::GameObject* Field_1_3; // 0x48
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* Field_1_4; // 0x50
	::System::String* Field_1_5; // 0x58
	::UnityEngine::Transform* Field_1_6; // 0x60
	::System::String* Field_1_7; // 0x68
	::System::String* Field_1_8; // 0x70
	::System::String* Field_1_9; // 0x78
	::UnityEngine::Vector3 Field_1_10; // 0x80
	::System::Boolean Field_1_11; // 0x8C
	::System::Boolean Field_1_12; // 0x8D
	::System::Boolean Field_1_13; // 0x8E
	::UnityEngine::Quaternion Field_1_14; // 0x90
	::System::Boolean Field_1_15; // 0xA0
	::System::Boolean Field_1_16; // 0xA1
	::System::Boolean Field_1_17; // 0xA2
	::System::Boolean Field_1_18; // 0xA3
	::UnityEngine::Vector3 Field_1_19; // 0xA4
	::UnityEngine::Vector3 Field_1_20; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC7DE0942A57F8C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC7DE0942A57F8C_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC7DE0942A57F8C_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC7DE0942A57F8C_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_F048DD9CE44FEA43(::Class_1_BEC7DE0942A57F8C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BEC7DE0942A57F8C*))((::PBYTE)hIl2Cpp + CLASS_1_BEC7DE0942A57F8C_METHOD_1_F048DD9CE44FEA43_OFFSET))(this, a1);
	}
};
