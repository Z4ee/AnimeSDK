#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_B4D062A3AA74182F;

#define CLASS_5_8194BB0B9B6DF0B2_METHOD_5_CF6A185ED4915242_OFFSET UNITYSDK_OFFSET(0x9ED77A0)
#define CLASS_5_8194BB0B9B6DF0B2_METHOD_5_E970B418D363857B_OFFSET UNITYSDK_OFFSET(0x9ED79D0)
#define CLASS_5_8194BB0B9B6DF0B2_METHOD_5_FC2CF36C4B5E30B2_OFFSET UNITYSDK_OFFSET(0x9ED78B0)
#define CLASS_5_8194BB0B9B6DF0B2__CTOR_OFFSET UNITYSDK_OFFSET(0x9ED7770)

inline static constexpr unsigned int Class_5_8194BB0B9B6DF0B2_TypeDefinitionIndex = 60270;

class Class_5_8194BB0B9B6DF0B2 : public ::Class_4_0781C886C58F298A
{
public:
	::System::Void _ctor(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4D062A3AA74182F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_8194BB0B9B6DF0B2__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_8194BB0B9B6DF0B2* Method_5_CF6A185ED4915242(::Class_1_B4D062A3AA74182F* a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::Class_5_8194BB0B9B6DF0B2*(*)(::Class_1_B4D062A3AA74182F*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_8194BB0B9B6DF0B2_METHOD_5_CF6A185ED4915242_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_5_FC2CF36C4B5E30B2(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_8194BB0B9B6DF0B2_METHOD_5_FC2CF36C4B5E30B2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_E970B418D363857B(::System::Single P0, ::Il2CppArray<::UnityEngine::UIVertex>*& P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_8194BB0B9B6DF0B2_METHOD_5_E970B418D363857B_OFFSET))(this, P0, P1);
	}
};
