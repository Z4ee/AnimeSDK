#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D;

#define CLASS_1_A8FCE4080863560C__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4D930)

inline static constexpr unsigned int Class_1_A8FCE4080863560C_TypeDefinitionIndex = 52590;

class Class_1_A8FCE4080863560C : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D*>* Datas; // 0x10
	::System::Int32 TotalNum; // 0x18
	::System::Int32 Version; // 0x1C
	::System::Int32 MaxFavourNum; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8FCE4080863560C__CTOR_OFFSET))(this);
	}
};
