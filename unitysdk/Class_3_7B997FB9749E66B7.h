#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_7B997FB9749E66B7_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x14A48FF0)
#define CLASS_3_7B997FB9749E66B7_METHOD_3_69FAD2F9E8A43CC3_OFFSET UNITYSDK_OFFSET(0x14A49150)
#define CLASS_3_7B997FB9749E66B7_METHOD_3_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x14A48F50)
#define CLASS_3_7B997FB9749E66B7_METHOD_3_978DEB991218B150_OFFSET UNITYSDK_OFFSET(0x14A49140)
#define CLASS_3_7B997FB9749E66B7__CTOR_OFFSET UNITYSDK_OFFSET(0x14A490B0)

inline static constexpr unsigned int Class_3_7B997FB9749E66B7_TypeDefinitionIndex = 44046;

class Class_3_7B997FB9749E66B7 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::RectTransform* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B997FB9749E66B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_929BD2659F9FA6CA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_7B997FB9749E66B7_METHOD_3_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::RectTransform* Method_3_978DEB991218B150()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B997FB9749E66B7_METHOD_3_978DEB991218B150_OFFSET))(this);
	}

	::System::Void Method_3_69FAD2F9E8A43CC3(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_3_7B997FB9749E66B7_METHOD_3_69FAD2F9E8A43CC3_OFFSET))(this, a1);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B997FB9749E66B7_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
