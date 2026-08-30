#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_23F67DD15593C8D6;
class Class_1_8279BFFA57BC2D0E;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_8CEB24BFD1DEE893_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15536030)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_0595A0AC6EC83CE8_OFFSET UNITYSDK_OFFSET(0x155369C0)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x15536BE0)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_715628F49D103CE6_OFFSET UNITYSDK_OFFSET(0x155364D0)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_963F877DAF55B26E_OFFSET UNITYSDK_OFFSET(0x15535F30)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_B03F6D31318CC2B8_OFFSET UNITYSDK_OFFSET(0x155366C0)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_B7797AF42220DD8F_OFFSET UNITYSDK_OFFSET(0x15536050)
#define CLASS_2_8CEB24BFD1DEE893_METHOD_2_CE15DB2E8BA8BB3E_OFFSET UNITYSDK_OFFSET(0x155360A0)
#define CLASS_2_8CEB24BFD1DEE893_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15536040)
#define CLASS_2_8CEB24BFD1DEE893__CTOR_OFFSET UNITYSDK_OFFSET(0x15536EC0)
#define CLASS_2_8CEB24BFD1DEE893__ONBIND_OFFSET UNITYSDK_OFFSET(0x15535CA0)
#define CLASS_2_8CEB24BFD1DEE893__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15535FE0)

inline static constexpr unsigned int Class_2_8CEB24BFD1DEE893_TypeDefinitionIndex = 72148;

class Class_2_8CEB24BFD1DEE893 : public ::Class_1_34917908B7833130
{
public:
	static ::Class_2_8CEB24BFD1DEE893** StaticGet__Instance_k__BackingField()
	{
		return (::Class_2_8CEB24BFD1DEE893**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8CEB24BFD1DEE893_TypeDefinitionIndex)->GetStaticField(0x4B60);
	}
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Single HOFFFIJICIP; // 0x0
	// static const ::System::String* JOCPEBMGLFD; // 0x0
	// static const ::System::String* HAGMAFFJDHN; // 0x0
	// static const ::System::String* CLIEMCDHMGO; // 0x0
	// static const ::System::String* JDCOKINJPMB; // 0x0
	// static const ::System::String* JANFOLJAGKJ; // 0x0
	// static const ::System::String* JOKBFODLBFH; // 0x0
	::UnityEngine::RectTransform* MDAALDPJNAL; // 0x60
	::UnityEngine::UI::Slider* LMBCAPKPNMH; // 0x68
	::UnityEngine::RectTransform* NPFLAHJMJGC; // 0x70
	::UnityEngine::UI::Slider* GDPAHPLCMLO; // 0x78
	::UnityEngine::UI::Slider* KODEHPGLFJD; // 0x80
	::UnityEngine::RectTransform* FPCDGPHNCJE; // 0x88
	::UnityEngine::UI::Slider* KINFJKKKIHH; // 0x90
	::Class_1_23F67DD15593C8D6* GIKJFPPGCHA; // 0x98
	::UnityEngine::Animation* OFDFAIMLJKB; // 0xA0
	::UnityEngine::RectTransform* DCNCKFCJJKL; // 0xA8
	::System::Boolean JLFOHMHDMHM; // 0xB0
	::System::Boolean FNECNBDADDJ; // 0xB1

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

	static ::System::Void set_Instance(::Class_2_8CEB24BFD1DEE893* a1)
	{
		return ((::System::Void(*)(::Class_2_8CEB24BFD1DEE893*))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_SET_INSTANCE_OFFSET))(a1);
	}

	::System::Void Method_2_B7797AF42220DD8F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_B7797AF42220DD8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE15DB2E8BA8BB3E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_CE15DB2E8BA8BB3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B03F6D31318CC2B8(::Class_1_8279BFFA57BC2D0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8279BFFA57BC2D0E*))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_B03F6D31318CC2B8_OFFSET))(this, a1);
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

	::System::Single Method_2_715628F49D103CE6(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8CEB24BFD1DEE893_METHOD_2_715628F49D103CE6_OFFSET))(this, a1);
	}
};
