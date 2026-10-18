#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_391;
class Class_1_74C6821D77CCA75B;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEventBase; }

#define CLASS_1_3FC50627C70CED0B_METHOD_1_5F6AE921E15E13B7_OFFSET UNITYSDK_OFFSET(0x1EC3F020)
#define CLASS_1_3FC50627C70CED0B_METHOD_1_7D72407109A865EF_OFFSET UNITYSDK_OFFSET(0x1EC3E1D0)
#define CLASS_1_3FC50627C70CED0B_METHOD_1_878FC1D7FAF13E9D_OFFSET UNITYSDK_OFFSET(0x1EC3EA30)
#define CLASS_1_3FC50627C70CED0B_METHOD_1_DDF3F48D581A8C73_OFFSET UNITYSDK_OFFSET(0x1EC3E700)
#define CLASS_1_3FC50627C70CED0B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC3F4F0)

inline static constexpr unsigned int Class_1_3FC50627C70CED0B_TypeDefinitionIndex = 44076;

class Class_1_3FC50627C70CED0B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_KLABJMFDCCP()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FC50627C70CED0B_TypeDefinitionIndex)->GetStaticField(0x478D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FC50627C70CED0B__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_391* Method_1_7D72407109A865EF(::System::Object* a1, ::Class_1_74C6821D77CCA75B* a2)
	{
		return ((::Class_0_16E4307DCC419505_391*(*)(::System::Object*, ::Class_1_74C6821D77CCA75B*))((::PBYTE)hIl2Cpp + CLASS_1_3FC50627C70CED0B_METHOD_1_7D72407109A865EF_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_391* Method_1_878FC1D7FAF13E9D(::System::Object* a1, ::UnityEngine::Events::UnityEventBase* a2, ::Il2CppArray<::System::Type*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_391*(*)(::System::Object*, ::UnityEngine::Events::UnityEventBase*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_3FC50627C70CED0B_METHOD_1_878FC1D7FAF13E9D_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Events::UnityEventBase* Method_1_5F6AE921E15E13B7(::System::Type* a1, ::System::Object* a2, ::System::String* a3)
	{
		return ((::UnityEngine::Events::UnityEventBase*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FC50627C70CED0B_METHOD_1_5F6AE921E15E13B7_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::Type*>* Method_1_DDF3F48D581A8C73(::System::Type* a1)
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_3FC50627C70CED0B_METHOD_1_DDF3F48D581A8C73_OFFSET))(a1);
	}
};
