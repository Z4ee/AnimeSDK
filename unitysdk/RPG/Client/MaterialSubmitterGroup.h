#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MaterialSubmissionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
namespace RPG::Client { class MaterialSubmitter; }
namespace RPG::GameCore { class MaterialSubmitterGroupRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKCANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xBFBCC60)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASENDED_OFFSET UNITYSDK_OFFSET(0xBFBFC40)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASNEWSUBMITTER_OFFSET UNITYSDK_OFFSET(0xBFBCD70)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xBFBE730)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISFIRST_OFFSET UNITYSDK_OFFSET(0xBFBEBA0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISLAST_OFFSET UNITYSDK_OFFSET(0xBFBECA0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CONTAINS_OFFSET UNITYSDK_OFFSET(0xBFBFEC0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xBFBF7D0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERIDSTO_OFFSET UNITYSDK_OFFSET(0xBFBFAE0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERSTO_OFFSET UNITYSDK_OFFSET(0xBFBDDE0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETPRESUBMITTERID_OFFSET UNITYSDK_OFFSET(0xBFBFD50)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTEDCOUNT_OFFSET UNITYSDK_OFFSET(0xBFBF9A0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTERIDS_OFFSET UNITYSDK_OFFSET(0xBFBFA50)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTER_OFFSET UNITYSDK_OFFSET(0xBFBD6A0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xBFBF6B0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBFBF710)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ID_OFFSET UNITYSDK_OFFSET(0xBFBDDC0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_SUBMITTERIDS_OFFSET UNITYSDK_OFFSET(0xBFBF690)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBFBC660)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP_INDEXOF_OFFSET UNITYSDK_OFFSET(0xBFBFE00)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP__CREATESUBMITTERS_OFFSET UNITYSDK_OFFSET(0xBFBFF20)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xBFBF8F0)
#define RPG_CLIENT_MATERIALSUBMITTERGROUP__INIT_OFFSET UNITYSDK_OFFSET(0xBFBF950)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSubmitterGroup_TypeDefinitionIndex = 57787;

	class MaterialSubmitterGroup : public ::System::Object
	{
	public:
		::RPG::GameCore::MaterialSubmitterGroupRow* _Meta; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MaterialSubmitter*>* _Submitters; // 0x18

		::System::Void _ctor(::RPG::GameCore::MaterialSubmitterGroupRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MaterialSubmitterGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SubmitterIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_SUBMITTERIDS_OFFSET))(this);
		}

		::RPG::GameCore::MaterialSubmissionType get_Type()
		{
			return ((::RPG::GameCore::MaterialSubmissionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_TYPE_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_COUNT_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		static ::RPG::Client::MaterialSubmitterGroup* Create(::RPG::GameCore::MaterialSubmitterGroupRow* a1, ::Class_0_16E4307DCC419505_650* a2)
		{
			return ((::RPG::Client::MaterialSubmitterGroup*(*)(::RPG::GameCore::MaterialSubmitterGroupRow*, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CREATE_OFFSET))(a1, a2);
		}

		::System::Int32 GetSubmittedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTEDCOUNT_OFFSET))(this);
		}

		::RPG::Client::MaterialSubmitter* GetSubmitter(::System::UInt32 a1)
		{
			return ((::RPG::Client::MaterialSubmitter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSubmitterIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETSUBMITTERIDS_OFFSET))(this);
		}

		::System::Boolean CheckHasEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASENDED_OFFSET))(this);
		}

		::System::Boolean CheckCanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKCANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean CheckHasNewSubmitter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASNEWSUBMITTER_OFFSET))(this);
		}

		::System::Void FillSubmitterIDsTo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERIDSTO_OFFSET))(this, a1);
		}

		::System::Void FillSubmittersTo(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitter*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MaterialSubmitter*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_FILLSUBMITTERSTO_OFFSET))(this, a1);
		}

		::System::UInt32 GetPreSubmitterID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_GETPRESUBMITTERID_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKHASUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CONTAINS_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_INDEXOF_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsFirst(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISFIRST_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsLast(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP_CHECKISLAST_OFFSET))(this, a1);
		}

		::System::Void _Init(::Class_0_16E4307DCC419505_650* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP__INIT_OFFSET))(this, a1);
		}

		::System::Void _CreateSubmitters(::Class_0_16E4307DCC419505_650* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALSUBMITTERGROUP__CREATESUBMITTERS_OFFSET))(this, a1);
		}
	};
}
