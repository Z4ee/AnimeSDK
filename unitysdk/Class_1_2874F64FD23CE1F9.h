#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2874F64FD23CE1F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12656680)
#define CLASS_1_2874F64FD23CE1F9__CTOR_OFFSET UNITYSDK_OFFSET(0x126566C0)

inline static constexpr unsigned int Class_1_2874F64FD23CE1F9_TypeDefinitionIndex = 54915;

class Class_1_2874F64FD23CE1F9 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2874F64FD23CE1F9__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2874F64FD23CE1F9_DISPOSE_OFFSET))(this);
	}
};
