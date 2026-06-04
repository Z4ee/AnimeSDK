#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD9533418F3B6F39_VCameraType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;

#define CLASS_1_CD9533418F3B6F39_METHOD_1_FF28A83F7BEB0C60_OFFSET UNITYSDK_OFFSET(0xA402730)

inline static constexpr unsigned int Class_1_CD9533418F3B6F39_TypeDefinitionIndex = 65205;

class Class_1_CD9533418F3B6F39 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD9533418F3B6F39_TypeDefinitionIndex)->GetStaticField(0xC730);
	}

	static ::Class_0_16E4307DCC419505_955* Method_1_FF28A83F7BEB0C60(::Class_1_CD9533418F3B6F39_VCameraType a1)
	{
		return ((::Class_0_16E4307DCC419505_955*(*)(::Class_1_CD9533418F3B6F39_VCameraType))((::PBYTE)hIl2Cpp + CLASS_1_CD9533418F3B6F39_METHOD_1_FF28A83F7BEB0C60_OFFSET))(a1);
	}
};
