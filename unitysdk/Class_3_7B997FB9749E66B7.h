#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_7B997FB9749E66B7_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x11C15C00)
#define CLASS_3_7B997FB9749E66B7_METHOD_3_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x11C15B60)
#define CLASS_3_7B997FB9749E66B7__CTOR_OFFSET UNITYSDK_OFFSET(0x11C15CC0)

inline static constexpr unsigned int Class_3_7B997FB9749E66B7_TypeDefinitionIndex = 40042;

class Class_3_7B997FB9749E66B7 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::RectTransform* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B997FB9749E66B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7B997FB9749E66B7_METHOD_3_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B997FB9749E66B7_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
