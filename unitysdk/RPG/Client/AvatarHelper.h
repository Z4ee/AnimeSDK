#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_34489C07F511839D;
class Class_1_EFF03B82D1C2B1F6;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace Proto { class ItemCost; }
namespace Proto { class PlayerAssistInfo; }
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARHELPER_CHECKACTIVEPATHNEEDSUPGRADE_OFFSET UNITYSDK_OFFSET(0x181407B0)
#define RPG_CLIENT_AVATARHELPER_CHECKHASOBTAINEDMULTIPLEPATHS_OFFSET UNITYSDK_OFFSET(0x18140D00)
#define RPG_CLIENT_AVATARHELPER_CHECKHASROLE_OFFSET UNITYSDK_OFFSET(0x1811A830)
#define RPG_CLIENT_AVATARHELPER_CHECKHASSPECIFICPATH_OFFSET UNITYSDK_OFFSET(0x18140B60)
#define RPG_CLIENT_AVATARHELPER_CHECKISACTIVEPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x18140DF0)
#define RPG_CLIENT_AVATARHELPER_CHECKISGENDER_OFFSET UNITYSDK_OFFSET(0x181423C0)
#define RPG_CLIENT_AVATARHELPER_CHECKISHERO_OFFSET UNITYSDK_OFFSET(0x18119C00)
#define RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET UNITYSDK_OFFSET(0x18142240)
#define RPG_CLIENT_AVATARHELPER_CHECKISSAMEROLE_OFFSET UNITYSDK_OFFSET(0x18140AF0)
#define RPG_CLIENT_AVATARHELPER_CHECKOBTAINEDSPECIFICPATHNEEDSUPGRADE_OFFSET UNITYSDK_OFFSET(0x18140950)
#define RPG_CLIENT_AVATARHELPER_CHECKSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0x18142CD0)
#define RPG_CLIENT_AVATARHELPER_ENUMERATEALLACTIVEPATHAVATARS_OFFSET UNITYSDK_OFFSET(0x1813EE50)
#define RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET UNITYSDK_OFFSET(0x1811B420)
#define RPG_CLIENT_AVATARHELPER_ENUMERATEALLOBTAINEDSPECIFICPATHAVATARS_OFFSET UNITYSDK_OFFSET(0x1813EEF0)
#define RPG_CLIENT_AVATARHELPER_EQUIPLIGHTCONE_OFFSET UNITYSDK_OFFSET(0x18142960)
#define RPG_CLIENT_AVATARHELPER_EQUIPRELICS_OFFSET UNITYSDK_OFFSET(0x18142B10)
#define RPG_CLIENT_AVATARHELPER_FILLALLOBTAINEDSPECIFICPATHAVATARSBYROLETO_OFFSET UNITYSDK_OFFSET(0x1813F0B0)
#define RPG_CLIENT_AVATARHELPER_FLIPSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0x18142D90)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATARID_OFFSET UNITYSDK_OFFSET(0x181425F0)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEHEROAVATAR_OFFSET UNITYSDK_OFFSET(0x1813F850)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATARID_OFFSET UNITYSDK_OFFSET(0x18140F40)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x1811B580)
#define RPG_CLIENT_AVATARHELPER_GETACTIVEPATHMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x181413E0)
#define RPG_CLIENT_AVATARHELPER_GETADVPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0x18140460)
#define RPG_CLIENT_AVATARHELPER_GETALLACTIVEPATHAVATARS_OFFSET UNITYSDK_OFFSET(0x1813EC30)
#define RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARSBYROLE_OFFSET UNITYSDK_OFFSET(0x1813F040)
#define RPG_CLIENT_AVATARHELPER_GETALLOBTAINEDSPECIFICPATHAVATARS_OFFSET UNITYSDK_OFFSET(0x1813ED40)
#define RPG_CLIENT_AVATARHELPER_GETASSISTANTAVATAR_OFFSET UNITYSDK_OFFSET(0x1813FC80)
#define RPG_CLIENT_AVATARHELPER_GETAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x18141CE0)
#define RPG_CLIENT_AVATARHELPER_GETAVATARNAME_OFFSET UNITYSDK_OFFSET(0x18142710)
#define RPG_CLIENT_AVATARHELPER_GETCOUNTOFOBTAINEDROLES_OFFSET UNITYSDK_OFFSET(0x1813F160)
#define RPG_CLIENT_AVATARHELPER_GETCURRENTAVATARID_OFFSET UNITYSDK_OFFSET(0x181424C0)
#define RPG_CLIENT_AVATARHELPER_GETDAMAGETYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x181421B0)
#define RPG_CLIENT_AVATARHELPER_GETDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x18141E40)
#define RPG_CLIENT_AVATARHELPER_GETEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x18140C50)
#define RPG_CLIENT_AVATARHELPER_GETFIXEDPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x1813F580)
#define RPG_CLIENT_AVATARHELPER_GETGENDER_OFFSET UNITYSDK_OFFSET(0x18142310)
#define RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHACTIVEPATH_OFFSET UNITYSDK_OFFSET(0x1813FD50)
#define RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATARWITHMAXENHANCED_OFFSET UNITYSDK_OFFSET(0x1811B300)
#define RPG_CLIENT_AVATARHELPER_GETINITIALPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0x1813FF50)
#define RPG_CLIENT_AVATARHELPER_GETINITIALREMOTEPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0x1813FB50)
#define RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x18141F30)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDAVATARWITHMAXENHANCED_OFFSET UNITYSDK_OFFSET(0x1813F720)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDMULTIPATHAVATARTYPESBYROLE_OFFSET UNITYSDK_OFFSET(0x18141420)
#define RPG_CLIENT_AVATARHELPER_GETOBTAINEDSPECIFICPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x1813F630)
#define RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET UNITYSDK_OFFSET(0x18141B80)
#define RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARFORCHANGEENHANCED_OFFSET UNITYSDK_OFFSET(0x181400C0)
#define RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHMAXENHANCED_OFFSET UNITYSDK_OFFSET(0x18140320)
#define RPG_CLIENT_AVATARHELPER_GETPREVIEWAVATARWITHPROFILE_OFFSET UNITYSDK_OFFSET(0x18140000)
#define RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET UNITYSDK_OFFSET(0x18141D40)
#define RPG_CLIENT_AVATARHELPER_GETRARITYTYPE_OFFSET UNITYSDK_OFFSET(0x18141EB0)
#define RPG_CLIENT_AVATARHELPER_GETREMOTEPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0x1813F9A0)
#define RPG_CLIENT_AVATARHELPER_GETROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1813EF90)
#define RPG_CLIENT_AVATARHELPER_GETROLEID_OFFSET UNITYSDK_OFFSET(0x18142410)
#define RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x181420A0)
#define RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0x18141AE0)
#define RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET UNITYSDK_OFFSET(0x18142120)
#define RPG_CLIENT_AVATARHELPER_GETTRIALAVATARFORCURRENTWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1813F200)
#define RPG_CLIENT_AVATARHELPER_GETTRIALAVATARSFORCURRENTWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1813F2A0)
#define RPG_CLIENT_AVATARHELPER_GETTRIALAVATARWITHWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1813F4D0)
#define RPG_CLIENT_AVATARHELPER_GETUPGRADEAVATARWITHACTIVEPATH_OFFSET UNITYSDK_OFFSET(0x181405D0)
#define RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATHS_OFFSET UNITYSDK_OFFSET(0x18141190)
#define RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATH_OFFSET UNITYSDK_OFFSET(0x18141080)
#define RPG_CLIENT_AVATARHELPER_TAKEOFFLIGHTCONE_OFFSET UNITYSDK_OFFSET(0x18142A40)
#define RPG_CLIENT_AVATARHELPER_TAKEOFFRELICS_OFFSET UNITYSDK_OFFSET(0x18142BF0)
#define RPG_CLIENT_AVATARHELPER_TAKEPROMOTIONREWARD_OFFSET UNITYSDK_OFFSET(0x18142F10)
#define RPG_CLIENT_AVATARHELPER_UNLOCKTRACENODE_OFFSET UNITYSDK_OFFSET(0x18142890)
#define RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET UNITYSDK_OFFSET(0x18141FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarHelper_TypeDefinitionIndex = 59876;

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

		static ::RPG::AvatarSystem::IAvatar* GetAssistantAvatar(::Proto::PlayerAssistInfo* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETASSISTANTAVATAR_OFFSET))(a1);
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

		static ::RPG::Client::Promises::IPromise* SwitchActivePath(::Enum_3_DFCB42601400F441 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATH_OFFSET))(a1);
		}

		static ::RPG::Client::Promises::IPromise* SwitchActivePaths(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_SWITCHACTIVEPATHS_OFFSET))(a1);
		}

		static ::Enum_3_DFCB42601400F441 GetActivePathMultiPathAvatarType(::System::UInt32 a1)
		{
			return ((::Enum_3_DFCB42601400F441(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETACTIVEPATHMULTIPATHAVATARTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* GetObtainedMultiPathAvatarTypesByRole(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETOBTAINEDMULTIPATHAVATARTYPESBYROLE_OFFSET))(a1);
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
	};
}
