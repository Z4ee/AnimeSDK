#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_041BD52953DD9145_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x123CEF80)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_041BD52953DD9145_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x123CEDC0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_041BD52953DD9145__CTOR_OFFSET UNITYSDK_OFFSET(0x123CEDB0)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_041BD52953DD9145_TypeDefinitionIndex = 82168;

class Class_1_8B550A61FC9DDA82_Class_1_041BD52953DD9145 : public ::System::Object
{
public:
	::UnityEngine::UI::Text* Field_1_0; // 0x10
	::UnityEngine::AnimationCurve* Field_1_1; // 0x18
	::UnityEngine::Color Field_1_4; // 0x20
	::System::Single Field_1_2; // 0x30
	::UnityEngine::Color Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_041BD52953DD9145__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_041BD52953DD9145_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_041BD52953DD9145_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
