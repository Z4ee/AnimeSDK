#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class LittleGameEvent; }

#define CLASS_1_F207DD86BFC196EF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8AD850)
#define CLASS_1_F207DD86BFC196EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8AD990)

inline static constexpr unsigned int Class_1_F207DD86BFC196EF_TypeDefinitionIndex = 43312;

class Class_1_F207DD86BFC196EF : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::LittleGameEvent*, ::RPG::PoolList_1<::RPG::GameCore::FiveDimBaseEventAction*>*>* BKIMAEDJGFC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F207DD86BFC196EF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F207DD86BFC196EF_CLEAR_OFFSET))(this);
	}
};
