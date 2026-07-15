#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2B55159CDDD73374_METHOD_1_031C5A23422D4BE8_OFFSET UNITYSDK_OFFSET(0x164F8C80)
#define CLASS_1_2B55159CDDD73374__CTOR_OFFSET UNITYSDK_OFFSET(0x164F8D30)

inline static constexpr unsigned int Class_1_2B55159CDDD73374_TypeDefinitionIndex = 66410;

class Class_1_2B55159CDDD73374 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x24
	::UnityEngine::Vector3 Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x34
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B55159CDDD73374__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_031C5A23422D4BE8(::Class_1_2B55159CDDD73374* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B55159CDDD73374*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B55159CDDD73374_METHOD_1_031C5A23422D4BE8_OFFSET))(this, a1, a2);
	}
};
