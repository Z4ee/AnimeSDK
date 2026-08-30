#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_4E1996B50E2373CB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1613C720)
#define CLASS_1_4E1996B50E2373CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1613C780)

inline static constexpr unsigned int Class_1_4E1996B50E2373CB_TypeDefinitionIndex = 60891;

class Class_1_4E1996B50E2373CB : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::AnimationCurve*>* AKBBKCCPEPB; // 0x10
	::Il2CppArray<::UnityEngine::AnimationCurve*>* AADLBKNFBDH; // 0x18
	::System::Int32 NOIIIOKMIIN; // 0x20
	::System::Single GCJMFBKLGHI; // 0x24
	::System::Single MNIHJPAICJE; // 0x28
	::System::Single OOMKEJOJAEH; // 0x2C
	::System::Single DCJLFCIIFMJ; // 0x30
	::System::Int32 ABMIICDEDCB; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1996B50E2373CB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1996B50E2373CB_CLEAR_OFFSET))(this);
	}
};
