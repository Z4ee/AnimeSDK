#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7E0DCA9D208905FE;
namespace UnityEngine { class Transform; }

#define CLASS_3_DA947530FE358084_CLASS_1_9338487D13CF5595_METHOD_1_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x8B56BF0)
#define CLASS_3_DA947530FE358084_CLASS_1_9338487D13CF5595_METHOD_1_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0x8B56A30)
#define CLASS_3_DA947530FE358084_CLASS_1_9338487D13CF5595__CTOR_OFFSET UNITYSDK_OFFSET(0x8B563A0)

inline static constexpr unsigned int Class_3_DA947530FE358084_Class_1_9338487D13CF5595_TypeDefinitionIndex = 42320;

class Class_3_DA947530FE358084_Class_1_9338487D13CF5595 : public ::System::Object
{
public:
	::Class_1_7E0DCA9D208905FE* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_9338487D13CF5595__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DEA6ACF0B96986BD(::Class_1_7E0DCA9D208905FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E0DCA9D208905FE*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_9338487D13CF5595_METHOD_1_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_9338487D13CF5595_METHOD_1_7998F8CA1E002410_OFFSET))(this, a1);
	}
};
