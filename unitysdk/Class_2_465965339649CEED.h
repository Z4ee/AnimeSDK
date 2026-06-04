#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_465965339649CEED_METHOD_2_C2D0A28EDD88D4E9_OFFSET UNITYSDK_OFFSET(0xA7C6B90)
#define CLASS_2_465965339649CEED_METHOD_2_DCC41B44CC663989_OFFSET UNITYSDK_OFFSET(0xA7C6C20)
#define CLASS_2_465965339649CEED_METHOD_2_EC24AC00C231F088_OFFSET UNITYSDK_OFFSET(0xA7C6C30)
#define CLASS_2_465965339649CEED__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C6B60)

inline static constexpr unsigned int Class_2_465965339649CEED_TypeDefinitionIndex = 61453;

class Class_2_465965339649CEED : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_465965339649CEED__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C2D0A28EDD88D4E9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_465965339649CEED_METHOD_2_C2D0A28EDD88D4E9_OFFSET))(this, a1);
	}

	::RPG::GameCore::ItemRarity Method_2_DCC41B44CC663989()
	{
		return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_465965339649CEED_METHOD_2_DCC41B44CC663989_OFFSET))(this);
	}

	::System::Boolean Method_2_EC24AC00C231F088(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_465965339649CEED_METHOD_2_EC24AC00C231F088_OFFSET))(this, a1);
	}
};
