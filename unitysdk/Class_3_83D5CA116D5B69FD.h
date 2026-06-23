#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_50FE0F81D72F755C.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIThreeDMapElement_IconTraitContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_83D5CA116D5B69FD_METHOD_3_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x144759B0)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14476FF0)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_2AA60859E1992EFA_OFFSET UNITYSDK_OFFSET(0x14476DE0)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_3E058A8B3089DC74_OFFSET UNITYSDK_OFFSET(0x14477530)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_3EE64C141A1A0C28_OFFSET UNITYSDK_OFFSET(0x14475C10)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x14475820)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_676314BE1F45AAC3_1_OFFSET UNITYSDK_OFFSET(0x144771D0)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_676314BE1F45AAC3_OFFSET UNITYSDK_OFFSET(0x14477000)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_823422828276EFD9_OFFSET UNITYSDK_OFFSET(0x14476FE0)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_83152C6DF56A6B1A_OFFSET UNITYSDK_OFFSET(0x14477370)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x144757B0)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x144771A0)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x14476DA0)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_E2CFE21492926DBB_OFFSET UNITYSDK_OFFSET(0x14475440)
#define CLASS_3_83D5CA116D5B69FD_METHOD_3_F434636093AEB743_OFFSET UNITYSDK_OFFSET(0x14475B50)
#define CLASS_3_83D5CA116D5B69FD__CTOR_OFFSET UNITYSDK_OFFSET(0x14476D40)

inline static constexpr unsigned int Class_3_83D5CA116D5B69FD_TypeDefinitionIndex = 83922;

class Class_3_83D5CA116D5B69FD : public ::Class_2_50FE0F81D72F755C<::MoleMole::UIThreeDMapElement_IconTraitContext*>
{
public:
	::MoleMole::Battle::Entity* Field_3_1; // 0x70
	::UnityEngine::RectTransform* Field_3_0; // 0x78
	::UnityEngine::Vector3 Field_3_3; // 0x80
	::UnityEngine::Vector3 Field_3_4; // 0x8C
	::UnityEngine::Vector3 Field_3_2; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E2CFE21492926DBB(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_E2CFE21492926DBB_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_3_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_3_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_3_F434636093AEB743(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_F434636093AEB743_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_3_2AA60859E1992EFA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_2AA60859E1992EFA_OFFSET))(this, a1);
	}

	::System::Void Method_3_3EE64C141A1A0C28(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_3EE64C141A1A0C28_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_823422828276EFD9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_823422828276EFD9_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_3_676314BE1F45AAC3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_676314BE1F45AAC3_OFFSET))(this);
	}

	::System::Void Method_3_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Boolean Method_3_676314BE1F45AAC3_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_676314BE1F45AAC3_1_OFFSET))(this);
	}

	::UnityEngine::Color Method_3_83152C6DF56A6B1A()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_83152C6DF56A6B1A_OFFSET))(this);
	}

	::System::Void Method_3_3E058A8B3089DC74(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_3_83D5CA116D5B69FD_METHOD_3_3E058A8B3089DC74_OFFSET))(this, a1, a2);
	}
};
