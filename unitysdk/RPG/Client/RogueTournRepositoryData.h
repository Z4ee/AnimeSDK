#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_B3B48B7EEC81A99A_11;
namespace RPG::Client { class RogueTournRepositoryFormulaStoryData; }
namespace RPG::Client { class RogueTournRepositoryFormulaStoryDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3CE0D0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETALLFORMULASTORYDATAITEMS_OFFSET UNITYSDK_OFFSET(0xA3CEE00)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETFORMULASTORYDATA_OFFSET UNITYSDK_OFFSET(0xA3CED20)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA3CDD90)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xA3CF360)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3CE3B0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CDA00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRepositoryData_TypeDefinitionIndex = 55277;

	class RogueTournRepositoryData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueTournMode, ::RPG::Client::RogueTournRepositoryFormulaStoryData*>* _FormulaStoryDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_B3B48B7EEC81A99A_11* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3B48B7EEC81A99A_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::RogueTournRepositoryFormulaStoryData* GetFormulaStoryData(::RPG::GameCore::RogueTournMode tournMode)
		{
			return ((::RPG::Client::RogueTournRepositoryFormulaStoryData*(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETFORMULASTORYDATA_OFFSET))(this, tournMode);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>* GetAllFormulaStoryDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETALLFORMULASTORYDATAITEMS_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot(::System::UInt32 formulaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_ISSHOWNEWREDDOT_OFFSET))(this, formulaID);
		}
	};
}
