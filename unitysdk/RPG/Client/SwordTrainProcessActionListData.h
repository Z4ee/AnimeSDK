#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_94;
class Class_1_D17272E82AE804C2_968;
class Class_1_D40936EF3BF54118_91;
class Class_1_EB91F58AEEF3F578_6;
namespace RPG::Client { class SwordTrainProcessActionDataItem; }
namespace RPG::Client { template <typename T> class RandomAccessContainer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC991E10)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC9913C0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GETSDKREPORTDATA_OFFSET UNITYSDK_OFFSET(0xC992AD0)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_DOINGACTION_OFFSET UNITYSDK_OFFSET(0xC992580)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_NEXTACTION_OFFSET UNITYSDK_OFFSET(0xC992690)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_SETPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC991950)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_UPDATEPHASE_OFFSET UNITYSDK_OFFSET(0xC992480)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC991890)
#define RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__FETCHONEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xC9927A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainProcessActionListData_TypeDefinitionIndex = 57953;

	class SwordTrainProcessActionListData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RandomAccessContainer_1<::System::String*>*>* _PrefabPathGetter; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainProcessActionDataItem*>* DataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainProcessActionListData* Create(::Class_1_45BB92167AED63A0_94* a1)
		{
			return ((::RPG::Client::SwordTrainProcessActionListData*(*)(::Class_1_45BB92167AED63A0_94*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::SwordTrainProcessActionListData* Create_1(::Class_1_EB91F58AEEF3F578_6* a1, ::Class_1_D40936EF3BF54118_91* a2, ::Class_1_D17272E82AE804C2_968* a3)
		{
			return ((::RPG::Client::SwordTrainProcessActionListData*(*)(::Class_1_EB91F58AEEF3F578_6*, ::Class_1_D40936EF3BF54118_91*, ::Class_1_D17272E82AE804C2_968*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_CREATE_1_OFFSET))(a1, a2, a3);
		}

		::System::Void UpdatePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_UPDATEPHASE_OFFSET))(this);
		}

		::System::Void SetPrefabPath(::Class_1_D40936EF3BF54118_91* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_SETPREFABPATH_OFFSET))(this, a1);
		}

		::System::String* _FetchOnePrefabPath(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA__FETCHONEPREFABPATH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetSDKReportData()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GETSDKREPORTDATA_OFFSET))(this);
		}

		::RPG::Client::SwordTrainProcessActionDataItem* get_DoingAction()
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_DOINGACTION_OFFSET))(this);
		}

		::RPG::Client::SwordTrainProcessActionDataItem* get_NextAction()
		{
			return ((::RPG::Client::SwordTrainProcessActionDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINPROCESSACTIONLISTDATA_GET_NEXTACTION_OFFSET))(this);
		}
	};
}
