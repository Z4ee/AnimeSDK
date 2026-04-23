#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_83;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueWorkBenchLevelUpMagicScepterItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_GETFUNCID_OFFSET UNITYSDK_OFFSET(0xB128660)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_GETFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xB128610)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_GET_LEVELUPSCEPTERITEMLIST_OFFSET UNITYSDK_OFFSET(0xB128440)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_OPENFUNCUIPAGE_OFFSET UNITYSDK_OFFSET(0xB1286A0)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_REFRESH_OFFSET UNITYSDK_OFFSET(0xB128320)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB1281B0)
#define RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER__GENERATELEVELUPINFODATA_OFFSET UNITYSDK_OFFSET(0xB1281C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchLevelUpMagicScepter_TypeDefinitionIndex = 62051;

	class RogueWorkBenchLevelUpMagicScepter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchLevelUpMagicScepterItem*>* _LevelUpScepterItemList; // 0x10
		::System::UInt32 _FuncID; // 0x18

		::System::Void _ctor(::System::UInt32 funcID, ::Class_1_D40936EF3BF54118_83* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D40936EF3BF54118_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER__CTOR_OFFSET))(this, funcID, proto);
		}

		::System::Void Refresh(::RPG::Client::RogueWorkBenchLevelUpMagicScepter* proto)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueWorkBenchLevelUpMagicScepter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_REFRESH_OFFSET))(this, proto);
		}

		::System::Void _GenerateLevelUpInfoData(::Class_1_D40936EF3BF54118_83* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER__GENERATELEVELUPINFODATA_OFFSET))(this, proto);
		}

		::RPG::GameCore::RogueWorkbenchFuncType GetFuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_GETFUNCTYPE_OFFSET))(this);
		}

		::System::UInt32 GetFuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_GETFUNCID_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* OpenFuncUIPage(::System::UInt32 propEntityID)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_OPENFUNCUIPAGE_OFFSET))(this, propEntityID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchLevelUpMagicScepterItem*>* get_LevelUpScepterItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchLevelUpMagicScepterItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHLEVELUPMAGICSCEPTER_GET_LEVELUPSCEPTERITEMLIST_OFFSET))(this);
		}
	};
}
