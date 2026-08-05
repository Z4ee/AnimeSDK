#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_1_C02649245A5D2626_CLASS_1_5F5DB3DC1A612C77_METHOD_1_E60E161E0BE27979_OFFSET UNITYSDK_OFFSET(0x1645F120)
#define CLASS_1_C02649245A5D2626_CLASS_1_5F5DB3DC1A612C77__CTOR_OFFSET UNITYSDK_OFFSET(0x1645F110)

inline static constexpr unsigned int Class_1_C02649245A5D2626_Class_1_5F5DB3DC1A612C77_TypeDefinitionIndex = 52499;

class Class_1_C02649245A5D2626_Class_1_5F5DB3DC1A612C77 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_5F5DB3DC1A612C77__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E60E161E0BE27979(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::DateTime a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_5F5DB3DC1A612C77_METHOD_1_E60E161E0BE27979_OFFSET))(this, a1, a2);
	}
};
