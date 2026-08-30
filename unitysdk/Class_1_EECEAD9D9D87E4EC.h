#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16214D4BC9EF44B9;
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_1_EECEAD9D9D87E4EC_METHOD_1_FC21A33211DFC877_OFFSET UNITYSDK_OFFSET(0x16B96310)
#define CLASS_1_EECEAD9D9D87E4EC__CTOR_OFFSET UNITYSDK_OFFSET(0x16B963D0)

inline static constexpr unsigned int Class_1_EECEAD9D9D87E4EC_TypeDefinitionIndex = 65806;

class Class_1_EECEAD9D9D87E4EC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EECEAD9D9D87E4EC__CTOR_OFFSET))(this);
	}

	static ::Class_1_16214D4BC9EF44B9* Method_1_FC21A33211DFC877(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::Class_1_16214D4BC9EF44B9*(*)(::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_1_EECEAD9D9D87E4EC_METHOD_1_FC21A33211DFC877_OFFSET))(a1);
	}
};
