#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_07B74073C7F8D5A1;
class Class_1_4A42FCB6B3DCAEBA;
class Class_1_6CDB7667E9681B58;
namespace RPG::Client::ActivityMarble { class PetMarbleSkillInfo; }
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::PetMarble { class IPetMarbleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_ALLOWPLAYUI3DIDLESHOW_OFFSET UNITYSDK_OFFSET(0xDAD7290)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_COMPAREPET_OFFSET UNITYSDK_OFFSET(0xDAD7990)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xDAD7400)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDAD65E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GETCURAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDAD6720)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GETOWNEDAPPEARANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xDAD6AE0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GETUI3DIDLESHOWANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xDAD1520)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xDAD9150)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_COMMONTALKIDLIST_OFFSET UNITYSDK_OFFSET(0xDAD8650)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_CURAPPEARANCEID_OFFSET UNITYSDK_OFFSET(0xDAD6AA0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_CURPETINS_OFFSET UNITYSDK_OFFSET(0xDAD9680)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDAD90A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_DISPLAYPET_OFFSET UNITYSDK_OFFSET(0xDAD7710)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_HP_OFFSET UNITYSDK_OFFSET(0xDAD9100)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDAD8F00)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xDAD76C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISCANTRIAL_OFFSET UNITYSDK_OFFSET(0xDAD8410)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISCHROMA_OFFSET UNITYSDK_OFFSET(0xDAD86C0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xDAD8320)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISTIMELIMITED_OFFSET UNITYSDK_OFFSET(0xDAD9D40)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISTRIAL_OFFSET UNITYSDK_OFFSET(0xDAD8370)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xDAD8470)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDAD8FE0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_NORMALPET_OFFSET UNITYSDK_OFFSET(0xDAD9CD0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_PETID_OFFSET UNITYSDK_OFFSET(0xDAD6A50)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_PETINSLIST_OFFSET UNITYSDK_OFFSET(0xDAD9380)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xDAD8E90)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xDAD91A0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xDAD8670)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0xDAD8DA0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xDAD8F70)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_TRIALENDTIME_OFFSET UNITYSDK_OFFSET(0xDAD9D20)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET__PROPERTYID_OFFSET UNITYSDK_OFFSET(0xDAD6590)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET__VIEWID_OFFSET UNITYSDK_OFFSET(0xDAD6540)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_REFRESHPETINS_OFFSET UNITYSDK_OFFSET(0xDAD6690)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_SETTIMELIMITEDTRIAL_OFFSET UNITYSDK_OFFSET(0xDAD6640)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_SET_COMMONTALKIDLIST_OFFSET UNITYSDK_OFFSET(0xDAD8660)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_SET_CURAPPEARANCEID_OFFSET UNITYSDK_OFFSET(0xDAD64E0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA_SET_TRIALENDTIME_OFFSET UNITYSDK_OFFSET(0xDAD9D30)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDAD62F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA__GET_PETINSLIST_B__50_0_OFFSET UNITYSDK_OFFSET(0xDAD9D90)
#define RPG_CLIENT_PETMARBLE_PETMARBLEDATA__REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xDAD8180)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleData_TypeDefinitionIndex = 74695;

	class PetMarbleData : public ::System::Object
	{
	public:
		::Class_1_07B74073C7F8D5A1* _Row; // 0x10
		::Class_1_6CDB7667E9681B58* _ViewRow; // 0x18
		::System::Collections::Generic::IList_1<::RPG::Client::Pet::IPetInstance*>* _PetInsList; // 0x20
		::Class_1_4A42FCB6B3DCAEBA* _BattleRow; // 0x28
		::System::Collections::Generic::IList_1<::System::UInt32>* _CommonTalkIDList_k__BackingField; // 0x30
		::RPG::Client::ActivityMarble::PetMarbleSkillInfo* _SkillInfo; // 0x38
		::System::Int64 _TrialEndTime_k__BackingField; // 0x40
		::System::UInt32 _CurAppearanceId; // 0x48

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::PetMarble::PetMarbleData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PetMarble::PetMarbleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SetTimeLimitedTrial(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_SETTIMELIMITEDTRIAL_OFFSET))(this, a1);
		}

		::System::Void RefreshPetIns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_REFRESHPETINS_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetAppearance* GetCurAppearance()
		{
			return ((::RPG::Client::Pet::IPetAppearance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GETCURAPPEARANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetOwnedAppearanceIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GETOWNEDAPPEARANCEIDLIST_OFFSET))(this);
		}

		::System::Boolean AllowPlayUI3DIdleShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_ALLOWPLAYUI3DIDLESHOW_OFFSET))(this);
		}

		::System::String* GetUI3DIdleShowAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GETUI3DIDLESHOWANIMATIONNAME_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::PetMarble::IPetMarbleData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PetMarble::IPetMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_COMPARETO_OFFSET))(this, a1);
		}

		static ::System::Int32 ComparePet(::RPG::Client::Pet::IPet* a1, ::RPG::Client::Pet::IPet* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Int32(*)(::RPG::Client::Pet::IPet*, ::RPG::Client::Pet::IPet*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_COMPAREPET_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void _RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA__REFRESHVIEW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_PetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_PETID_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISTRIAL_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsCanTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISCANTRIAL_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_CommonTalkIDList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_COMMONTALKIDLIST_OFFSET))(this);
		}

		::System::Void set_CommonTalkIDList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_SET_COMMONTALKIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_SKILLID_OFFSET))(this);
		}

		::System::Boolean get_IsChroma()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISCHROMA_OFFSET))(this);
		}

		::RPG::Client::ActivityMarble::PetMarbleSkillInfo* get_SkillInfo()
		{
			return ((::RPG::Client::ActivityMarble::PetMarbleSkillInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_SKILLINFO_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_PREFABPATH_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_SMALLICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Int32 get_HP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_HP_OFFSET))(this);
		}

		::System::Int32 get_Attack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::Client::Pet::PetRarity get_Rarity()
		{
			return ((::RPG::Client::Pet::PetRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::Pet::IPetInstance*>* get_PetInsList()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_PETINSLIST_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetInstance* get_CurPetIns()
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_CURPETINS_OFFSET))(this);
		}

		::RPG::Client::Pet::IPet* get_NormalPet()
		{
			return ((::RPG::Client::Pet::IPet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_NORMALPET_OFFSET))(this);
		}

		::RPG::Client::Pet::IPet* get_DisplayPet()
		{
			return ((::RPG::Client::Pet::IPet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_DISPLAYPET_OFFSET))(this);
		}

		::System::Int64 get_TrialEndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_TRIALENDTIME_OFFSET))(this);
		}

		::System::Void set_TrialEndTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_SET_TRIALENDTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTimeLimited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_ISTIMELIMITED_OFFSET))(this);
		}

		::System::UInt32 get_CurAppearanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET_CURAPPEARANCEID_OFFSET))(this);
		}

		::System::Void set_CurAppearanceId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_SET_CURAPPEARANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get__ViewID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET__VIEWID_OFFSET))(this);
		}

		::System::UInt32 get__PropertyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA_GET__PROPERTYID_OFFSET))(this);
		}

		::System::Boolean _get_PetInsList_b__50_0(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEDATA__GET_PETINSLIST_B__50_0_OFFSET))(this, a1);
		}
	};
}
