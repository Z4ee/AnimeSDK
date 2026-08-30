#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_120CA39A4C9D57C0.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"

class Class_0_16E4307DCC419505_379;
class Class_1_39155512A8777971;
class Class_1_9B39BF4ECCAD98D9;
class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define CLASS_3_5D459CD1D83E5FE9_METHOD_3_22ABEDBE31B3268C_OFFSET UNITYSDK_OFFSET(0x187E6E70)
#define CLASS_3_5D459CD1D83E5FE9_METHOD_3_4B10C66120EDFDEF_OFFSET UNITYSDK_OFFSET(0x187E71C0)
#define CLASS_3_5D459CD1D83E5FE9_METHOD_3_7043B9A9D77FB306_OFFSET UNITYSDK_OFFSET(0x187E7470)
#define CLASS_3_5D459CD1D83E5FE9__CCTOR_OFFSET UNITYSDK_OFFSET(0x187E7560)
#define CLASS_3_5D459CD1D83E5FE9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187E7050)
#define CLASS_3_5D459CD1D83E5FE9__CTOR_OFFSET UNITYSDK_OFFSET(0x187E6EC0)

inline static constexpr unsigned int Class_3_5D459CD1D83E5FE9_TypeDefinitionIndex = 49882;

class Class_3_5D459CD1D83E5FE9 : public ::Class_2_120CA39A4C9D57C0
{
public:
	static ::UnityEngine::Gradient** StaticGet_HIDOHJEAHAK()
	{
		return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5D459CD1D83E5FE9_TypeDefinitionIndex)->GetStaticField(0x39870);
	}

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5D459CD1D83E5FE9__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Gradient* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_3_5D459CD1D83E5FE9__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5D459CD1D83E5FE9__CCTOR_OFFSET))();
	}

	::EnviromentSystemV2Space::PropertyType Method_3_22ABEDBE31B3268C()
	{
		return ((::EnviromentSystemV2Space::PropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D459CD1D83E5FE9_METHOD_3_22ABEDBE31B3268C_OFFSET))(this);
	}

	::System::Void Method_3_4B10C66120EDFDEF(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2, ::Class_1_39155512A8777971* a3, ::Class_1_EAF7984A8FAD6BE4*& a4, ::Class_1_9B39BF4ECCAD98D9*& a5, ::Class_0_16E4307DCC419505_379* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_39155512A8777971*, ::Class_1_EAF7984A8FAD6BE4*&, ::Class_1_9B39BF4ECCAD98D9*&, ::Class_0_16E4307DCC419505_379*))((::PBYTE)hIl2Cpp + CLASS_3_5D459CD1D83E5FE9_METHOD_3_4B10C66120EDFDEF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_3_7043B9A9D77FB306()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D459CD1D83E5FE9_METHOD_3_7043B9A9D77FB306_OFFSET))(this);
	}
};
