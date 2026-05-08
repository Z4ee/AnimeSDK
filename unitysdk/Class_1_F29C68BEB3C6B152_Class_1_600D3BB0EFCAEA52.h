#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_600D3BB0EFCAEA52_METHOD_1_E89B514DCCB1C5B0_OFFSET UNITYSDK_OFFSET(0xF5F7E40)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_600D3BB0EFCAEA52__CTOR_OFFSET UNITYSDK_OFFSET(0xF5F7E30)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_600D3BB0EFCAEA52_TypeDefinitionIndex = 62615;

class Class_1_F29C68BEB3C6B152_Class_1_600D3BB0EFCAEA52 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_600D3BB0EFCAEA52__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E89B514DCCB1C5B0(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::DateTime a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_600D3BB0EFCAEA52_METHOD_1_E89B514DCCB1C5B0_OFFSET))(this, a1, a2);
	}
};
