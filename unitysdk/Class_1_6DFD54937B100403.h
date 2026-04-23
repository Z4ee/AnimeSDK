#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6DFD54937B100403_METHOD_1_E09CE3168C8EF670_OFFSET UNITYSDK_OFFSET(0xB7C0F90)
#define CLASS_1_6DFD54937B100403__CTOR_OFFSET UNITYSDK_OFFSET(0xB7C1230)

inline static constexpr unsigned int Class_1_6DFD54937B100403_TypeDefinitionIndex = 58931;

class Class_1_6DFD54937B100403 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DFD54937B100403__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>* Method_1_E09CE3168C8EF670(::RPG::Client::IFateGameMasterInfoItem* a1, ::RPG::Client::FateGameData* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>*(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_1_6DFD54937B100403_METHOD_1_E09CE3168C8EF670_OFFSET))(this, a1, a2);
	}
};
