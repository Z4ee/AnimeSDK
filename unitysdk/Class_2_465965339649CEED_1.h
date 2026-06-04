#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16214D4BC9EF44B9.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_2_465965339649CEED_1_METHOD_2_C2D0A28EDD88D4E9_OFFSET UNITYSDK_OFFSET(0xB756970)
#define CLASS_2_465965339649CEED_1_METHOD_2_D22525D41FAF058E_OFFSET UNITYSDK_OFFSET(0xB756A00)
#define CLASS_2_465965339649CEED_1_METHOD_2_EC24AC00C231F088_OFFSET UNITYSDK_OFFSET(0xB756A10)
#define CLASS_2_465965339649CEED_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB756940)

inline static constexpr unsigned int Class_2_465965339649CEED_1_TypeDefinitionIndex = 61454;

class Class_2_465965339649CEED_1 : public ::Class_1_16214D4BC9EF44B9
{
public:
	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_2_465965339649CEED_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C2D0A28EDD88D4E9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_465965339649CEED_1_METHOD_2_C2D0A28EDD88D4E9_OFFSET))(this, a1);
	}

	::RPG::GameCore::ItemSubType Method_2_D22525D41FAF058E()
	{
		return ((::RPG::GameCore::ItemSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_465965339649CEED_1_METHOD_2_D22525D41FAF058E_OFFSET))(this);
	}

	::System::Boolean Method_2_EC24AC00C231F088(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_465965339649CEED_1_METHOD_2_EC24AC00C231F088_OFFSET))(this, a1);
	}
};
