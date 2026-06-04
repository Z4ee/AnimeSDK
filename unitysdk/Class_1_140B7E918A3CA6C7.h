#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_140B7E918A3CA6C7_METHOD_1_F6349FC606262626_OFFSET UNITYSDK_OFFSET(0x138E8D30)
#define CLASS_1_140B7E918A3CA6C7__CTOR_OFFSET UNITYSDK_OFFSET(0x138E9160)

inline static constexpr unsigned int Class_1_140B7E918A3CA6C7_TypeDefinitionIndex = 59861;

class Class_1_140B7E918A3CA6C7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_140B7E918A3CA6C7__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>* Method_1_F6349FC606262626(::RPG::Client::IFateGameMasterInfoItem* a1, ::RPG::Client::FateGameData* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>*(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_1_140B7E918A3CA6C7_METHOD_1_F6349FC606262626_OFFSET))(this, a1, a2);
	}
};
