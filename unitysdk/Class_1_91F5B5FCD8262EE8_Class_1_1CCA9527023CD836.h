#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_930073A6194C4594_1_OFFSET UNITYSDK_OFFSET(0x14BD4B50)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_930073A6194C4594_OFFSET UNITYSDK_OFFSET(0x14BD4A00)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_A207B71B4EA42CF6_OFFSET UNITYSDK_OFFSET(0x14BD4CA0)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD49F0)

inline static constexpr unsigned int Class_1_91F5B5FCD8262EE8_Class_1_1CCA9527023CD836_TypeDefinitionIndex = 53771;

class Class_1_91F5B5FCD8262EE8_Class_1_1CCA9527023CD836 : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Action_1<::UnityEngine::Transform*>* Field_1_4; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Action* Field_1_5; // 0x30
	::System::Boolean Field_1_0; // 0x38
	::System::Boolean Field_1_2; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_930073A6194C4594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_930073A6194C4594_OFFSET))(this);
	}

	::System::Void Method_1_930073A6194C4594_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_930073A6194C4594_1_OFFSET))(this);
	}

	::System::Void Method_1_A207B71B4EA42CF6(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_A207B71B4EA42CF6_OFFSET))(this, a1);
	}
};
