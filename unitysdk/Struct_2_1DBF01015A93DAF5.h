#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_1DBF01015A93DAF5_METHOD_2_69607B7E4783C654_OFFSET UNITYSDK_OFFSET(0x3AFF290)

inline static constexpr unsigned int Struct_2_1DBF01015A93DAF5_TypeDefinitionIndex = 57834;

struct alignas(8) Struct_2_1DBF01015A93DAF5
{
	::RPG::GameCore::FixPoint PMJKDMDOEDE; // 0x10
	::System::Nullable_1<::RPG::GameCore::FixPoint> OAGPAEJLHEC; // 0x18

	::RPG::GameCore::FixPoint Method_2_69607B7E4783C654()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1DBF01015A93DAF5_METHOD_2_69607B7E4783C654_OFFSET))(this);
	}
};
