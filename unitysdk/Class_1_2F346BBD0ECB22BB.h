#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2F346BBD0ECB22BB_Class_1_919E3C3C5785DE21;

#define CLASS_1_2F346BBD0ECB22BB__CTOR_OFFSET UNITYSDK_OFFSET(0x10B32F60)

inline static constexpr unsigned int Class_1_2F346BBD0ECB22BB_TypeDefinitionIndex = 55280;

class Class_1_2F346BBD0ECB22BB : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_2F346BBD0ECB22BB_Class_1_919E3C3C5785DE21*>* DataList; // 0x10
	::System::UInt32 DataVersion; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F346BBD0ECB22BB__CTOR_OFFSET))(this);
	}
};
