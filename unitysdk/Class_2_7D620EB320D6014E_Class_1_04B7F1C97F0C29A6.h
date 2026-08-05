#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_7D620EB320D6014E_CLASS_1_04B7F1C97F0C29A6__CTOR_OFFSET UNITYSDK_OFFSET(0x166A6F30)

inline static constexpr unsigned int Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6_TypeDefinitionIndex = 64891;

class Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_6; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x1C
	::System::Boolean Field_1_7; // 0x28
	::Unity::Jobs::JobHandle Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D620EB320D6014E_CLASS_1_04B7F1C97F0C29A6__CTOR_OFFSET))(this);
	}
};
