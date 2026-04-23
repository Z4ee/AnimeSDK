#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemDisplaySortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_1_16214D4BC9EF44B9_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0xE02B900)
#define CLASS_1_16214D4BC9EF44B9_METHOD_1_AED4738AEE858949_OFFSET UNITYSDK_OFFSET(0xE02B950)
#define CLASS_1_16214D4BC9EF44B9__CTOR_OFFSET UNITYSDK_OFFSET(0xE02B8D0)

inline static constexpr unsigned int Class_1_16214D4BC9EF44B9_TypeDefinitionIndex = 60517;

class Class_1_16214D4BC9EF44B9 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::RPG::GameCore::ItemDisplaySortType Field_1_2; // 0x14
	::System::UInt32 Field_1_3; // 0x18
	::System::UInt32 Field_1_0; // 0x1C

	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::RPG::Client::ItemData* Method_1_AED4738AEE858949(::System::UInt32 a1)
	{
		return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9_METHOD_1_AED4738AEE858949_OFFSET))(this, a1);
	}
};
