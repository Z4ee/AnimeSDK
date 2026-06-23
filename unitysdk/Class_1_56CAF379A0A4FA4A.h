#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define CLASS_1_56CAF379A0A4FA4A_METHOD_1_7FD749686F4259C7_OFFSET UNITYSDK_OFFSET(0xFFE4DC0)
#define CLASS_1_56CAF379A0A4FA4A__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE4A20)

inline static constexpr unsigned int Class_1_56CAF379A0A4FA4A_TypeDefinitionIndex = 75267;

class Class_1_56CAF379A0A4FA4A : public ::System::Object
{
public:
	::UnityEngine::UI::Text* Field_1_2; // 0x10
	::UnityEngine::UI::Text* Field_1_3; // 0x18
	::UnityEngine::UI::Image* Field_1_0; // 0x20
	::UnityEngine::UI::Extension::UIButtonEx* Field_1_1; // 0x28
	::System::Int32 Field_1_4; // 0x30

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_56CAF379A0A4FA4A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FD749686F4259C7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_56CAF379A0A4FA4A_METHOD_1_7FD749686F4259C7_OFFSET))(this, a1, a2, a3);
	}
};
