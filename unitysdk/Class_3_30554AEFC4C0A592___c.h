#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_29AD770B16B2D814;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_30554AEFC4C0A592___C_METHOD_1_0B3EB362858C4A1C_OFFSET UNITYSDK_OFFSET(0x1667D730)
#define CLASS_3_30554AEFC4C0A592___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1667D6E0)
#define CLASS_3_30554AEFC4C0A592___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1667D720)

inline static constexpr unsigned int Class_3_30554AEFC4C0A592___c_TypeDefinitionIndex = 64925;

class Class_3_30554AEFC4C0A592___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_29AD770B16B2D814*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_3_29AD770B16B2D814*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_30554AEFC4C0A592___c_TypeDefinitionIndex)->GetStaticField(0x4F500);
	}
	static ::Class_3_30554AEFC4C0A592___c** StaticGet___9()
	{
		return (::Class_3_30554AEFC4C0A592___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_30554AEFC4C0A592___c_TypeDefinitionIndex)->GetStaticField(0x4F508);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_30554AEFC4C0A592___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30554AEFC4C0A592___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0B3EB362858C4A1C(::Class_3_29AD770B16B2D814* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_29AD770B16B2D814*))((::PBYTE)hIl2Cpp + CLASS_3_30554AEFC4C0A592___C_METHOD_1_0B3EB362858C4A1C_OFFSET))(this, a1);
	}
};
