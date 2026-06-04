#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemDisplaySortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_1_16214D4BC9EF44B9_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x14304900)
#define CLASS_1_16214D4BC9EF44B9_METHOD_1_8D359C256C3632C4_OFFSET UNITYSDK_OFFSET(0x14304950)
#define CLASS_1_16214D4BC9EF44B9__CTOR_OFFSET UNITYSDK_OFFSET(0x143048D0)

inline static constexpr unsigned int Class_1_16214D4BC9EF44B9_TypeDefinitionIndex = 61451;

class Class_1_16214D4BC9EF44B9 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x18
	::RPG::GameCore::ItemDisplaySortType Field_1_3; // 0x1C

	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::RPG::Client::ItemData* Method_1_8D359C256C3632C4(::System::UInt32 a1)
	{
		return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9_METHOD_1_8D359C256C3632C4_OFFSET))(this, a1);
	}
};
