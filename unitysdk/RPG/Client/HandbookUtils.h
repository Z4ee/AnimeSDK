#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GuideType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKUTILS_GETGUIDECONDITIONMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1A068340)
#define RPG_CLIENT_HANDBOOKUTILS_GETGUIDECONDITIONSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1A068650)
#define RPG_CLIENT_HANDBOOKUTILS_GETMATERIALMATCHINGAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1A068B00)
#define RPG_CLIENT_HANDBOOKUTILS_GUIDECONDITIONFETCHED_OFFSET UNITYSDK_OFFSET(0x1A0548D0)
#define RPG_CLIENT_HANDBOOKUTILS_HASDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x1A067CB0)
#define RPG_CLIENT_HANDBOOKUTILS_HASGUIDEREDDOT_OFFSET UNITYSDK_OFFSET(0x1A068060)
#define RPG_CLIENT_HANDBOOKUTILS_HASPHASEREDDOT_OFFSET UNITYSDK_OFFSET(0x1A067C20)
#define RPG_CLIENT_HANDBOOKUTILS_ISGUIDEFARM_OFFSET UNITYSDK_OFFSET(0x1A053360)
#define RPG_CLIENT_HANDBOOKUTILS_ISMATERIALMATCHINGAVATAR_OFFSET UNITYSDK_OFFSET(0x1A068900)
#define RPG_CLIENT_HANDBOOKUTILS_RECORDGUIDEITEMSEEN_OFFSET UNITYSDK_OFFSET(0x1A0686D0)
#define RPG_CLIENT_HANDBOOKUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A068DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookUtils_TypeDefinitionIndex = 65710;

	class HandbookUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsGuideFarm(::RPG::GameCore::GuideType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GuideType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_ISGUIDEFARM_OFFSET))(a1);
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

		static ::System::Void RecordGuideItemSeen(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_RECORDGUIDEITEMSEEN_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMaterialMatchingAvatar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_ISMATERIALMATCHINGAVATAR_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetMaterialMatchingAvatarList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKUTILS_GETMATERIALMATCHINGAVATARLIST_OFFSET))(a1);
		}
	};
}
