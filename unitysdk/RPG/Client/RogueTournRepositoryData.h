#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_5A55E8BED8FA46A4_7;
namespace RPG::Client { class RogueTournRepositoryFormulaStoryData; }
namespace RPG::Client { class RogueTournRepositoryFormulaStoryDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8596E0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETALLFORMULASTORYDATAITEMS_OFFSET UNITYSDK_OFFSET(0xC85A1D0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETFORMULASTORYDATA_OFFSET UNITYSDK_OFFSET(0xC85A100)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_INIT_OFFSET UNITYSDK_OFFSET(0xC859360)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xC85A5B0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC8599A0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC858FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRepositoryData_TypeDefinitionIndex = 63401;

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

		::System::Void Sync(::Class_1_5A55E8BED8FA46A4_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A55E8BED8FA46A4_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournRepositoryFormulaStoryData* GetFormulaStoryData(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::RPG::Client::RogueTournRepositoryFormulaStoryData*(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETFORMULASTORYDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>* GetAllFormulaStoryDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournRepositoryFormulaStoryDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETALLFORMULASTORYDATAITEMS_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_ISSHOWNEWREDDOT_OFFSET))(this, a1);
		}
	};
}
