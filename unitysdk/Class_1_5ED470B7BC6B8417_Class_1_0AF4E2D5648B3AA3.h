#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define CLASS_1_5ED470B7BC6B8417_CLASS_1_0AF4E2D5648B3AA3__CTOR_OFFSET UNITYSDK_OFFSET(0xAC80510)

inline static constexpr unsigned int Class_1_5ED470B7BC6B8417_Class_1_0AF4E2D5648B3AA3_TypeDefinitionIndex = 46449;

class Class_1_5ED470B7BC6B8417_Class_1_0AF4E2D5648B3AA3 : public ::System::Object
{
public:
	::UnityEngine::Object* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::Object* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5ED470B7BC6B8417_CLASS_1_0AF4E2D5648B3AA3__CTOR_OFFSET))(this, a1, a2);
	}
};
