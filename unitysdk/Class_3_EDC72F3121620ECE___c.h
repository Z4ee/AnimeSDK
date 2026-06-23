#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_EDC72F3121620ECE___C_METHOD_1_CD73A3907A86D1E4_OFFSET UNITYSDK_OFFSET(0xD9602A0)
#define CLASS_3_EDC72F3121620ECE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD960250)
#define CLASS_3_EDC72F3121620ECE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD960290)

inline static constexpr unsigned int Class_3_EDC72F3121620ECE___c_TypeDefinitionIndex = 45947;

class Class_3_EDC72F3121620ECE___c : public ::System::Object
{
public:
	static ::Class_3_EDC72F3121620ECE___c** StaticGet___9()
	{
		return (::Class_3_EDC72F3121620ECE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EDC72F3121620ECE___c_TypeDefinitionIndex)->GetStaticField(0x4B420);
	}
	static ::System::Action** StaticGet___9__6_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EDC72F3121620ECE___c_TypeDefinitionIndex)->GetStaticField(0x4B428);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EDC72F3121620ECE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDC72F3121620ECE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CD73A3907A86D1E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EDC72F3121620ECE___C_METHOD_1_CD73A3907A86D1E4_OFFSET))(this);
	}
};
