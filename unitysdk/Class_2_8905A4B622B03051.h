#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_8905A4B622B03051_METHOD_2_1873E3CF907D5F2A_OFFSET UNITYSDK_OFFSET(0x18BD9250)
#define CLASS_2_8905A4B622B03051_METHOD_2_3F6E1E5D7F5AB005_OFFSET UNITYSDK_OFFSET(0x18BD9350)
#define CLASS_2_8905A4B622B03051__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD9220)

inline static constexpr unsigned int Class_2_8905A4B622B03051_TypeDefinitionIndex = 65800;

class Class_2_8905A4B622B03051 : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_8905A4B622B03051__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1873E3CF907D5F2A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8905A4B622B03051_METHOD_2_1873E3CF907D5F2A_OFFSET))(this, a1);
	}

	::RPG::GameCore::ItemRarity Method_2_3F6E1E5D7F5AB005()
	{
		return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8905A4B622B03051_METHOD_2_3F6E1E5D7F5AB005_OFFSET))(this);
	}
};
