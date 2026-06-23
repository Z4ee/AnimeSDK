#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NEWBIEUNLOCKOBJ_ADDUNLOCKGROUP_OFFSET UNITYSDK_OFFSET(0x13F19D40)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_ADDUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0x13F19DA0)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_GET_FROMGM_OFFSET UNITYSDK_OFFSET(0x13F19C50)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x13F19C30)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13F19C40)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x13F19C70)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_HASUNLOCKNEWBIEID_1_OFFSET UNITYSDK_OFFSET(0x13F19F40)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_HASUNLOCKNEWBIEID_OFFSET UNITYSDK_OFFSET(0x13F19EE0)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13F1A310)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_SETFROMGM_OFFSET UNITYSDK_OFFSET(0x13F19D00)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_SET_FROMGM_OFFSET UNITYSDK_OFFSET(0x13F19C60)
#define MOLEMOLE_NEWBIEUNLOCKOBJ_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x13F19C80)
#define MOLEMOLE_NEWBIEUNLOCKOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13F19C90)

namespace MoleMole
{
	inline static constexpr unsigned int NewBieUnlockObj_TypeDefinitionIndex = 64781;

	class NewBieUnlockObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* _unlockSet; // 0x28
		::System::Boolean _FromGM_k__BackingField; // 0x30
		::System::Boolean _Trigger_k__BackingField; // 0x31

		::System::Void _ctor(::System::Boolean fromGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ__CTOR_OFFSET))(this, fromGM);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_FromGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_GET_FROMGM_OFFSET))(this);
		}

		::System::Void set_FromGM(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_SET_FROMGM_OFFSET))(this, value);
		}

		::System::Boolean get_Trigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_Trigger(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_SET_TRIGGER_OFFSET))(this, value);
		}

		::System::Void SetFromGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_SETFROMGM_OFFSET))(this);
		}

		::System::Void AddUnlockGroup(::System::Int32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_ADDUNLOCKGROUP_OFFSET))(this, groupId);
		}

		::System::Void AddUnlockList(::System::Collections::Generic::List_1<::System::Int32>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_ADDUNLOCKLIST_OFFSET))(this, list);
		}

		::System::Boolean HasUnlockNewbieId(::System::Int32 groupId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_HASUNLOCKNEWBIEID_OFFSET))(this, groupId);
		}

		::System::Boolean HasUnlockNewbieId_1(::System::Collections::Generic::IList_1<::System::Int32>* groupsId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_HASUNLOCKNEWBIEID_1_OFFSET))(this, groupsId);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEWBIEUNLOCKOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}
