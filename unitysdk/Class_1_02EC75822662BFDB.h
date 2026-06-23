#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91114DA5C6FB0192;

#define CLASS_1_02EC75822662BFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AE200)

inline static constexpr unsigned int Class_1_02EC75822662BFDB_TypeDefinitionIndex = 28660;

class Class_1_02EC75822662BFDB : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::Il2CppArray<::Class_1_91114DA5C6FB0192*>* Field_1_2; // 0x10
	::System::Single Field_1_4; // 0x18
	::System::Single Field_1_1; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02EC75822662BFDB__CTOR_OFFSET))(this);
	}
};
