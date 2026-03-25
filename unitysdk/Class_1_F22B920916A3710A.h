#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D;

#define CLASS_1_F22B920916A3710A__CTOR_OFFSET UNITYSDK_OFFSET(0x1133E710)

inline static constexpr unsigned int Class_1_F22B920916A3710A_TypeDefinitionIndex = 52579;

class Class_1_F22B920916A3710A : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_F22B920916A3710A_Class_1_93CDA5C33880619D*>* DataList; // 0x10
	::System::UInt32 Version; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A__CTOR_OFFSET))(this);
	}
};
