#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_768CE7271445A601_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x19EAC780)
#define CLASS_1_768CE7271445A601_METHOD_1_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x19EACD50)
#define CLASS_1_768CE7271445A601_METHOD_1_C99572307EA64ECF_OFFSET UNITYSDK_OFFSET(0x19EAC7E0)
#define CLASS_1_768CE7271445A601__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAC380)

inline static constexpr unsigned int Class_1_768CE7271445A601_TypeDefinitionIndex = 42602;

class Class_1_768CE7271445A601 : public ::System::Object
{
public:
	::UnityEngine::UI::Text* Field_1_2; // 0x10
	::UnityEngine::UI::Text* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_0; // 0x20

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_768CE7271445A601__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_768CE7271445A601_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C99572307EA64ECF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_768CE7271445A601_METHOD_1_C99572307EA64ECF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_768CE7271445A601_METHOD_1_1DE6433C25680F9D_OFFSET))(this);
	}
};
