#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C74E18AB5267B277;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_C0F3F8BF07D22CA9___C_METHOD_1_BA56E526A4900D7D_OFFSET UNITYSDK_OFFSET(0x17A86F60)
#define CLASS_3_C0F3F8BF07D22CA9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A86F10)
#define CLASS_3_C0F3F8BF07D22CA9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A86F50)

inline static constexpr unsigned int Class_3_C0F3F8BF07D22CA9___c_TypeDefinitionIndex = 62970;

class Class_3_C0F3F8BF07D22CA9___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_C74E18AB5267B277*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_C74E18AB5267B277*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C0F3F8BF07D22CA9___c_TypeDefinitionIndex)->GetStaticField(0x3AD40);
	}
	static ::Class_3_C0F3F8BF07D22CA9___c** StaticGet___9()
	{
		return (::Class_3_C0F3F8BF07D22CA9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C0F3F8BF07D22CA9___c_TypeDefinitionIndex)->GetStaticField(0x3AD48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C0F3F8BF07D22CA9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0F3F8BF07D22CA9___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA56E526A4900D7D(::Class_3_C74E18AB5267B277* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C74E18AB5267B277*))((::PBYTE)hIl2Cpp + CLASS_3_C0F3F8BF07D22CA9___C_METHOD_1_BA56E526A4900D7D_OFFSET))(this, a1);
	}
};
