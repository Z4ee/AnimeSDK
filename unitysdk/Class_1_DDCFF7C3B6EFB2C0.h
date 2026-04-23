#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D;

#define CLASS_1_DDCFF7C3B6EFB2C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1283FD60)

inline static constexpr unsigned int Class_1_DDCFF7C3B6EFB2C0_TypeDefinitionIndex = 59629;

class Class_1_DDCFF7C3B6EFB2C0 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_90E07F539BBA9EB2_Class_1_93CDA5C33880619D*>* Datas; // 0x10
	::System::Int32 TotalNum; // 0x18
	::System::Int32 MaxFavourNum; // 0x1C
	::System::Int32 Version; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDCFF7C3B6EFB2C0__CTOR_OFFSET))(this);
	}
};
