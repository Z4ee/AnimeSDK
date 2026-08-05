#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_E634BF6E7567ED0C___C_METHOD_1_25AFA90298C3F2CC_OFFSET UNITYSDK_OFFSET(0x18D9B940)
#define CLASS_3_E634BF6E7567ED0C___C_METHOD_1_9122FC030BA948E4_OFFSET UNITYSDK_OFFSET(0x18D9BA30)
#define CLASS_3_E634BF6E7567ED0C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D9B8F0)
#define CLASS_3_E634BF6E7567ED0C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D9B930)

inline static constexpr unsigned int Class_3_E634BF6E7567ED0C___c_TypeDefinitionIndex = 57535;

class Class_3_E634BF6E7567ED0C___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E634BF6E7567ED0C___c_TypeDefinitionIndex)->GetStaticField(0x35690);
	}
	static ::Class_3_E634BF6E7567ED0C___c** StaticGet___9()
	{
		return (::Class_3_E634BF6E7567ED0C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E634BF6E7567ED0C___c_TypeDefinitionIndex)->GetStaticField(0x35698);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__3_1()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E634BF6E7567ED0C___c_TypeDefinitionIndex)->GetStaticField(0x356A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E634BF6E7567ED0C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E634BF6E7567ED0C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25AFA90298C3F2CC(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E634BF6E7567ED0C___C_METHOD_1_25AFA90298C3F2CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_9122FC030BA948E4(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_E634BF6E7567ED0C___C_METHOD_1_9122FC030BA948E4_OFFSET))(this, a1);
	}
};
