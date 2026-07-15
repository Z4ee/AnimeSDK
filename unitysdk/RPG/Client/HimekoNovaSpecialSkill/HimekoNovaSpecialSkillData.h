#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GETDISPLAYSKILLNAME_OFFSET UNITYSDK_OFFSET(0x1794EB90)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GETMAINSKILLNAME_OFFSET UNITYSDK_OFFSET(0x1794EEB0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GETSKILLICON_OFFSET UNITYSDK_OFFSET(0x1794ED40)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x1794EB50)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x1794EAF0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1794EAB0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1794EAE0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_SIMPLIFIEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1794EB00)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1794EAC0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x1794EAD0)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_SKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x1794EB10)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_LOADALL_OFFSET UNITYSDK_OFFSET(0x1794F030)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1794EB20)
#define RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA__RESOLVEAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1794F710)

namespace RPG::Client::HimekoNovaSpecialSkill
{
	inline static constexpr unsigned int HimekoNovaSpecialSkillData_TypeDefinitionIndex = 75549;

	class HimekoNovaSpecialSkillData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 FixedDisplaySkillID = 0x24DEE; // 0x0
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _AvatarIDs_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _SimplifiedAvatarIDs_k__BackingField; // 0x18
		::RPG::GameCore::ICharacterSkillRowData* _SkillRowData_k__BackingField; // 0x20
		::RPG::Client::TextID _SkillName_k__BackingField; // 0x28
		::System::UInt32 _SkillID_k__BackingField; // 0x38
		::System::UInt32 _Level_k__BackingField; // 0x3C
		::System::Int32 _ID_k__BackingField; // 0x40

		::System::Void _ctor(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::TextID a4, ::RPG::GameCore::ICharacterSkillRowData* a5, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a6, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32, ::RPG::Client::TextID, ::RPG::GameCore::ICharacterSkillRowData*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_SKILLID_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_SKILLNAME_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_AvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_AVATARIDS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_SimplifiedAvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_SIMPLIFIEDAVATARIDS_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* get_SkillRowData()
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GET_SKILLROWDATA_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData()
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GETSKILLROWDATA_OFFSET))(this);
		}

		::RPG::Client::TextID GetDisplaySkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GETDISPLAYSKILLNAME_OFFSET))(this);
		}

		::System::String* GetSkillIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GETSKILLICON_OFFSET))(this);
		}

		static ::RPG::Client::TextID GetMainSkillName(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::TextID(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_GETMAINSKILLNAME_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*>* LoadAll(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::HimekoNovaSpecialSkill::HimekoNovaSpecialSkillData*>*(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA_LOADALL_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ResolveAvatarIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIMEKONOVASPECIALSKILL_HIMEKONOVASPECIALSKILLDATA__RESOLVEAVATARIDS_OFFSET))(a1);
		}
	};
}
