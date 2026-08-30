#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_39E5C122FC4DE9A6_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x16154F00)
#define CLASS_2_39E5C122FC4DE9A6_METHOD_2_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x16154E80)
#define CLASS_2_39E5C122FC4DE9A6__CTOR_OFFSET UNITYSDK_OFFSET(0x16154E50)

inline static constexpr unsigned int Class_2_39E5C122FC4DE9A6_TypeDefinitionIndex = 65799;

class Class_2_39E5C122FC4DE9A6 : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_39E5C122FC4DE9A6__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_39E5C122FC4DE9A6_METHOD_2_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39E5C122FC4DE9A6_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}
};
