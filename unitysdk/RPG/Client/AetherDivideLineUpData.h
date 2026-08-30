#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_10;
namespace RPG::Client { class AetherMonsterAvatarData; }
namespace RPG::Client { class AetherOutfitData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_CREATETEMPLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x19DF8210)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_CREATETRIALLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x19DF3A70)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_GETAVERAGELEVEL_OFFSET UNITYSDK_OFFSET(0x19DF88A0)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_GETINDEXBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x19DF8760)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_GETMEMBERBYINDEX_OFFSET UNITYSDK_OFFSET(0x19DF86E0)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_GETMEMBERLIST_OFFSET UNITYSDK_OFFSET(0x19DF86A0)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_GET_MAXSELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19DF8B00)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x19DF8AE0)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_GET__AETHEROUTFITDATA_OFFSET UNITYSDK_OFFSET(0x19DF8500)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_GET__ISTEMPLINEUP_OFFSET UNITYSDK_OFFSET(0x19DF8A90)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x19DF8810)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_SETMEMBERDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x19DF8990)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x19DF8AF0)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19DF8340)
#define RPG_CLIENT_AETHERDIVIDELINEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF8280)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideLineUpData_TypeDefinitionIndex = 62321;

	class AetherDivideLineUpData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MAX_MEMBER_COUNT = 0x4; // 0x0
		::Il2CppArray<::RPG::Client::AetherMonsterAvatarData*>* _MemberList; // 0x10
		::System::UInt32 _Slot_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::AetherDivideLineUpData* CreateTempLineUpData()
		{
			return ((::RPG::Client::AetherDivideLineUpData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_CREATETEMPLINEUPDATA_OFFSET))();
		}

		static ::RPG::Client::AetherDivideLineUpData* CreateTrialLineUpData(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::AetherDivideLineUpData*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_CREATETRIALLINEUPDATA_OFFSET))(a1);
		}

		::System::Void Sync(::Class_1_45BB92167AED63A0_10* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_SYNC_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::AetherMonsterAvatarData*>* GetMemberList()
		{
			return ((::Il2CppArray<::RPG::Client::AetherMonsterAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_GETMEMBERLIST_OFFSET))(this);
		}

		::RPG::Client::AetherMonsterAvatarData* GetMemberByIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherMonsterAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_GETMEMBERBYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetIndexByMemberData(::RPG::Client::AetherMonsterAvatarData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_GETINDEXBYMEMBERDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_ISEMPTY_OFFSET))(this);
		}

		::System::Single GetAverageLevel()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_GETAVERAGELEVEL_OFFSET))(this);
		}

		::System::Void SetMemberDataByIndex(::RPG::Client::AetherMonsterAvatarData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherMonsterAvatarData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_SETMEMBERDATABYINDEX_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Slot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_Slot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_SET_SLOT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxSelectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_GET_MAXSELECTIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::AetherOutfitData* get__AetherOutfitData()
		{
			return ((::RPG::Client::AetherOutfitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_GET__AETHEROUTFITDATA_OFFSET))(this);
		}

		::System::Boolean get__IsTempLineUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELINEUPDATA_GET__ISTEMPLINEUP_OFFSET))(this);
		}
	};
}
