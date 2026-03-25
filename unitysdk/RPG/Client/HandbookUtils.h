#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GuideType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKUTILS_GETGUIDECONDITIONMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x9911E60)
#define RPG_CLIENT_HANDBOOKUTILS_GETGUIDECONDITIONSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x99120C0)
#define RPG_CLIENT_HANDBOOKUTILS_GETMATERIALMATCHINGAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9912560)
#define RPG_CLIENT_HANDBOOKUTILS_GUIDECONDITIONFETCHED_OFFSET UNITYSDK_OFFSET(0x98FEE80)
#define RPG_CLIENT_HANDBOOKUTILS_HASDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x9911870)
#define RPG_CLIENT_HANDBOOKUTILS_HASGUIDEREDDOT_OFFSET UNITYSDK_OFFSET(0x9911BD0)
#define RPG_CLIENT_HANDBOOKUTILS_HASPHASEREDDOT_OFFSET UNITYSDK_OFFSET(0x99117E0)
#define RPG_CLIENT_HANDBOOKUTILS_ISGUIDEFARM_OFFSET UNITYSDK_OFFSET(0x98FDAD0)
#define RPG_CLIENT_HANDBOOKUTILS_ISMATERIALMATCHINGAVATAR_OFFSET UNITYSDK_OFFSET(0x9912360)
#define RPG_CLIENT_HANDBOOKUTILS_RECORDGUIDEITEMSEEN_OFFSET UNITYSDK_OFFSET(0x9912140)
#define RPG_CLIENT_HANDBOOKUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x99127C0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookUtils_TypeDefinitionIndex = 53314;

	class HandbookUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsGuideFarm(::RPG::GameCore::GuideType guideType)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GuideType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_ISGUIDEFARM_OFFSET))(guideType);
		}

		static ::System::Boolean HasPhaseRedDot()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_HASPHASEREDDOT_OFFSET))();
		}

		static ::System::Boolean HasDailyRedDot()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_HASDAILYREDDOT_OFFSET))();
		}

		static ::System::Boolean HasGuideRedDot()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_HASGUIDEREDDOT_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetGuideConditionMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_GETGUIDECONDITIONMAINMISSIONIDS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetGuideConditionSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_GETGUIDECONDITIONSUBMISSIONIDS_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* GuideConditionFetched()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_GUIDECONDITIONFETCHED_OFFSET))();
		}

		static ::System::Void RecordGuideItemSeen(::System::UInt32 itemID, ::System::Boolean manualNotify)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_RECORDGUIDEITEMSEEN_OFFSET))(itemID, manualNotify);
		}

		static ::System::Boolean IsMaterialMatchingAvatar(::System::UInt32 avatarID, ::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_ISMATERIALMATCHINGAVATAR_OFFSET))(avatarID, itemID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetMaterialMatchingAvatarList(::System::UInt32 itemID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_GETMATERIALMATCHINGAVATARLIST_OFFSET))(itemID);
		}
	};
}
