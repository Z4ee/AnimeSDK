#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_C006DA4A56FC21E6_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x6F51F0)
#define STRUCT_2_C006DA4A56FC21E6_METHOD_2_5CF411E53FBAB2F6_1_OFFSET UNITYSDK_OFFSET(0x320530)
#define STRUCT_2_C006DA4A56FC21E6_METHOD_2_5CF411E53FBAB2F6_OFFSET UNITYSDK_OFFSET(0x846A00)
#define STRUCT_2_C006DA4A56FC21E6_METHOD_2_BDBA6DBA3227ABB1_1_OFFSET UNITYSDK_OFFSET(0x8469F0)
#define STRUCT_2_C006DA4A56FC21E6_METHOD_2_BDBA6DBA3227ABB1_OFFSET UNITYSDK_OFFSET(0x320200)
#define STRUCT_2_C006DA4A56FC21E6_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x8469E0)

inline static constexpr unsigned int Struct_2_C006DA4A56FC21E6_TypeDefinitionIndex = 90657;

struct alignas(4) Struct_2_C006DA4A56FC21E6
{
	::Foundation::Unreal::FTransform Field_2_2; // 0x10
	::Foundation::Unreal::FTransform Field_2_1; // 0x30
	::System::Single Field_2_0; // 0x50

	::System::Void Method_2_BDBA6DBA3227ABB1(::Foundation::Unreal::FTransform a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + STRUCT_2_C006DA4A56FC21E6_METHOD_2_BDBA6DBA3227ABB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_C006DA4A56FC21E6_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C006DA4A56FC21E6_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_BDBA6DBA3227ABB1_1(::Foundation::Unreal::FTransform a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + STRUCT_2_C006DA4A56FC21E6_METHOD_2_BDBA6DBA3227ABB1_1_OFFSET))(this, a1);
	}

	::Foundation::Unreal::FTransform Method_2_5CF411E53FBAB2F6()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C006DA4A56FC21E6_METHOD_2_5CF411E53FBAB2F6_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform Method_2_5CF411E53FBAB2F6_1()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C006DA4A56FC21E6_METHOD_2_5CF411E53FBAB2F6_1_OFFSET))(this);
	}
};
