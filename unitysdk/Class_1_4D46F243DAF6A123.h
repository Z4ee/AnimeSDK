#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_4D46F243DAF6A123_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x140B2330)
#define CLASS_1_4D46F243DAF6A123_METHOD_1_9A01B7CD7D956852_OFFSET UNITYSDK_OFFSET(0x140B20D0)
#define CLASS_1_4D46F243DAF6A123_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x140B2370)
#define CLASS_1_4D46F243DAF6A123_TOSTRING_OFFSET UNITYSDK_OFFSET(0x140B1FD0)
#define CLASS_1_4D46F243DAF6A123__CTOR_OFFSET UNITYSDK_OFFSET(0x140B1F90)

inline static constexpr unsigned int Class_1_4D46F243DAF6A123_TypeDefinitionIndex = 71097;

class Class_1_4D46F243DAF6A123 : public ::System::Object
{
public:
	::System::UInt32 Field_1_6; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x14
	::System::UInt32 Field_1_5; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::UnityEngine::Vector3 Field_1_7; // 0x28
	::System::UInt32 Field_1_1; // 0x34

	::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D46F243DAF6A123__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D46F243DAF6A123_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_9A01B7CD7D956852()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D46F243DAF6A123_METHOD_1_9A01B7CD7D956852_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D46F243DAF6A123_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D46F243DAF6A123_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}
};
