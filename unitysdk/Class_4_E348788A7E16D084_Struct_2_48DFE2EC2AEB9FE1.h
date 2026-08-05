#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_4_E348788A7E16D084_STRUCT_2_48DFE2EC2AEB9FE1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B1C40)
#define CLASS_4_E348788A7E16D084_STRUCT_2_48DFE2EC2AEB9FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x9B1BA0)

inline static constexpr unsigned int Class_4_E348788A7E16D084_Struct_2_48DFE2EC2AEB9FE1_TypeDefinitionIndex = 35185;

struct alignas(4) Class_4_E348788A7E16D084_Struct_2_48DFE2EC2AEB9FE1
{
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_0; // 0x18

	/*
	::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::SGF::SEvent::DelegateEx>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::SGF::SEvent::DelegateEx>*&))((::PBYTE)hIl2Cpp + CLASS_4_E348788A7E16D084_STRUCT_2_48DFE2EC2AEB9FE1__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E348788A7E16D084_STRUCT_2_48DFE2EC2AEB9FE1_DISPOSE_OFFSET))(this);
	}
};
