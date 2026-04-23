#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_015A32DE380F4196;
namespace System { class String; }

#define CLASS_1_EA80EBCE663FE95A_METHOD_1_4ED5A32649C8BEBA_OFFSET UNITYSDK_OFFSET(0x91636C0)
#define CLASS_1_EA80EBCE663FE95A__CTOR_OFFSET UNITYSDK_OFFSET(0x91638A0)

inline static constexpr unsigned int Class_1_EA80EBCE663FE95A_TypeDefinitionIndex = 62695;

class Class_1_EA80EBCE663FE95A : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x1C
	::UnityEngine::Quaternion Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA80EBCE663FE95A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4ED5A32649C8BEBA(::Class_1_015A32DE380F4196* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_015A32DE380F4196*))((::PBYTE)hIl2Cpp + CLASS_1_EA80EBCE663FE95A_METHOD_1_4ED5A32649C8BEBA_OFFSET))(this, a1);
	}
};
