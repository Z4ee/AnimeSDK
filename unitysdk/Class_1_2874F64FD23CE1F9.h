#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2874F64FD23CE1F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12803A30)
#define CLASS_1_2874F64FD23CE1F9__CTOR_OFFSET UNITYSDK_OFFSET(0x12803A70)

inline static constexpr unsigned int Class_1_2874F64FD23CE1F9_TypeDefinitionIndex = 61638;

class Class_1_2874F64FD23CE1F9 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2874F64FD23CE1F9__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2874F64FD23CE1F9_DISPOSE_OFFSET))(this);
	}
};
