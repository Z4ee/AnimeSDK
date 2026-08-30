#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_FDFA365FE186E8F2_28;
namespace RPG::Client { class RogueTournRepositoryFormulaStoryData; }
namespace RPG::Client { class RogueTournRepositoryFormulaStoryDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7B7960)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETALLFORMULASTORYDATAITEMS_OFFSET UNITYSDK_OFFSET(0x1C7B86B0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_GETFORMULASTORYDATA_OFFSET UNITYSDK_OFFSET(0x1C7B85E0)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1C7B7590)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1C7B8A90)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1C7B7C20)
#define RPG_CLIENT_ROGUETOURNREPOSITORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B7200)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRepositoryData_TypeDefinitionIndex = 67773;

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

		::System::Void Sync(::Class_1_FDFA365FE186E8F2_28* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNREPOSITORYDATA_SYNC_OFFSET))(this, a1);
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
