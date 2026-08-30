#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_349FFE7FFEC1E3D1;
namespace UnityEngine { class Transform; }

#define CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755_METHOD_1_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0xBAD0620)
#define CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755_METHOD_1_DEA6ACF0B96986BD_OFFSET UNITYSDK_OFFSET(0xBAD0460)
#define CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755__CTOR_OFFSET UNITYSDK_OFFSET(0xBACFF10)

inline static constexpr unsigned int Class_3_DA947530FE358084_Class_1_DB111C6B0C9D8755_TypeDefinitionIndex = 52578;

class Class_3_DA947530FE358084_Class_1_DB111C6B0C9D8755 : public ::System::Object
{
public:
	::Class_1_349FFE7FFEC1E3D1* CKLLIFDLNNO; // 0x10
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x18
	::UnityEngine::Vector3 NOALMJLJJGC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DEA6ACF0B96986BD(::Class_1_349FFE7FFEC1E3D1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_349FFE7FFEC1E3D1*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755_METHOD_1_DEA6ACF0B96986BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_DB111C6B0C9D8755_METHOD_1_4867D67F27947ACE_OFFSET))(this, a1);
	}
};
