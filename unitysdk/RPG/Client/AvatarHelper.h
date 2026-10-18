#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441_1.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_34489C07F511839D;
class Class_1_D19D91BCCBD08494;
class Class_1_EFF03B82D1C2B1F6;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace Proto { class ItemCost; }
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARHELPER_CHECKACTIVEPATHNEEDSUPGRADE_OFFSET UNITYSDK_OFFSET(0xC6F05C0)
#define RPG_CLIENT_AVATARHELPER_CHECKHASOBTAINEDMULTIPLEPATHS_OFFSET UNITYSDK_OFFSET(0xC6F0D20)
#define RPG_CLIENT_AVATARHELPER_CHECKHASROLE_OFFSET UNITYSDK_OFFSET(0xC6F0A80)
#define RPG_CLIENT_AVATARHELPER_CHECKHASSPECIFICPATH_OFFSET UNITYSDK_OFFSET(0xC6F0B80)
#define RPG_CLIENT_AVATARHELPER_CHECKISACTIVEPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xC6F0E10)
#define RPG_CLIENT_AVATARHELPER_CHECKISGENDER_OFFSET UNITYSDK_OFFSET(0xC6F2580)
#define RPG_CLIENT_AVATARHELPER_CHECKISHERO_OFFSET UNITYSDK_OFFSET(0xC6F27B0)
#define RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET UNITYSDK_OFFSET(0xC6F2400)
#define RPG_CLIENT_AVATARHELPER_CHECKISSAMEROLE_OFFSET UNITYSDK_OFFSET(0xC6F0900)
#define RPG_CLIENT_AVATARHELPER_CHECKOBTAINEDSPECIFICPATHNEEDSUPGRADE_OFFSET UNITYSDK_OFFSET(0xC6F0760)
#define RPG_CLIENT_AVATARHELPER_CHECKSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0xC6F2F90)
#define RPG_CLIENT_AVATARHELPER_ENUMERATEALLACTIVEPATHAVATARS_OFFSET UNITYSDK_OFFSET(0xC6EEB30)
#define RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET UNITYSDK_OFFSET(0xC6CA960)
#define RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARS_OFFSET UNITYSDK_OFFSET(0xC6EEBD0)
#define RPG_CLIENT_AVATARHELPER_EQUIPLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xC6F2C20)
#define RPG_CLIENT_AVATARHELPER_EQUIPRELICS_OFFSET UNITYSDK_OFFSET(0xC6F2DD0)
#define RPG_CLIENT_AVATARHELPER_FILLALLOBTAINEDSPECIFICPATHAVATARSBYROLETO_OFFSET UNITYSDK_OFFSET(0xC6EED90)
#define RPG_CLIENT_AVATARHELPER_FLIPSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0xC6F2FE0)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATARID_OFFSET UNITYSDK_OFFSET(0xC6F2870)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATAR_OFFSET UNITYSDK_OFFSET(0xC6EF530)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATARID_OFFSET UNITYSDK_OFFSET(0xC6F0F60)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xC6CAAC0)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEPATHMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0xC6F1400)
#define RPG_CLIENT_AVATARHELPER_GETADVPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0xC6F0270)
#define RPG_CLIENT_AVATARHELPER_GETALLACTIVEPATHAVATARS_OFFSET UNITYSDK_OFFSET(0xC6EE910)
#define RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET UNITYSDK_OFFSET(0xC6EED20)
#define RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARS_OFFSET UNITYSDK_OFFSET(0xC6EEA20)
#define RPG_CLIENT_AVATARHELPER_GETASSISTANTAVATAR_OFFSET UNITYSDK_OFFSET(0xC6EF960)
#define RPG_CLIENT_AVATARHELPER_GETAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xC6F1D00)
#define RPG_CLIENT_AVATARHELPER_GETAVATARFORGROWTHDISPLAY_OFFSET UNITYSDK_OFFSET(0xC6EFD00)
#define RPG_CLIENT_AVATARHELPER_GETAVATARNAME_OFFSET UNITYSDK_OFFSET(0xC6F2990)
#define RPG_CLIENT_AVATARHELPER_GETCOUNTOFOBTAINEDROLES_OFFSET UNITYSDK_OFFSET(0xC6EEE40)
#define RPG_CLIENT_AVATARHELPER_GETCURRENTAVATARID_OFFSET UNITYSDK_OFFSET(0xC6F2680)
#define RPG_CLIENT_AVATARHELPER_GETDAMAGETYPEICONPATH_OFFSET UNITYSDK_OFFSET(0xC6F2370)
#define RPG_CLIENT_AVATARHELPER_GETDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xC6F1E90)
#define RPG_CLIENT_AVATARHELPER_GETEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0xC6F0C70)
#define RPG_CLIENT_AVATARHELPER_GETFIXEDPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xC6EF260)
#define RPG_CLIENT_AVATARHELPER_GETGENDER_OFFSET UNITYSDK_OFFSET(0xC6F24D0)
#define RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHACTIVEPATH_OFFSET UNITYSDK_OFFSET(0xC6EFA30)
#define RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHMAXENHANCED_OFFSET UNITYSDK_OFFSET(0xC6CA830)
#define RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0xC6EFC40)
#define RPG_CLIENT_AVATARHELPER_GETINITIALREMOTEPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0xC6EF830)
#define RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET UNITYSDK_OFFSET(0xC6F1F80)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDAVATARWITHMAXENHANCED_OFFSET UNITYSDK_OFFSET(0xC6EF400)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDMULTIPATHAVATARTYPESBYROLE_OFFSET UNITYSDK_OFFSET(0xC6F1440)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDSPECIFICPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xC6EF310)
#define RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET UNITYSDK_OFFSET(0xC6F1BA0)
#define RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARFORCHANGEENHANCED_OFFSET UNITYSDK_OFFSET(0xC6EFED0)
#define RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHMAXENHANCED_OFFSET UNITYSDK_OFFSET(0xC6F0130)
#define RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHPROFILE_OFFSET UNITYSDK_OFFSET(0xC6EFE10)
#define RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET UNITYSDK_OFFSET(0xC6F1D60)
#define RPG_CLIENT_AVATARHELPER_GETRARITYTYPE_OFFSET UNITYSDK_OFFSET(0xC6F1F00)
#define RPG_CLIENT_AVATARHELPER_GETREMOTEPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0xC6EF680)
#define RPG_CLIENT_AVATARHELPER_GETROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC6EEC70)
#define RPG_CLIENT_AVATARHELPER_GETROLEID_OFFSET UNITYSDK_OFFSET(0xC6F25D0)
#define RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xC6F2250)
#define RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0xC6F1B00)
#define RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET UNITYSDK_OFFSET(0xC6F22E0)
#define RPG_CLIENT_AVATARHELPER_GETTRIALAVATARFORCURRENTWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xC6EEEE0)
#define RPG_CLIENT_AVATARHELPER_GETTRIALAVATARSFORCURRENTWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xC6EEF80)
#define RPG_CLIENT_AVATARHELPER_GETTRIALAVATARWITHWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xC6EF1B0)
#define RPG_CLIENT_AVATARHELPER_GETUPGRADEAVATARWITHACTIVEPATH_OFFSET UNITYSDK_OFFSET(0xC6F03E0)
#define RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATHS_OFFSET UNITYSDK_OFFSET(0xC6F11B0)
#define RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATH_OFFSET UNITYSDK_OFFSET(0xC6F10A0)
#define RPG_CLIENT_AVATARHELPER_TAKEOFFLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xC6F2D00)
#define RPG_CLIENT_AVATARHELPER_TAKEOFFRELICS_OFFSET UNITYSDK_OFFSET(0xC6F2EB0)
#define RPG_CLIENT_AVATARHELPER_TAKEPROMOTIONREWARD_OFFSET UNITYSDK_OFFSET(0xC6F30E0)
#define RPG_CLIENT_AVATARHELPER_UNLOCKTRACENODE_OFFSET UNITYSDK_OFFSET(0xC6F2B50)
#define RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET UNITYSDK_OFFSET(0xC6F2020)
#define RPG_CLIENT_AVATARHELPER__TRYGETPRERELEASESHELLAVATAR_OFFSET UNITYSDK_OFFSET(0xC6F2110)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarHelper_TypeDefinitionIndex = 62640;

	class AvatarHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllActivePathAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETALLACTIVEPATHAVATARS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllObtainedSpecificPathAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARS_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* EnumerateAllActivePathAvatars()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_ENUMERATEALLACTIVEPATHAVATARS_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* EnumerateAllObtainedSpecificPathAvatars()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARS_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* EnumerateAllObtainedSpecificPathAvatarsByRole(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllObtainedSpecificPathAvatarsByRole(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET))(a1);
		}

		static ::System::Void FillAllObtainedSpecificPathAvatarsByRoleTo(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_FILLALLOBTAINEDSPECIFICPATHAVATARSBYROLETO_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetCountOfObtainedRoles()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETCOUNTOFOBTAINEDROLES_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetTrialAvatarForCurrentWorldLevel(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETTRIALAVATARFORCURRENTWORLDLEVEL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatarsForCurrentWorldLevel(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETTRIALAVATARSFORCURRENTWORLDLEVEL_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetTrialAvatarWithWorldLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETTRIALAVATARWITHWORLDLEVEL_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* GetActivePathAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetFixedPathAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETFIXEDPATHAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetObtainedSpecificPathAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETOBTAINEDSPECIFICPATHAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetObtainedAvatarWithMaxEnhanced(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETOBTAINEDAVATARWITHMAXENHANCED_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetActiveHeroAvatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATAR_OFFSET))();
		}

		static ::RPG::AvatarSystem::IAvatar* GetRemotePlayerAvatar(::System::UInt32 a1, ::System::String* a2, ::Proto::DisplayAvatarDetailInfo* a3, ::Class_1_075C34D03AFA1215_7* a4)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::System::String*, ::Proto::DisplayAvatarDetailInfo*, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETREMOTEPLAYERAVATAR_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::AvatarSystem::IAvatar* GetInitialRemotePlayerAvatar(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4, ::Class_1_075C34D03AFA1215_7* a5)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETINITIALREMOTEPLAYERAVATAR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::AvatarSystem::IAvatar* GetAssistantAvatar(::Class_1_D19D91BCCBD08494* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::Class_1_D19D91BCCBD08494*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETASSISTANTAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetInitialPreviewAvatarWithActivePath(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHACTIVEPATH_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetInitialPreviewAvatarWithMaxEnhanced(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHMAXENHANCED_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetInitialPreviewAvatar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATAR_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* GetAvatarForGrowthDisplay(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETAVATARFORGROWTHDISPLAY_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetPreviewAvatarWithProfile(::System::UInt32 a1, ::Class_1_EFF03B82D1C2B1F6* a2, ::System::UInt32 a3)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::Class_1_EFF03B82D1C2B1F6*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHPROFILE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::AvatarSystem::IAvatar* GetPreviewAvatarForChangeEnhanced(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARFORCHANGEENHANCED_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* GetPreviewAvatarWithMaxEnhanced(::System::UInt32 a1, ::Class_1_EFF03B82D1C2B1F6* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHMAXENHANCED_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* GetAdvPlayerAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETADVPLAYERAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetUpgradeAvatarWithActivePath(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETUPGRADEAVATARWITHACTIVEPATH_OFFSET))(a1);
		}

		static ::System::Boolean CheckActivePathNeedsUpgrade(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKACTIVEPATHNEEDSUPGRADE_OFFSET))(a1);
		}

		static ::System::Boolean CheckObtainedSpecificPathNeedsUpgrade(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKOBTAINEDSPECIFICPATHNEEDSUPGRADE_OFFSET))(a1);
		}

		static ::Struct_2_D645B4E0B73852B6 GetRoleIdentifier(::System::UInt32 a1)
		{
			return ((::Struct_2_D645B4E0B73852B6(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETROLEIDENTIFIER_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsSameRole(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISSAMEROLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckHasRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKHASROLE_OFFSET))(a1);
		}

		static ::System::Boolean CheckHasSpecificPath(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKHASSPECIFICPATH_OFFSET))(a1);
		}

		static ::System::UInt32 GetEidolonLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETEIDOLONLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean CheckHasObtainedMultiplePaths(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKHASOBTAINEDMULTIPLEPATHS_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsActivePathAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISACTIVEPATHAVATAR_OFFSET))(a1);
		}

		static ::System::UInt32 GetActivePathAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATARID_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* SwitchActivePath(::Enum_3_DFCB42601400F441_1 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Enum_3_DFCB42601400F441_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATH_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* SwitchActivePaths(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATHS_OFFSET))(a1);
		}

		static ::Enum_3_DFCB42601400F441_1 GetActivePathMultiPathAvatarType(::System::UInt32 a1)
		{
			return ((::Enum_3_DFCB42601400F441_1(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEPATHMULTIPATHAVATARTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>* GetObtainedMultiPathAvatarTypesByRole(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441_1>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETOBTAINEDMULTIPATHAVATARTYPESBYROLE_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetSkinPreviewAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::AvatarSkin* GetOriginSkinByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarBaseType GetAvatarBaseType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETAVATARBASETYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::AttackDamageType GetDamageType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETDAMAGETYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::CombatPowerAvatarRarityType GetRarityType(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETRARITYTYPE_OFFSET))(a1);
		}

		static ::System::String* GetMiniIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET))(a1);
		}

		static ::System::String* GetSideIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET))(a1);
		}

		static ::System::String* GetSmallPathIconPathByAvatarID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET))(a1);
		}

		static ::System::String* GetDamageTypeIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETDAMAGETYPEICONPATH_OFFSET))(a1);
		}

		static ::Class_1_34489C07F511839D* GetPrototypeByAvatarID(::System::UInt32 a1)
		{
			return ((::Class_1_34489C07F511839D*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsOriginSkinID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET))(a1);
		}

		static ::RPG::GameCore::GenderType GetGender(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GenderType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETGENDER_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsGender(::System::UInt32 a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISGENDER_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetRoleID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETROLEID_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurrentAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETCURRENTAVATARID_OFFSET))(a1);
		}

		static ::System::Boolean CheckIsHero(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISHERO_OFFSET))(a1);
		}

		static ::System::UInt32 GetActiveHeroAvatarID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATARID_OFFSET))();
		}

		static ::System::String* GetAvatarName(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETAVATARNAME_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* UnlockTraceNode(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Proto::ItemCost*>* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_UNLOCKTRACENODE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::Promises::IPromise* EquipLightCone(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_EQUIPLIGHTCONE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::IPromise* TakeOffLightCone(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_TAKEOFFLIGHTCONE_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* EquipRelics(::System::UInt32 a1, ::Il2CppArray<::RPG::Client::RelicItemData*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::Il2CppArray<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_EQUIPRELICS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::IPromise* TakeOffRelics(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::RelicType>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::Il2CppArray<::RPG::GameCore::RelicType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_TAKEOFFRELICS_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckShowSimplifiedSkillDesc()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKSHOWSIMPLIFIEDSKILLDESC_OFFSET))();
		}

		static ::System::Void FlipShowSimplifiedSkillDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_FLIPSHOWSIMPLIFIEDSKILLDESC_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* TakePromotionReward(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_TAKEPROMOTIONREWARD_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* _GetSpecificPathAvatarByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* _TryGetPreReleaseShellAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__TRYGETPRERELEASESHELLAVATAR_OFFSET))(a1);
		}
	};
}
