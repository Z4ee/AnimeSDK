#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define CLASS_1_9858AB148111A504_METHOD_1_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x1744B530)
#define CLASS_1_9858AB148111A504_METHOD_1_4AFA10CB41109F16_OFFSET UNITYSDK_OFFSET(0x1744B3A0)
#define CLASS_1_9858AB148111A504_METHOD_1_56B5A2BE57933A7F_OFFSET UNITYSDK_OFFSET(0x1744B1B0)
#define CLASS_1_9858AB148111A504__CTOR_OFFSET UNITYSDK_OFFSET(0x1744B900)

inline static constexpr unsigned int Class_1_9858AB148111A504_TypeDefinitionIndex = 66570;

class Class_1_9858AB148111A504 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_0; // 0x10
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_1; // 0x18
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9858AB148111A504__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_56B5A2BE57933A7F(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9858AB148111A504_METHOD_1_56B5A2BE57933A7F_OFFSET))(this, a1);
	}

	::System::Single Method_1_4AFA10CB41109F16(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9858AB148111A504_METHOD_1_4AFA10CB41109F16_OFFSET))(this, a1);
	}

	::System::Void Method_1_39FD7185C859CEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9858AB148111A504_METHOD_1_39FD7185C859CEAD_OFFSET))(this);
	}
};
