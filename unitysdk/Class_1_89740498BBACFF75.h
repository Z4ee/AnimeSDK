#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35769E9BC1F47769_Class_1_18FFD9DAACAA85F6;

#define CLASS_1_89740498BBACFF75__CTOR_OFFSET UNITYSDK_OFFSET(0xB478D60)

inline static constexpr unsigned int Class_1_89740498BBACFF75_TypeDefinitionIndex = 64840;

class Class_1_89740498BBACFF75 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_35769E9BC1F47769_Class_1_18FFD9DAACAA85F6*>* Datas; // 0x10
	::System::Int32 Version; // 0x18
	::System::Int32 TotalNum; // 0x1C
	::System::Int32 MaxFavourNum; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89740498BBACFF75__CTOR_OFFSET))(this);
	}
};
