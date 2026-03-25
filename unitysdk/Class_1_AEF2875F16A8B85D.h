#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_AEF2875F16A8B85D_CLEAR_OFFSET UNITYSDK_OFFSET(0x167E55F0)
#define CLASS_1_AEF2875F16A8B85D__CTOR_OFFSET UNITYSDK_OFFSET(0x167E5670)

inline static constexpr unsigned int Class_1_AEF2875F16A8B85D_TypeDefinitionIndex = 32751;

class Class_1_AEF2875F16A8B85D : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_1; // 0x10
	::RPG::GameCore::MatchThreePropType Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF2875F16A8B85D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEF2875F16A8B85D_CLEAR_OFFSET))(this);
	}
};
