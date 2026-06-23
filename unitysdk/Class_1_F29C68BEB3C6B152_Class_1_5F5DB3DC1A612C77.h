#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_5F5DB3DC1A612C77_METHOD_1_E60E161E0BE27979_OFFSET UNITYSDK_OFFSET(0x12DE8CD0)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_5F5DB3DC1A612C77__CTOR_OFFSET UNITYSDK_OFFSET(0x12DE8CC0)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_5F5DB3DC1A612C77_TypeDefinitionIndex = 70766;

class Class_1_F29C68BEB3C6B152_Class_1_5F5DB3DC1A612C77 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_5F5DB3DC1A612C77__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E60E161E0BE27979(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::DateTime a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_5F5DB3DC1A612C77_METHOD_1_E60E161E0BE27979_OFFSET))(this, a1, a2);
	}
};
