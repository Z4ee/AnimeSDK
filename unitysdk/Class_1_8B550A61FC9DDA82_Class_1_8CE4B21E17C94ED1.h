#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_8CE4B21E17C94ED1_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x19F5EFC0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_8CE4B21E17C94ED1_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x19F5F110)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_8CE4B21E17C94ED1__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5EFB0)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_8CE4B21E17C94ED1_TypeDefinitionIndex = 50178;

class Class_1_8B550A61FC9DDA82_Class_1_8CE4B21E17C94ED1 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_1; // 0x10
	::UnityEngine::UI::Image* Field_1_2; // 0x18
	::UnityEngine::Color Field_1_7; // 0x20
	::System::Single Field_1_0; // 0x30
	::UnityEngine::Color Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_8CE4B21E17C94ED1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_8CE4B21E17C94ED1_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_8CE4B21E17C94ED1_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}
};
