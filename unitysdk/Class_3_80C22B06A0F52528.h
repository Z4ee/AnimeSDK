#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4473CEA6A5A6B118.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"

class Class_0_16E4307DCC419505_336;
class Class_1_44E98D8B63E395F0;
class Class_1_9B39BF4ECCAD98D9;
class Class_1_EAF7984A8FAD6BE4;
namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define CLASS_3_80C22B06A0F52528_METHOD_3_22ABEDBE31B3268C_OFFSET UNITYSDK_OFFSET(0x1401AAA0)
#define CLASS_3_80C22B06A0F52528_METHOD_3_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x1432BFF0)
#define CLASS_3_80C22B06A0F52528_METHOD_3_CDA78C32A93AD306_OFFSET UNITYSDK_OFFSET(0x1432BDB0)
#define CLASS_3_80C22B06A0F52528__CCTOR_OFFSET UNITYSDK_OFFSET(0x1432C080)
#define CLASS_3_80C22B06A0F52528__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1401AC80)
#define CLASS_3_80C22B06A0F52528__CTOR_OFFSET UNITYSDK_OFFSET(0x1401AAF0)

inline static constexpr unsigned int Class_3_80C22B06A0F52528_TypeDefinitionIndex = 46636;

class Class_3_80C22B06A0F52528 : public ::Class_2_4473CEA6A5A6B118
{
public:
	static ::UnityEngine::Gradient** StaticGet_Field_3_0()
	{
		return (::UnityEngine::Gradient**)Il2CppClass::FromTypeDefinitionIndex(Class_3_80C22B06A0F52528_TypeDefinitionIndex)->GetStaticField(0x3E110);
	}

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_80C22B06A0F52528__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Gradient* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_3_80C22B06A0F52528__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_80C22B06A0F52528__CCTOR_OFFSET))();
	}

	::EnviromentSystemV2Space::PropertyType Method_3_22ABEDBE31B3268C()
	{
		return ((::EnviromentSystemV2Space::PropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80C22B06A0F52528_METHOD_3_22ABEDBE31B3268C_OFFSET))(this);
	}

	::System::Void Method_3_CDA78C32A93AD306(::Class_1_EAF7984A8FAD6BE4* a1, ::Class_1_EAF7984A8FAD6BE4* a2, ::Class_1_44E98D8B63E395F0* a3, ::Class_1_EAF7984A8FAD6BE4*& a4, ::Class_1_9B39BF4ECCAD98D9*& a5, ::Class_0_16E4307DCC419505_336* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_EAF7984A8FAD6BE4*, ::Class_1_44E98D8B63E395F0*, ::Class_1_EAF7984A8FAD6BE4*&, ::Class_1_9B39BF4ECCAD98D9*&, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + CLASS_3_80C22B06A0F52528_METHOD_3_CDA78C32A93AD306_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_3_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80C22B06A0F52528_METHOD_3_861970C5F2C21AB2_OFFSET))(this);
	}
};
