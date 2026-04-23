#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F5594631A2CEB6B2_METHOD_1_44634401B60AD4D5_OFFSET UNITYSDK_OFFSET(0xB20D560)
#define CLASS_1_F5594631A2CEB6B2__CTOR_OFFSET UNITYSDK_OFFSET(0xB20D820)

inline static constexpr unsigned int Class_1_F5594631A2CEB6B2_TypeDefinitionIndex = 58930;

class Class_1_F5594631A2CEB6B2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5594631A2CEB6B2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>* Method_1_44634401B60AD4D5(::RPG::Client::IFateGameMasterInfoItem* a1, ::RPG::Client::FateGameData* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>*(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_1_F5594631A2CEB6B2_METHOD_1_44634401B60AD4D5_OFFSET))(this, a1, a2);
	}
};
