#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0AF00976E6903061__CTOR_OFFSET UNITYSDK_OFFSET(0x12489300)

inline static constexpr unsigned int Class_1_0AF00976E6903061_TypeDefinitionIndex = 61003;

class Class_1_0AF00976E6903061 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_6; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Double Field_1_4; // 0x28
	::System::Double Field_1_3; // 0x30
	::System::Double Field_1_2; // 0x38
	::System::Double Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AF00976E6903061__CTOR_OFFSET))(this);
	}
};
