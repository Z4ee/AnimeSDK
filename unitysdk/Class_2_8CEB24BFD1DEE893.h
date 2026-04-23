#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_23F67DD15593C8D6;
class Class_1_8279BFFA57BC2D0E;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_8CEB24BFD1DEE893_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9673920)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_0595A0AC6EC83CE8_OFFSET UNITYSDK_OFFSET(0x9674120)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_4630F861BC7898CF_OFFSET UNITYSDK_OFFSET(0x9673C70)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x9674350)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_934CCF2371CAA7BF_OFFSET UNITYSDK_OFFSET(0x96739F0)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_963F877DAF55B26E_OFFSET UNITYSDK_OFFSET(0x9673800)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_A134E903C4692403_OFFSET UNITYSDK_OFFSET(0x9673E30)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0x96739A0)
#define CLASS_2_8CEB24BFD1DEE893_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9673960)
#define CLASS_2_8CEB24BFD1DEE893__CTOR_OFFSET UNITYSDK_OFFSET(0x9674640)
#define CLASS_2_8CEB24BFD1DEE893__ONBIND_OFFSET UNITYSDK_OFFSET(0x9673540)
#define CLASS_2_8CEB24BFD1DEE893__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x96738B0)
#define CLASS_2_8CEB24BFD1DEE893___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9674670)
#define CLASS_2_8CEB24BFD1DEE893___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x96746D0)

inline static constexpr unsigned int Class_2_8CEB24BFD1DEE893_TypeDefinitionIndex = 66528;

class Class_2_8CEB24BFD1DEE893 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::Class_2_8CEB24BFD1DEE893** StaticGet__Instance_k__BackingField()
	{
		return (::Class_2_8CEB24BFD1DEE893**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CEB24BFD1DEE893_TypeDefinitionIndex)->GetStaticField(0xCCD0);
	}
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::Single Field_2_14; // 0x0
	// static const ::System::String* Field_2_15; // 0x0
	// static const ::System::String* Field_2_16; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	::UnityEngine::UI::Slider* Field_2_1; // 0x60
	::UnityEngine::UI::Slider* Field_2_0; // 0x68
	::UnityEngine::RectTransform* Field_2_8; // 0x70
	::UnityEngine::UI::Slider* Field_2_2; // 0x78
	::UnityEngine::RectTransform* Field_2_6; // 0x80
	::UnityEngine::RectTransform* Field_2_5; // 0x88
	::UnityEngine::Animation* Field_2_4; // 0x90
	::UnityEngine::RectTransform* Field_2_7; // 0x98
	::Class_1_23F67DD15593C8D6* Field_2_11; // 0xA0
	::UnityEngine::UI::Slider* Field_2_3; // 0xA8
	::System::Boolean Field_2_13; // 0xB0
	::System::Boolean Field_2_12; // 0xB1

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893__ONBIND_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893__ONDISPOSE_OFFSET))(this);
	}

	static ::Class_2_8CEB24BFD1DEE893* get_Instance()
	{
		return ((::Class_2_8CEB24BFD1DEE893*(*)())((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_2_8CEB24BFD1DEE893* value)
	{
		return ((::System::Void(*)(::Class_2_8CEB24BFD1DEE893*))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_SET_INSTANCE_OFFSET))(value);
	}

	::System::Void Method_2_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_934CCF2371CAA7BF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_934CCF2371CAA7BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A134E903C4692403(::Class_1_8279BFFA57BC2D0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8279BFFA57BC2D0E*))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_A134E903C4692403_OFFSET))(this, a1);
	}

	::System::Void Method_2_0595A0AC6EC83CE8(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_0595A0AC6EC83CE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_963F877DAF55B26E(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_963F877DAF55B26E_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_4630F861BC7898CF(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_4630F861BC7898CF_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
