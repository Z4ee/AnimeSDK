#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9AC357D52CEBEEFD_1_METHOD_1_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0x1774E960)
#define CLASS_1_9AC357D52CEBEEFD_1_METHOD_1_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x1774E900)
#define CLASS_1_9AC357D52CEBEEFD_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1774E8F0)
#define CLASS_1_9AC357D52CEBEEFD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1774E7F0)

inline static constexpr unsigned int Class_1_9AC357D52CEBEEFD_1_TypeDefinitionIndex = 78457;

class Class_1_9AC357D52CEBEEFD_1 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::Action_2<::System::Boolean, ::System::String*>* Field_1_6; // 0x20
	::Class_2_B4378B46E0020E85* Field_1_1; // 0x28
	::System::Boolean Field_1_2; // 0x30

	::System::Void _ctor(::System::Boolean a1, ::Class_2_B4378B46E0020E85* a2, ::UnityEngine::Transform* a3, ::System::String* a4, ::System::Action_2<::System::Boolean, ::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_B4378B46E0020E85*, ::UnityEngine::Transform*, ::System::String*, ::System::Action_2<::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_9AC357D52CEBEEFD_1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC357D52CEBEEFD_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9AC357D52CEBEEFD_1_METHOD_1_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D8B8CD47CD59618()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AC357D52CEBEEFD_1_METHOD_1_6D8B8CD47CD59618_OFFSET))(this);
	}
};
