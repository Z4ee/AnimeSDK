#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_CLASS_1_102F18A125F5C553_METHOD_1_35370E10A6B50F0E_OFFSET UNITYSDK_OFFSET(0x11681F90)
#define CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_CLASS_1_102F18A125F5C553__CTOR_OFFSET UNITYSDK_OFFSET(0x11681F80)

inline static constexpr unsigned int Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7_Class_1_102F18A125F5C553_TypeDefinitionIndex = 47439;

class Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7_Class_1_102F18A125F5C553 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_CLASS_1_102F18A125F5C553__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_35370E10A6B50F0E(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_CLASS_1_AAD0F9E611D8A5E7_CLASS_1_102F18A125F5C553_METHOD_1_35370E10A6B50F0E_OFFSET))(this, a1);
	}
};
