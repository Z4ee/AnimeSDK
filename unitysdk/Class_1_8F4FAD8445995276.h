#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8F4FAD8445995276_METHOD_1_2CF48CF499425706_OFFSET UNITYSDK_OFFSET(0x17C56910)
#define CLASS_1_8F4FAD8445995276__CTOR_OFFSET UNITYSDK_OFFSET(0x17C57100)

inline static constexpr unsigned int Class_1_8F4FAD8445995276_TypeDefinitionIndex = 61145;

class Class_1_8F4FAD8445995276 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F4FAD8445995276__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>* Method_1_2CF48CF499425706(::RPG::Client::IFateGameMasterInfoItem* a1, ::RPG::Client::FateGameData* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameRoundSettleDmgSourceItem*>*(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_1_8F4FAD8445995276_METHOD_1_2CF48CF499425706_OFFSET))(this, a1, a2);
	}
};
