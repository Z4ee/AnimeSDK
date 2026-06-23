#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5A134D43F383C46C___C_METHOD_1_2A8B73C445B86D1A_OFFSET UNITYSDK_OFFSET(0x12226FB0)
#define CLASS_1_5A134D43F383C46C___C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x122272F0)
#define CLASS_1_5A134D43F383C46C___C_METHOD_1_E041300CFBBD9160_OFFSET UNITYSDK_OFFSET(0x12227150)
#define CLASS_1_5A134D43F383C46C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12226F60)
#define CLASS_1_5A134D43F383C46C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12226FA0)

inline static constexpr unsigned int Class_1_5A134D43F383C46C___c_TypeDefinitionIndex = 47238;

class Class_1_5A134D43F383C46C___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__16_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A134D43F383C46C___c_TypeDefinitionIndex)->GetStaticField(0x4A8D0);
	}
	static ::System::Action** StaticGet___9__16_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A134D43F383C46C___c_TypeDefinitionIndex)->GetStaticField(0x4A8D8);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A134D43F383C46C___c_TypeDefinitionIndex)->GetStaticField(0x4A8E0);
	}
	static ::Class_1_5A134D43F383C46C___c** StaticGet___9()
	{
		return (::Class_1_5A134D43F383C46C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A134D43F383C46C___c_TypeDefinitionIndex)->GetStaticField(0x4A8E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A134D43F383C46C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A134D43F383C46C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2A8B73C445B86D1A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A134D43F383C46C___C_METHOD_1_2A8B73C445B86D1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_E041300CFBBD9160()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A134D43F383C46C___C_METHOD_1_E041300CFBBD9160_OFFSET))(this);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A134D43F383C46C___C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}
};
