#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class LittleGameEvent; }

#define CLASS_1_E602A1752C4DCAA4_CLEAR_OFFSET UNITYSDK_OFFSET(0x1681F180)
#define CLASS_1_E602A1752C4DCAA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1681F320)

inline static constexpr unsigned int Class_1_E602A1752C4DCAA4_TypeDefinitionIndex = 33346;

class Class_1_E602A1752C4DCAA4 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::LittleGameEvent*, ::RPG::PoolList_1<::RPG::GameCore::FiveDimBaseEventAction*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E602A1752C4DCAA4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E602A1752C4DCAA4_CLEAR_OFFSET))(this);
	}
};
