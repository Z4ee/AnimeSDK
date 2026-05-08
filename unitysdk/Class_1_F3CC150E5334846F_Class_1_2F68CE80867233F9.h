#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define CLASS_1_F3CC150E5334846F_CLASS_1_2F68CE80867233F9_METHOD_1_D1A7BB3F8586A2C2_OFFSET UNITYSDK_OFFSET(0x10223190)
#define CLASS_1_F3CC150E5334846F_CLASS_1_2F68CE80867233F9__CTOR_OFFSET UNITYSDK_OFFSET(0x10223180)

inline static constexpr unsigned int Class_1_F3CC150E5334846F_Class_1_2F68CE80867233F9_TypeDefinitionIndex = 53739;

class Class_1_F3CC150E5334846F_Class_1_2F68CE80867233F9 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::Il2CppArray<::System::String*>* Field_1_1; // 0x20
	::UnityEngine::LayerMask Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_2F68CE80867233F9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D1A7BB3F8586A2C2(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_F3CC150E5334846F_CLASS_1_2F68CE80867233F9_METHOD_1_D1A7BB3F8586A2C2_OFFSET))(this, a1);
	}
};
