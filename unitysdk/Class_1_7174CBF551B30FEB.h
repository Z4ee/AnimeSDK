#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7174CBF551B30FEB_CLEAR_OFFSET UNITYSDK_OFFSET(0x169E0430)
#define CLASS_1_7174CBF551B30FEB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x169E03B0)
#define CLASS_1_7174CBF551B30FEB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x169E03F0)
#define CLASS_1_7174CBF551B30FEB__CTOR_OFFSET UNITYSDK_OFFSET(0x169E0580)

inline static constexpr unsigned int Class_1_7174CBF551B30FEB_TypeDefinitionIndex = 33305;

class Class_1_7174CBF551B30FEB : public ::System::Object
{
public:
	::UnityEngine::Collider* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::Struct_2_9BF8902D61AE1796 Field_1_6; // 0x20
	::System::Boolean Field_1_4; // 0xB0
	::System::Boolean Field_1_5; // 0xB1
	::UnityEngine::Bounds Field_1_2; // 0xB4
	::UnityEngine::Bounds Field_1_3; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7174CBF551B30FEB__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7174CBF551B30FEB_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7174CBF551B30FEB_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7174CBF551B30FEB_CLEAR_OFFSET))(this);
	}
};
