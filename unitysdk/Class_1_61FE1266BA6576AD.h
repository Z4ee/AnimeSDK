#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class LittleGameEvent; }

#define CLASS_1_61FE1266BA6576AD_CLEAR_OFFSET UNITYSDK_OFFSET(0x18BF03E0)
#define CLASS_1_61FE1266BA6576AD__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF0520)

inline static constexpr unsigned int Class_1_61FE1266BA6576AD_TypeDefinitionIndex = 39906;

class Class_1_61FE1266BA6576AD : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::LittleGameEvent*, ::RPG::PoolList_1<::RPG::GameCore::FiveDimBaseEventAction*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61FE1266BA6576AD__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61FE1266BA6576AD_CLEAR_OFFSET))(this);
	}
};
