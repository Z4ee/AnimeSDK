#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_F20F831D471F73F2_METHOD_2_91888C692DAC5E58_OFFSET UNITYSDK_OFFSET(0x14240440)
#define CLASS_2_F20F831D471F73F2__CTOR_OFFSET UNITYSDK_OFFSET(0x14240670)

inline static constexpr unsigned int Class_2_F20F831D471F73F2_TypeDefinitionIndex = 81771;

class Class_2_F20F831D471F73F2 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x50
	::UnityEngine::GameObject* Field_2_6; // 0x58
	::UnityEngine::GameObject* Field_2_5; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x68
	::System::Int32 Field_2_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F20F831D471F73F2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_91888C692DAC5E58(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_F20F831D471F73F2_METHOD_2_91888C692DAC5E58_OFFSET))(this, a1, a2);
	}
};
