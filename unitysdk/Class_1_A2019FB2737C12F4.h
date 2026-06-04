#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A2019FB2737C12F4_METHOD_1_2B4E7FCFA89F58F4_OFFSET UNITYSDK_OFFSET(0x1360AAD0)
#define CLASS_1_A2019FB2737C12F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1360AFF0)

inline static constexpr unsigned int Class_1_A2019FB2737C12F4_TypeDefinitionIndex = 59860;

class Class_1_A2019FB2737C12F4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2019FB2737C12F4__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>* Method_1_2B4E7FCFA89F58F4(::RPG::Client::IFateGameMasterInfoItem* a1, ::RPG::Client::FateGameData* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>*(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_1_A2019FB2737C12F4_METHOD_1_2B4E7FCFA89F58F4_OFFSET))(this, a1, a2);
	}
};
