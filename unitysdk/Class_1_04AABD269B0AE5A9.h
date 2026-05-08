#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_04AABD269B0AE5A9_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12A291B0)
#define CLASS_1_04AABD269B0AE5A9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12A291F0)
#define CLASS_1_04AABD269B0AE5A9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12A28F40)
#define CLASS_1_04AABD269B0AE5A9__CTOR_OFFSET UNITYSDK_OFFSET(0x12A291A0)

inline static constexpr unsigned int Class_1_04AABD269B0AE5A9_TypeDefinitionIndex = 73266;

class Class_1_04AABD269B0AE5A9 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Single Field_1_4; // 0x18
	::System::Single Field_1_6; // 0x1C
	::UnityEngine::Quaternion Field_1_9; // 0x20
	::UnityEngine::Quaternion Field_1_10; // 0x30
	::System::Single Field_1_2; // 0x40
	::System::Single Field_1_1; // 0x44
	::System::Boolean Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x49
	::System::Single Field_1_3; // 0x4C
	::System::Single Field_1_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04AABD269B0AE5A9__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04AABD269B0AE5A9_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04AABD269B0AE5A9_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04AABD269B0AE5A9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
