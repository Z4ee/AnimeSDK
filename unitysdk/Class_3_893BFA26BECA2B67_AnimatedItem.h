#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_3_893BFA26BECA2B67_ANIMATEDITEM_GET_RANDOMVALUE_OFFSET UNITYSDK_OFFSET(0x15589D90)
#define CLASS_3_893BFA26BECA2B67_ANIMATEDITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1558A410)
#define CLASS_3_893BFA26BECA2B67_ANIMATEDITEM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1558A530)
#define CLASS_3_893BFA26BECA2B67_ANIMATEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1558A370)

inline static constexpr unsigned int Class_3_893BFA26BECA2B67_AnimatedItem_TypeDefinitionIndex = 70296;

class Class_3_893BFA26BECA2B67_AnimatedItem : public ::System::Object
{
public:
	::UnityEngine::Transform* Transform; // 0x10
	::System::Single PercentageOfLine; // 0x18
	::UnityEngine::Vector3 RelativeTranslation; // 0x1C
	::UnityEngine::Vector3 RelativeRotation; // 0x28
	::UnityEngine::Vector3 RelativeScale; // 0x34
	::System::Single RelativeSpeed; // 0x40
	::UnityEngine::Vector3 OriginPosition; // 0x44
	::UnityEngine::Quaternion OriginRotation; // 0x50
	::UnityEngine::Vector3 OriginScale; // 0x60
	::System::Single _RandomValue; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893BFA26BECA2B67_ANIMATEDITEM__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_893BFA26BECA2B67_ANIMATEDITEM__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_893BFA26BECA2B67_ANIMATEDITEM__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single get_RandomValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_893BFA26BECA2B67_ANIMATEDITEM_GET_RANDOMVALUE_OFFSET))(this);
	}
};
