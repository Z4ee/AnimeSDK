#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_8905A4B622B03051_2_METHOD_2_1873E3CF907D5F2A_OFFSET UNITYSDK_OFFSET(0x130BC6F0)
#define CLASS_2_8905A4B622B03051_2_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x130BC7F0)
#define CLASS_2_8905A4B622B03051_2__CTOR_OFFSET UNITYSDK_OFFSET(0x130BC6C0)

inline static constexpr unsigned int Class_2_8905A4B622B03051_2_TypeDefinitionIndex = 65802;

class Class_2_8905A4B622B03051_2 : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_8905A4B622B03051_2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1873E3CF907D5F2A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8905A4B622B03051_2_METHOD_2_1873E3CF907D5F2A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8905A4B622B03051_2_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}
};
