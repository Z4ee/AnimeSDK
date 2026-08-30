#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemDisplaySortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CLASS_1_16214D4BC9EF44B9_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x162A4F10)
#define CLASS_1_16214D4BC9EF44B9_METHOD_1_451F9DF1AB538927_OFFSET UNITYSDK_OFFSET(0x162A4F60)
#define CLASS_1_16214D4BC9EF44B9__CTOR_OFFSET UNITYSDK_OFFSET(0x162A4EE0)

inline static constexpr unsigned int Class_1_16214D4BC9EF44B9_TypeDefinitionIndex = 65798;

class Class_1_16214D4BC9EF44B9 : public ::System::Object
{
public:
	::System::UInt32 AJCPOOCBNNH; // 0x10
	::System::Int32 OJJHJJPDPAJ; // 0x14
	::System::UInt32 NNACKOBKFGE; // 0x18
	::RPG::GameCore::ItemDisplaySortType GMPGDEINODK; // 0x1C

	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::RPG::Client::ItemData* Method_1_451F9DF1AB538927(::System::UInt32 a1)
	{
		return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9_METHOD_1_451F9DF1AB538927_OFFSET))(this, a1);
	}
};
