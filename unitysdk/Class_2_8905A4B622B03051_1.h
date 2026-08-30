#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_8905A4B622B03051_1_METHOD_2_1873E3CF907D5F2A_OFFSET UNITYSDK_OFFSET(0x1781D050)
#define CLASS_2_8905A4B622B03051_1_METHOD_2_32D22EA81CD4BC72_OFFSET UNITYSDK_OFFSET(0x1781D150)
#define CLASS_2_8905A4B622B03051_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1781D020)

inline static constexpr unsigned int Class_2_8905A4B622B03051_1_TypeDefinitionIndex = 65801;

class Class_2_8905A4B622B03051_1 : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_8905A4B622B03051_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1873E3CF907D5F2A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8905A4B622B03051_1_METHOD_2_1873E3CF907D5F2A_OFFSET))(this, a1);
	}

	::RPG::GameCore::ItemSubType Method_2_32D22EA81CD4BC72()
	{
		return ((::RPG::GameCore::ItemSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8905A4B622B03051_1_METHOD_2_32D22EA81CD4BC72_OFFSET))(this);
	}
};
