#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_A207B71B4EA42CF6_OFFSET UNITYSDK_OFFSET(0x1648FD20)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_BA1A377B18A273A8_1_OFFSET UNITYSDK_OFFSET(0x16490140)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_BA1A377B18A273A8_OFFSET UNITYSDK_OFFSET(0x1648FBE0)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836__CTOR_OFFSET UNITYSDK_OFFSET(0x1648FBD0)

inline static constexpr unsigned int Class_1_91F5B5FCD8262EE8_Class_1_1CCA9527023CD836_TypeDefinitionIndex = 76582;

class Class_1_91F5B5FCD8262EE8_Class_1_1CCA9527023CD836 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::Action* Field_1_11; // 0x20
	::System::Action_1<::UnityEngine::Transform*>* Field_1_5; // 0x28
	::System::Action* Field_1_4; // 0x30
	::System::Boolean Field_1_7; // 0x38
	::System::Boolean Field_1_1; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA1A377B18A273A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_BA1A377B18A273A8_OFFSET))(this);
	}

	::System::Void Method_1_A207B71B4EA42CF6(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_A207B71B4EA42CF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA1A377B18A273A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_1CCA9527023CD836_METHOD_1_BA1A377B18A273A8_1_OFFSET))(this);
	}
};
