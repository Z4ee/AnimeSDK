#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_284A7C794AA93007___C_METHOD_1_2A8B73C445B86D1A_OFFSET UNITYSDK_OFFSET(0x12CDC2D0)
#define CLASS_1_284A7C794AA93007___C_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x12CDC470)
#define CLASS_1_284A7C794AA93007___C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x12CDC610)
#define CLASS_1_284A7C794AA93007___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CDC280)
#define CLASS_1_284A7C794AA93007___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12CDC2C0)

inline static constexpr unsigned int Class_1_284A7C794AA93007___c_TypeDefinitionIndex = 56314;

class Class_1_284A7C794AA93007___c : public ::System::Object
{
public:
	static ::Class_1_284A7C794AA93007___c** StaticGet___9()
	{
		return (::Class_1_284A7C794AA93007___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_284A7C794AA93007___c_TypeDefinitionIndex)->GetStaticField(0x49690);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_284A7C794AA93007___c_TypeDefinitionIndex)->GetStaticField(0x49698);
	}
	static ::System::Action** StaticGet___9__16_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_284A7C794AA93007___c_TypeDefinitionIndex)->GetStaticField(0x496A0);
	}
	static ::System::Action** StaticGet___9__16_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_284A7C794AA93007___c_TypeDefinitionIndex)->GetStaticField(0x496A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_284A7C794AA93007___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284A7C794AA93007___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2A8B73C445B86D1A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_284A7C794AA93007___C_METHOD_1_2A8B73C445B86D1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284A7C794AA93007___C_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284A7C794AA93007___C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}
};
