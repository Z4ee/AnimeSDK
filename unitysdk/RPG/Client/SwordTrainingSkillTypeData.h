#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingSkillData; }
namespace RPG::Client { class SwordTrainingUnlockData; }
namespace RPG::GameCore { class SwordTrainingSkillTypeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_CREATESKILLTREESEQUENCE_OFFSET UNITYSDK_OFFSET(0xB25C0F0)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB25D890)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB25C330)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_SKILLTYPEDESC_OFFSET UNITYSDK_OFFSET(0xB25E9E0)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_SKILLTYPEICON_OFFSET UNITYSDK_OFFSET(0xB25E970)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_SKILLTYPETAG_OFFSET UNITYSDK_OFFSET(0xB25EA60)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_SKILLTYPETITLE_OFFSET UNITYSDK_OFFSET(0xB25E8F0)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_STATUSID_OFFSET UNITYSDK_OFFSET(0xB25EAE0)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB25DAC0)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA__BUILDTREESEQUENCE_OFFSET UNITYSDK_OFFSET(0xB25DE10)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB25DAB0)
#define RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA__FINDSKILLTREEROOT_OFFSET UNITYSDK_OFFSET(0xB25DB80)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillTypeData_TypeDefinitionIndex = 57170;

	class SwordTrainingSkillTypeData : public ::System::Object
	{
	public:
		::RPG::Client::SwordTrainingUnlockData* UnlockData; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingSkillData*>*>* SkillTreeSequence; // 0x18
		::System::UInt32 SkillTypeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingSkillTypeData* Create(::System::UInt32 skillTypeID)
		{
			return ((::RPG::Client::SwordTrainingSkillTypeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_CREATE_OFFSET))(skillTypeID);
		}

		::System::Void CreateSkillTreeSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_CREATESKILLTREESEQUENCE_OFFSET))(this);
		}

		::System::UInt32 _FindSkillTreeRoot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA__FINDSKILLTREEROOT_OFFSET))(this);
		}

		::System::Void _BuildTreeSequence(::System::UInt32 rootSkillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA__BUILDTREESEQUENCE_OFFSET))(this, rootSkillID);
		}

		::RPG::Client::TextID get_SkillTypeTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_SKILLTYPETITLE_OFFSET))(this);
		}

		::System::String* get_SkillTypeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_SKILLTYPEICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillTypeDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_SKILLTYPEDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillTypeTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_SKILLTYPETAG_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_StatusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET_STATUSID_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingSkillTypeRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingSkillTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLTYPEDATA_GET__ROW_OFFSET))(this);
		}
	};
}
