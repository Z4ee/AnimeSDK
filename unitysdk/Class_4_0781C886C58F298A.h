#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_B4D062A3AA74182F;

#define CLASS_4_0781C886C58F298A_METHOD_4_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x1157BAA0)
#define CLASS_4_0781C886C58F298A_METHOD_4_F1A06AD4A7225E02_OFFSET UNITYSDK_OFFSET(0x1157BA40)
#define CLASS_4_0781C886C58F298A_METHOD_4_F7E674C1303ACB5B_OFFSET UNITYSDK_OFFSET(0x1157B980)
#define CLASS_4_0781C886C58F298A__CTOR_OFFSET UNITYSDK_OFFSET(0x1157B950)

inline static constexpr unsigned int Class_4_0781C886C58F298A_TypeDefinitionIndex = 60273;

class Class_4_0781C886C58F298A : public ::Class_3_3F1B1DE9D9F51912
{
public:
	::Class_1_B4D062A3AA74182F* Field_4_0; // 0x38
	::System::UInt32 Field_4_1; // 0x40

	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_0781C886C58F298A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_F7E674C1303ACB5B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_0781C886C58F298A_METHOD_4_F7E674C1303ACB5B_OFFSET))(this, a1);
	}

	::System::Void Method_4_F1A06AD4A7225E02(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_4_0781C886C58F298A_METHOD_4_F1A06AD4A7225E02_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_0781C886C58F298A_METHOD_4_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
