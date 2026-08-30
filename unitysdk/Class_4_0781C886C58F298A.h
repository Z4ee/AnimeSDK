#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_57FDA42592C5189D;

#define CLASS_4_0781C886C58F298A_METHOD_4_704182D469158D60_OFFSET UNITYSDK_OFFSET(0x15741D20)
#define CLASS_4_0781C886C58F298A_METHOD_4_F1A06AD4A7225E02_OFFSET UNITYSDK_OFFSET(0x15741E50)
#define CLASS_4_0781C886C58F298A__CTOR_OFFSET UNITYSDK_OFFSET(0x15741CF0)

inline static constexpr unsigned int Class_4_0781C886C58F298A_TypeDefinitionIndex = 73447;

class Class_4_0781C886C58F298A : public ::Class_3_3F1B1DE9D9F51912
{
public:
	::Class_1_57FDA42592C5189D* BKIBLEGOACO; // 0x38
	::System::UInt32 GOAKEBLAKCF; // 0x40

	::System::Void _ctor(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57FDA42592C5189D*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_0781C886C58F298A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_704182D469158D60(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_0781C886C58F298A_METHOD_4_704182D469158D60_OFFSET))(this, a1);
	}

	::System::Void Method_4_F1A06AD4A7225E02(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_4_0781C886C58F298A_METHOD_4_F1A06AD4A7225E02_OFFSET))(this, a1, a2);
	}
};
