#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_67579F55DED04A8F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4FA420)
#define CLASS_1_67579F55DED04A8F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4FA480)

inline static constexpr unsigned int Class_1_67579F55DED04A8F_TypeDefinitionIndex = 40996;

class Class_1_67579F55DED04A8F : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* NJJHNLLAMCC; // 0x10
	::RPG::GameCore::MatchThreePropType KAGGJMNLPBE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67579F55DED04A8F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67579F55DED04A8F_CLEAR_OFFSET))(this);
	}
};
