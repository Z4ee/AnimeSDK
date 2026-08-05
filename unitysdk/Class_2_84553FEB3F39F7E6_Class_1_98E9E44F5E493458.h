#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_84553FEB3F39F7E6_CLASS_1_98E9E44F5E493458__CTOR_OFFSET UNITYSDK_OFFSET(0x14417120)

inline static constexpr unsigned int Class_2_84553FEB3F39F7E6_Class_1_98E9E44F5E493458_TypeDefinitionIndex = 53424;

class Class_2_84553FEB3F39F7E6_Class_1_98E9E44F5E493458 : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_7; // 0x10
	::MoleMole::MonoGamepadModule* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::MoleMole::MonoGamepadModule* a1, ::System::Int32 a2, ::UnityEngine::UI::Extension::UILocalizationText* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_2_84553FEB3F39F7E6_CLASS_1_98E9E44F5E493458__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
