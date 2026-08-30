#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1E32D594CE469049;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_ABD7461EE4ED35E9__CTOR_OFFSET UNITYSDK_OFFSET(0x16367200)

inline static constexpr unsigned int Class_1_ABD7461EE4ED35E9_TypeDefinitionIndex = 71671;

class Class_1_ABD7461EE4ED35E9 : public ::System::Object
{
public:
	::UnityEngine::Transform* MJPMAPNJMNE; // 0x10
	::Class_1_1E32D594CE469049* IDJEEOFELEJ; // 0x18
	::UnityEngine::UI::Text* IABIKOKLBLJ; // 0x20
	::System::Boolean LMJDNIGEHCO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABD7461EE4ED35E9__CTOR_OFFSET))(this);
	}
};
