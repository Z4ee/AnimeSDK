#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C10F28B737AE4307;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_ABD7461EE4ED35E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1198B860)

inline static constexpr unsigned int Class_1_ABD7461EE4ED35E9_TypeDefinitionIndex = 66095;

class Class_1_ABD7461EE4ED35E9 : public ::System::Object
{
public:
	::Class_1_C10F28B737AE4307* Field_1_2; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::UnityEngine::UI::Text* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABD7461EE4ED35E9__CTOR_OFFSET))(this);
	}
};
