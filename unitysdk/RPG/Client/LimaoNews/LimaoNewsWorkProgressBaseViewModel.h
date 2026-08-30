#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsWorkProgressType.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace Sofa { class BaseSofaWindow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_ADDPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x1C4BA500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_ISREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1C4BA480)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_PLANID_OFFSET UNITYSDK_OFFSET(0x1C4BA4A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_PLANPHASEID_OFFSET UNITYSDK_OFFSET(0x1C4BA4C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_POPWINDOWLIST_OFFSET UNITYSDK_OFFSET(0x1C4BA4E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_PROGRESSTYPE_OFFSET UNITYSDK_OFFSET(0x1C4BA460)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_ISREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1C4BA490)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_PLANID_OFFSET UNITYSDK_OFFSET(0x1C4BA4B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_PLANPHASEID_OFFSET UNITYSDK_OFFSET(0x1C4BA4D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_POPWINDOWLIST_OFFSET UNITYSDK_OFFSET(0x1C4BA4F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_PROGRESSTYPE_OFFSET UNITYSDK_OFFSET(0x1C4BA470)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BA5E0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkProgressBaseViewModel_TypeDefinitionIndex = 79121;

	class LimaoNewsWorkProgressBaseViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* _PopWindowList_k__BackingField; // 0x20
		::System::UInt32 _PlanPhaseID_k__BackingField; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressType _ProgressType_k__BackingField; // 0x2C
		::System::UInt32 _PlanID_k__BackingField; // 0x30
		::System::Boolean _IsReviewMode_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressType get_ProgressType()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_PROGRESSTYPE_OFFSET))(this);
		}

		::System::Void set_ProgressType(::RPG::Client::LimaoNews::LimaoNewsWorkProgressType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_PROGRESSTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_ISREVIEWMODE_OFFSET))(this);
		}

		::System::Void set_IsReviewMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_ISREVIEWMODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlanID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_PLANID_OFFSET))(this);
		}

		::System::Void set_PlanID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_PLANID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PlanPhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_PLANPHASEID_OFFSET))(this);
		}

		::System::Void set_PlanPhaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_PLANPHASEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* get_PopWindowList()
		{
			return ((::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_GET_POPWINDOWLIST_OFFSET))(this);
		}

		::System::Void set_PopWindowList(::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_SET_POPWINDOWLIST_OFFSET))(this, a1);
		}

		::System::Void AddPopWindow(::Sofa::BaseSofaWindow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSBASEVIEWMODEL_ADDPOPWINDOW_OFFSET))(this, a1);
		}
	};
}
