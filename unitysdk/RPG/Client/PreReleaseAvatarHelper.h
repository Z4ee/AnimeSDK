#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreCharacterStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_0A511EC341C76F1D;
class Class_1_681E72ABCB5FC1A8;
class Class_1_7EF02314A161D04B;
class Class_1_E8637EF90A97A449;
class Class_1_E8637EF90A97A449_1;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PreAvatarGrowthMaterialData; }
namespace RPG::Client { class PreReleaseAvatarRosterGroups; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PRERELEASEAVATARHELPER_CLEARDISABLEDPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0xDC08730)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_DISABLEALLPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0xDC08780)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETORCREATEPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xDC08270)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xDC081B0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEGROWTHMATERIALDATA_OFFSET UNITYSDK_OFFSET(0xDC08A70)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEROSTERGROUPS_OFFSET UNITYSDK_OFFSET(0xDC08AD0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASESTATUS_OFFSET UNITYSDK_OFFSET(0xDC083E0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASETEAMICONPATH_OFFSET UNITYSDK_OFFSET(0xDC08360)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__AVATARREPO_OFFSET UNITYSDK_OFFSET(0xDC08030)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__DISABLE_OFFSET UNITYSDK_OFFSET(0xDC08130)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__INFOREPO_OFFSET UNITYSDK_OFFSET(0xDC07FB0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__SEEN_OFFSET UNITYSDK_OFFSET(0xDC080B0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_GET__STATE_OFFSET UNITYSDK_OFFSET(0xDC07F00)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_HASPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xDC08210)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_HASUNSEENPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xDC08970)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISADVERTISINGAVATAR_OFFSET UNITYSDK_OFFSET(0xDC08560)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISCOLLABORATIONAVATAR_OFFSET UNITYSDK_OFFSET(0xDC084A0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISDISABLEDPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xDC087D0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISPRERELEASEAVATARUNSEEN_OFFSET UNITYSDK_OFFSET(0xDC089C0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPCOMINGREMASTERAVATAR_OFFSET UNITYSDK_OFFSET(0xDC08500)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPRELEASINGAVATAR_OFFSET UNITYSDK_OFFSET(0xDC08440)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDALLPRERELEASEAVATARSSEEN_OFFSET UNITYSDK_OFFSET(0xDC088C0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDPRERELEASEAVATARSEEN_OFFSET UNITYSDK_OFFSET(0xDC08910)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_REFRESHPRERELEASESEENRECORDS_OFFSET UNITYSDK_OFFSET(0xDC08A20)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASEDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xDC08620)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASERELICDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xDC08670)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_SETDISABLEDPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0xDC086D0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARSBYREFERENCE_OFFSET UNITYSDK_OFFSET(0xDC09180)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARS_OFFSET UNITYSDK_OFFSET(0xDC09130)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_TRYGETPRERELEASERELICSETIDS_OFFSET UNITYSDK_OFFSET(0xDC082D0)
#define RPG_CLIENT_PRERELEASEAVATARHELPER_VALIDATEGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0xDC08870)

namespace RPG::Client
{
	inline static constexpr unsigned int PreReleaseAvatarHelper_TypeDefinitionIndex = 66720;

	class PreReleaseAvatarHelper : public ::System::Object
	{
	public:
		static ::Class_1_681E72ABCB5FC1A8* get__State()
		{
			return ((::Class_1_681E72ABCB5FC1A8*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__STATE_OFFSET))();
		}

		static ::Class_1_0A511EC341C76F1D* get__InfoRepo()
		{
			return ((::Class_1_0A511EC341C76F1D*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__INFOREPO_OFFSET))();
		}

		static ::Class_1_7EF02314A161D04B* get__AvatarRepo()
		{
			return ((::Class_1_7EF02314A161D04B*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__AVATARREPO_OFFSET))();
		}

		static ::Class_1_E8637EF90A97A449_1* get__Seen()
		{
			return ((::Class_1_E8637EF90A97A449_1*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__SEEN_OFFSET))();
		}

		static ::Class_1_E8637EF90A97A449* get__Disable()
		{
			return ((::Class_1_E8637EF90A97A449*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GET__DISABLE_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetPreReleaseAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean HasPreReleaseAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_HASPRERELEASEAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetOrCreatePreReleaseAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETORCREATEPRERELEASEAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean TryGetPreReleaseRelicSetIDs(::System::UInt32 a1, ::System::UInt32& a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_TRYGETPRERELEASERELICSETIDS_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetPreReleaseTeamIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASETEAMICONPATH_OFFSET))(a1);
		}

		static ::RPG::Client::PreCharacterStatus GetPreReleaseStatus(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreCharacterStatus(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASESTATUS_OFFSET))(a1);
		}

		static ::System::Boolean IsUpReleasingAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPRELEASINGAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsCollaborationAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISCOLLABORATIONAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsUpcomingRemasterAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISUPCOMINGREMASTERAVATAR_OFFSET))(a1);
		}

		static ::System::Boolean IsAdvertisingAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISADVERTISINGAVATAR_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::Promise* RequestPreReleaseDataRefresh()
		{
			return ((::RPG::Client::Promises::Promise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASEDATAREFRESH_OFFSET))();
		}

		static ::RPG::Client::Promises::Promise* RequestPreReleaseRelicDataRefresh(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_REQUESTPRERELEASERELICDATAREFRESH_OFFSET))(a1);
		}

		static ::System::Void SetDisabledPreReleaseAvatars(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_SETDISABLEDPRERELEASEAVATARS_OFFSET))(a1);
		}

		static ::System::Void ClearDisabledPreReleaseAvatars()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_CLEARDISABLEDPRERELEASEAVATARS_OFFSET))();
		}

		static ::System::Void DisableAllPreReleaseAvatars()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_DISABLEALLPRERELEASEAVATARS_OFFSET))();
		}

		static ::System::Boolean IsDisabledPreReleaseAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISDISABLEDPRERELEASEAVATAR_OFFSET))(a1);
		}

		static ::System::Void ValidateGrowthTarget()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_VALIDATEGROWTHTARGET_OFFSET))();
		}

		static ::System::Void RecordAllPreReleaseAvatarsSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDALLPRERELEASEAVATARSSEEN_OFFSET))();
		}

		static ::System::Void RecordPreReleaseAvatarSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_RECORDPRERELEASEAVATARSEEN_OFFSET))(a1);
		}

		static ::System::Boolean HasUnseenPreReleaseAvatar()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_HASUNSEENPRERELEASEAVATAR_OFFSET))();
		}

		static ::System::Boolean IsPreReleaseAvatarUnseen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_ISPRERELEASEAVATARUNSEEN_OFFSET))(a1);
		}

		static ::System::Void RefreshPreReleaseSeenRecords()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_REFRESHPRERELEASESEENRECORDS_OFFSET))();
		}

		static ::RPG::Client::PreAvatarGrowthMaterialData* GetPreReleaseGrowthMaterialData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreAvatarGrowthMaterialData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEGROWTHMATERIALDATA_OFFSET))(a1);
		}

		static ::RPG::Client::PreReleaseAvatarRosterGroups* GetPreReleaseRosterGroups()
		{
			return ((::RPG::Client::PreReleaseAvatarRosterGroups*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_GETPRERELEASEROSTERGROUPS_OFFSET))();
		}

		static ::System::Void SortPreReleaseAvatars(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARS_OFFSET))(a1);
		}

		static ::System::Void SortPreReleaseAvatarsByReference(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRERELEASEAVATARHELPER_SORTPRERELEASEAVATARSBYREFERENCE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
