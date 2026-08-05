#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E6A3ED5019D7E79;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CBBCAA65AAC716D4_METHOD_1_8DA2C45C7019FA48_OFFSET UNITYSDK_OFFSET(0x1399E440)
#define CLASS_1_CBBCAA65AAC716D4__CTOR_OFFSET UNITYSDK_OFFSET(0x1399E430)

inline static constexpr unsigned int Class_1_CBBCAA65AAC716D4_TypeDefinitionIndex = 87728;

class Class_1_CBBCAA65AAC716D4 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_6; // 0x10
	::Class_1_7E6A3ED5019D7E79* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Boolean Field_1_7; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBBCAA65AAC716D4__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8DA2C45C7019FA48()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBBCAA65AAC716D4_METHOD_1_8DA2C45C7019FA48_OFFSET))(this);
	}
};
