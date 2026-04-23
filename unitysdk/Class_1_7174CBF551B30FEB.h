#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7174CBF551B30FEB_CLEAR_OFFSET UNITYSDK_OFFSET(0x17DED460)
#define CLASS_1_7174CBF551B30FEB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17DED3E0)
#define CLASS_1_7174CBF551B30FEB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17DED420)
#define CLASS_1_7174CBF551B30FEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17DED600)

inline static constexpr unsigned int Class_1_7174CBF551B30FEB_TypeDefinitionIndex = 39094;

class Class_1_7174CBF551B30FEB : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Collider* Field_1_0; // 0x18
	::Struct_2_9BF8902D61AE1796 Field_1_7; // 0x20
	::UnityEngine::Bounds Field_1_4; // 0xB0
	::Struct_2_EAC1BB0F093534A5 Field_1_3; // 0xC8
	::UnityEngine::Bounds Field_1_2; // 0x130
	::System::Boolean Field_1_8; // 0x148
	::System::Boolean Field_1_5; // 0x149
	::System::Boolean Field_1_6; // 0x14A

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
