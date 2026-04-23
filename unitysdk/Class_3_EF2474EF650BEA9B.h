#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75D32E05326D489C.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"

class Class_0_16E4307DCC419505_323;
class Class_1_C662E2F2A633F51D;
class Class_1_E0DD280A885A630F;
class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define CLASS_3_EF2474EF650BEA9B_METHOD_3_22ABEDBE31B3268C_OFFSET UNITYSDK_OFFSET(0x11B4C1A0)
#define CLASS_3_EF2474EF650BEA9B_METHOD_3_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x11B4C710)
#define CLASS_3_EF2474EF650BEA9B_METHOD_3_E2159B107C919331_OFFSET UNITYSDK_OFFSET(0x11B4C4F0)
#define CLASS_3_EF2474EF650BEA9B__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B4C790)
#define CLASS_3_EF2474EF650BEA9B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11B4C380)
#define CLASS_3_EF2474EF650BEA9B__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4C1F0)

inline static constexpr unsigned int Class_3_EF2474EF650BEA9B_TypeDefinitionIndex = 46053;

class Class_3_EF2474EF650BEA9B : public ::Class_2_75D32E05326D489C
{
public:
	static ::UnityEngine::Gradient** StaticGet_Field_3_0()
	{
		return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EF2474EF650BEA9B_TypeDefinitionIndex)->GetStaticField(0x4BDD0);
	}

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EF2474EF650BEA9B__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Gradient* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_3_EF2474EF650BEA9B__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EF2474EF650BEA9B__CCTOR_OFFSET))();
	}

	::EnviromentSystemV2Space::PropertyType Method_3_22ABEDBE31B3268C()
	{
		return ((::EnviromentSystemV2Space::PropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF2474EF650BEA9B_METHOD_3_22ABEDBE31B3268C_OFFSET))(this);
	}

	::System::Void Method_3_E2159B107C919331(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2, ::Class_1_C662E2F2A633F51D* a3, ::Class_1_EAF7984A8FAD6BE4*& a4, ::Class_1_E0DD280A885A630F*& a5, ::Class_0_16E4307DCC419505_323* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_C662E2F2A633F51D*, ::Class_1_EAF7984A8FAD6BE4*&, ::Class_1_E0DD280A885A630F*&, ::Class_0_16E4307DCC419505_323*))((::PBYTE)hIl2Cpp + CLASS_3_EF2474EF650BEA9B_METHOD_3_E2159B107C919331_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_3_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF2474EF650BEA9B_METHOD_3_3422201382CE593B_OFFSET))(this);
	}
};
