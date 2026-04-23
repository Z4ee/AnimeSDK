#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_47.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_18.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_588001F5465E05ED;
class Class_1_668FE281FA72D3E8_15;
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_CANRAIDADJUSTDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA173680)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_CANSTAGEEVENTADJUSTDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA173820)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA173FE0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETDIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0xA1739B0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETEASYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xA1738F0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETRAIDDIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0xA173510)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETSTAGEEVENTDIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0xA173570)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA173D20)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISNPCDIFFICULTYADJUSTEASY_OFFSET UNITYSDK_OFFSET(0xA173310)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISRAIDDIFFICULTYADJUSTEASY_OFFSET UNITYSDK_OFFSET(0xA1735D0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISSTAGEDIFFICULTYADJUSTEASY_OFFSET UNITYSDK_OFFSET(0xA173780)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_SENDRAIDDIFFICULTYUPDATEDATACSREQ_OFFSET UNITYSDK_OFFSET(0xA173A80)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE_SENDSTAGEEVENTDIFFICULTYUPDATEDATACSREQ_OFFSET UNITYSDK_OFFSET(0xA173BD0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__ADDORREFRESHDIFFICULTYADJUSTDATA_OFFSET UNITYSDK_OFFSET(0xA1746B0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA174200)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA174B80)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__INITCANADJUSTMENTSTAGEEVENTIDS_OFFSET UNITYSDK_OFFSET(0xA173E20)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__ONCMDDIFFICULTYADJUSTMENTGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA174370)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__ONCMDDIFFICULTYADJUSTMENTUPDATEDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA1748D0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE__SENDDIFFICULTYADJUSTMENTGETDATACSREQ_OFFSET UNITYSDK_OFFSET(0xA1742B0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA174C30)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA174BA0)
#define RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA174C40)

namespace RPG::Client
{
	inline static constexpr unsigned int DifficultyAdjustModule_TypeDefinitionIndex = 58566;

	class DifficultyAdjustModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CanAdjustmentStageEventIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_0A3761FE34514D6C_47, ::Class_1_588001F5465E05ED*>* _DataCollections; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsNpcDifficultyAdjustEasy(::RPG::GameCore::NPCComponent* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NPCComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISNPCDIFFICULTYADJUSTEASY_OFFSET))(this, entity);
		}

		::System::Boolean IsRaidDifficultyAdjustEasy(::System::UInt32 raidID, ::System::UInt32 raidHardLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISRAIDDIFFICULTYADJUSTEASY_OFFSET))(this, raidID, raidHardLevel);
		}

		::System::Boolean IsStageDifficultyAdjustEasy(::System::UInt32 stageEventID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_ISSTAGEDIFFICULTYADJUSTEASY_OFFSET))(this, stageEventID);
		}

		::System::UInt32 GetEasyWorldLevel(::System::Nullable_1<::System::UInt32> customWorldLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETEASYWORLDLEVEL_OFFSET))(this, customWorldLevel);
		}

		::System::Boolean CanRaidAdjustDifficulty(::System::UInt32 raidID, ::System::UInt32 raidHardLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_CANRAIDADJUSTDIFFICULTY_OFFSET))(this, raidID, raidHardLevel);
		}

		::System::Boolean CanStageEventAdjustDifficulty(::System::UInt32 stageEventID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_CANSTAGEEVENTADJUSTDIFFICULTY_OFFSET))(this, stageEventID);
		}

		::Enum_3_ED790DAC948A65A9_18 GetRaidDifficultyType(::System::UInt32 raidID)
		{
			return ((::Enum_3_ED790DAC948A65A9_18(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETRAIDDIFFICULTYTYPE_OFFSET))(this, raidID);
		}

		::Enum_3_ED790DAC948A65A9_18 GetStageEventDifficultyType(::System::UInt32 stageEventID)
		{
			return ((::Enum_3_ED790DAC948A65A9_18(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETSTAGEEVENTDIFFICULTYTYPE_OFFSET))(this, stageEventID);
		}

		::System::Void SendRaidDifficultyUpdateDataCsReq(::System::UInt32 raidID, ::Enum_3_ED790DAC948A65A9_18 difficultyType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_ED790DAC948A65A9_18))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_SENDRAIDDIFFICULTYUPDATEDATACSREQ_OFFSET))(this, raidID, difficultyType);
		}

		::System::Void SendStageEventDifficultyUpdateDataCsReq(::System::UInt32 stageEventID, ::Enum_3_ED790DAC948A65A9_18 difficultyType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_ED790DAC948A65A9_18))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_SENDSTAGEEVENTDIFFICULTYUPDATEDATACSREQ_OFFSET))(this, stageEventID, difficultyType);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _SendDifficultyAdjustmentGetDataCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__SENDDIFFICULTYADJUSTMENTGETDATACSREQ_OFFSET))(this);
		}

		::System::Void _OnCmdDifficultyAdjustmentGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__ONCMDDIFFICULTYADJUSTMENTGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdDifficultyAdjustmentUpdateDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__ONCMDDIFFICULTYADJUSTMENTUPDATEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddOrRefreshDifficultyAdjustData(::Class_1_668FE281FA72D3E8_15* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__ADDORREFRESHDIFFICULTYADJUSTDATA_OFFSET))(this, proto);
		}

		::Enum_3_ED790DAC948A65A9_18 GetDifficultyType(::Enum_3_0A3761FE34514D6C_47 sourceType, ::System::UInt32 id)
		{
			return ((::Enum_3_ED790DAC948A65A9_18(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_47, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE_GETDIFFICULTYTYPE_OFFSET))(this, sourceType, id);
		}

		::System::Void _InitCanAdjustmentStageEventIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE__INITCANADJUSTMENTSTAGEEVENTIDS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIFFICULTYADJUSTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
