#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class SkirtIK_HairIKClass;

#define SKIRTIK_HAIRIKFREEAXISCLASS_METHOD_1_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0xABD0050)
#define SKIRTIK_HAIRIKFREEAXISCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0xABD00E0)

inline static constexpr unsigned int SkirtIK_HairIKFreeAxisClass_TypeDefinitionIndex = 38166;

class SkirtIK_HairIKFreeAxisClass : public ::System::Object
{
public:
	::System::Int32 Index; // 0x10
	::UnityEngine::Vector2 Direction; // 0x14
	::System::Single Rad; // 0x1C
	::System::Single Range; // 0x20
	::Il2CppArray<::SkirtIK_HairIKClass*>* FreeAxisData; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKFREEAXISCLASS__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKIRTIK_HAIRIKFREEAXISCLASS_METHOD_1_FBF2CB29FD3B55E6_OFFSET))(this);
	}
};
