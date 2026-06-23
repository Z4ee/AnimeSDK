#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98EB31C24C284B75_Struct_2_E9D871EB4F62E1AD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_98EB31C24C284B75;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_98EB31C24C284B75_CLASS_1_3F643AFB4574EC02_METHOD_1_63AF6E26D9D839FF_OFFSET UNITYSDK_OFFSET(0x159EC2A0)
#define CLASS_1_98EB31C24C284B75_CLASS_1_3F643AFB4574EC02__CTOR_OFFSET UNITYSDK_OFFSET(0x159EC290)

inline static constexpr unsigned int Class_1_98EB31C24C284B75_Class_1_3F643AFB4574EC02_TypeDefinitionIndex = 59912;

class Class_1_98EB31C24C284B75_Class_1_3F643AFB4574EC02 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_4; // 0x10
	::Class_1_98EB31C24C284B75* Field_1_0; // 0x18
	::System::Action_2<::System::Boolean, ::UnityEngine::GameObject*>* Field_1_5; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::UnityEngine::Quaternion Field_1_3; // 0x2C
	::UnityEngine::Vector3 Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_1_3F643AFB4574EC02__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_63AF6E26D9D839FF(::System::Boolean a1, ::Class_1_98EB31C24C284B75_Struct_2_E9D871EB4F62E1AD a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_98EB31C24C284B75_Struct_2_E9D871EB4F62E1AD))((::PBYTE)hIl2Cpp + CLASS_1_98EB31C24C284B75_CLASS_1_3F643AFB4574EC02_METHOD_1_63AF6E26D9D839FF_OFFSET))(this, a1, a2);
	}
};
