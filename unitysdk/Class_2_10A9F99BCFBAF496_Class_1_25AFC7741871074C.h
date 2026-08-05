#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_10A9F99BCFBAF496_CLASS_1_25AFC7741871074C_METHOD_1_8DF364026923E8B9_OFFSET UNITYSDK_OFFSET(0x1235D520)
#define CLASS_2_10A9F99BCFBAF496_CLASS_1_25AFC7741871074C__CTOR_OFFSET UNITYSDK_OFFSET(0x1235D510)

inline static constexpr unsigned int Class_2_10A9F99BCFBAF496_Class_1_25AFC7741871074C_TypeDefinitionIndex = 66488;

class Class_2_10A9F99BCFBAF496_Class_1_25AFC7741871074C : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_CLASS_1_25AFC7741871074C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8DF364026923E8B9(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_10A9F99BCFBAF496_CLASS_1_25AFC7741871074C_METHOD_1_8DF364026923E8B9_OFFSET))(this, a1, a2);
	}
};
