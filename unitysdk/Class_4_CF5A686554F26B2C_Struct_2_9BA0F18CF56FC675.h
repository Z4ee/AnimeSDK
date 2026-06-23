#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_4_CF5A686554F26B2C_STRUCT_2_9BA0F18CF56FC675_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9873B0)
#define CLASS_4_CF5A686554F26B2C_STRUCT_2_9BA0F18CF56FC675__CTOR_OFFSET UNITYSDK_OFFSET(0x987310)

inline static constexpr unsigned int Class_4_CF5A686554F26B2C_Struct_2_9BA0F18CF56FC675_TypeDefinitionIndex = 34610;

struct alignas(4) Class_4_CF5A686554F26B2C_Struct_2_9BA0F18CF56FC675
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	/*
	::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::SGF::SEvent::AbstractSignalCommon_DelegateWrapper>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::SGF::SEvent::AbstractSignalCommon_DelegateWrapper>*))((::PBYTE)hIl2Cpp + CLASS_4_CF5A686554F26B2C_STRUCT_2_9BA0F18CF56FC675__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CF5A686554F26B2C_STRUCT_2_9BA0F18CF56FC675_DISPOSE_OFFSET))(this);
	}
};
