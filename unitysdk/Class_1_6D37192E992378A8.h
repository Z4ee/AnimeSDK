#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8822C04675F1EA68.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_6D37192E992378A8__CTOR_OFFSET UNITYSDK_OFFSET(0x18E107A0)

inline static constexpr unsigned int Class_1_6D37192E992378A8_TypeDefinitionIndex = 46900;

class Class_1_6D37192E992378A8 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::Enum_3_8822C04675F1EA68 Field_1_3; // 0x20
	::System::Boolean Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D37192E992378A8__CTOR_OFFSET))(this);
	}
};
