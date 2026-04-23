#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_8;
namespace RPG::Client { class AetherDivideLineUpData; }
namespace RPG::Client { class AetherDivideTrainerData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_AETHERDIVIDETEAMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9CD45F0)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GETALLLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9CD7CB0)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GETLINEUPDATABYSLOT_OFFSET UNITYSDK_OFFSET(0x9CD7C00)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_AETHERDIVIDETRAINERDATA_OFFSET UNITYSDK_OFFSET(0x9CD7E30)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_CURLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9CD7D00)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_CURSLOT_OFFSET UNITYSDK_OFFSET(0x9CD7CF0)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_MAXELITESELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x9CD7D70)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_SETCURSLOT_OFFSET UNITYSDK_OFFSET(0x9CD7840)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_SET_CURSLOT_OFFSET UNITYSDK_OFFSET(0x9CD7B30)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_SYNCALL_OFFSET UNITYSDK_OFFSET(0x9CD6050)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0x9CD76F0)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD3A60)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA__ISVALIDSLOT_OFFSET UNITYSDK_OFFSET(0x9CD7BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideTeamData_TypeDefinitionIndex = 57409;

	class AetherDivideTeamData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MAX_SLOT_COUNT = 0x6; // 0x0
		::Il2CppArray<::RPG::Client::AetherDivideLineUpData*>* _AllLineUpDatas; // 0x10
		::System::UInt32 _CurSlot; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncAll(::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_8*>* serverLineUpList, ::System::UInt32 curSlot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_8*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_SYNCALL_OFFSET))(this, serverLineUpList, curSlot);
		}

		::System::Void SyncLineUp(::Class_1_45BB92167AED63A0_8* serverLineUp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_SYNCLINEUP_OFFSET))(this, serverLineUp);
		}

		::System::Void SetCurSlot(::System::UInt32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_SETCURSLOT_OFFSET))(this, slot);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::AetherDivideLineUpData*>* GetAllLineUpData()
		{
			return ((::Il2CppArray<::RPG::Client::AetherDivideLineUpData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GETALLLINEUPDATA_OFFSET))(this);
		}

		::RPG::Client::AetherDivideLineUpData* GetLineUpdataBySlot(::System::UInt32 slot)
		{
			return ((::RPG::Client::AetherDivideLineUpData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GETLINEUPDATABYSLOT_OFFSET))(this, slot);
		}

		::System::Boolean _IsValidSlot(::System::UInt32 slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA__ISVALIDSLOT_OFFSET))(this, slot);
		}

		::System::UInt32 get_CurSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_CURSLOT_OFFSET))(this);
		}

		::System::Void set_CurSlot(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_SET_CURSLOT_OFFSET))(this, value);
		}

		::RPG::Client::AetherDivideLineUpData* get_CurLineUpData()
		{
			return ((::RPG::Client::AetherDivideLineUpData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_CURLINEUPDATA_OFFSET))(this);
		}

		::System::UInt32 get_MaxEliteSelectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_MAXELITESELECTIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::AetherDivideTrainerData* get_AetherDivideTrainerData()
		{
			return ((::RPG::Client::AetherDivideTrainerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_AETHERDIVIDETRAINERDATA_OFFSET))(this);
		}
	};
}
