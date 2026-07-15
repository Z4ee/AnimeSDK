#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6B68BF08CE41EC5F;
namespace UnityEngine { class Transform; }

#define CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x17FB2520)
#define CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755_METHOD_1_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0x17FB2360)
#define CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB1E10)

inline static constexpr unsigned int Class_3_DA947530FE358084_Class_1_DB111C6B0C9D8755_TypeDefinitionIndex = 49917;

class Class_3_DA947530FE358084_Class_1_DB111C6B0C9D8755 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::Class_1_6B68BF08CE41EC5F* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DEA6ACF0B96986BD(::Class_1_6B68BF08CE41EC5F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B68BF08CE41EC5F*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755_METHOD_1_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}
};
