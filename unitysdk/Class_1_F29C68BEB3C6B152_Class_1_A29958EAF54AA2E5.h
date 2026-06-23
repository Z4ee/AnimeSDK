#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_A29958EAF54AA2E5_METHOD_1_C36A538C866200DB_OFFSET UNITYSDK_OFFSET(0x13A55AF0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_A29958EAF54AA2E5__CTOR_OFFSET UNITYSDK_OFFSET(0x13A55AE0)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_A29958EAF54AA2E5_TypeDefinitionIndex = 70732;

class Class_1_F29C68BEB3C6B152_Class_1_A29958EAF54AA2E5 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_A29958EAF54AA2E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C36A538C866200DB(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_A29958EAF54AA2E5_METHOD_1_C36A538C866200DB_OFFSET))(this, a1, a2);
	}
};
