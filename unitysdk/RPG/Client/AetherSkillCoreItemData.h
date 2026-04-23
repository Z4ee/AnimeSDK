#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_EBB10EC01CCC4716_21;
namespace RPG::GameCore { class AetherDividePassiveSkillRow; }
namespace RPG::GameCore { class AetherPassiveSkillTypeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x9CDDB10)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0x9CDE070)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_BELONGAETHERMONSTERAVATARID_OFFSET UNITYSDK_OFFSET(0x9CDE190)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x9CDE170)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PARAMARRAY_OFFSET UNITYSDK_OFFSET(0x9CDDFF0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLDESC_OFFSET UNITYSDK_OFFSET(0x9CDDEF0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLNAME_OFFSET UNITYSDK_OFFSET(0x9CDDDF0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x9CDDCD0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPARAMARRAY_OFFSET UNITYSDK_OFFSET(0x9CDDF70)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPASSIVESKILLDESC_OFFSET UNITYSDK_OFFSET(0x9CDDE70)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLICONPATH_OFFSET UNITYSDK_OFFSET(0x9CDDD50)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLITEMROW_OFFSET UNITYSDK_OFFSET(0x9CDDBE0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLRARITY_OFFSET UNITYSDK_OFFSET(0x9CDE0F0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLTYPEROW_OFFSET UNITYSDK_OFFSET(0x9CDDC50)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SETISNEW_OFFSET UNITYSDK_OFFSET(0x9CDDB70)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_BELONGAETHERMONSTERAVATARID_OFFSET UNITYSDK_OFFSET(0x9CDE1A0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x9CDE180)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9CDDA20)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9CDD990)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA__UPDATEPROPERTYMODIFERDICT_OFFSET UNITYSDK_OFFSET(0x9CDDAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherSkillCoreItemData_TypeDefinitionIndex = 60476;

	class AetherSkillCoreItemData : public ::RPG::Client::ItemData
	{
	public:
		::RPG::GameCore::AetherDividePassiveSkillRow* _SkillItemRow; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* PropertyDataDict; // 0x48
		::RPG::GameCore::AetherPassiveSkillTypeRow* _SkillTypeRow; // 0x50
		::System::UInt32 _BelongAetherMonsterAvatarID_k__BackingField; // 0x58
		::System::Boolean _IsProtected_k__BackingField; // 0x5C

		::System::Void _ctor(::System::UInt32 configID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA__CTOR_OFFSET))(this, configID);
		}

		::System::Void Sync(::Class_1_EBB10EC01CCC4716_21* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SYNC_OFFSET))(this, item);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::AvatarPropertyType type)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GETPROPERTYVALUE_OFFSET))(this, type);
		}

		::System::Void SetIsNew(::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SETISNEW_OFFSET))(this, isNew);
		}

		::System::Void _UpdatePropertyModiferDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA__UPDATEPROPERTYMODIFERDICT_OFFSET))(this);
		}

		::RPG::GameCore::AetherDividePassiveSkillRow* get_SkillItemRow()
		{
			return ((::RPG::GameCore::AetherDividePassiveSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLITEMROW_OFFSET))(this);
		}

		::RPG::GameCore::AetherPassiveSkillTypeRow* get_SkillTypeRow()
		{
			return ((::RPG::GameCore::AetherPassiveSkillTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLTYPEROW_OFFSET))(this);
		}

		::System::String* get_SkillIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLICONPATH_OFFSET))(this);
		}

		::System::String* get_PassiveSkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLNAME_OFFSET))(this);
		}

		::System::String* get_SimplePassiveSkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPASSIVESKILLDESC_OFFSET))(this);
		}

		::System::String* get_PassiveSkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPARAMARRAY_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamArray()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PARAMARRAY_OFFSET))(this);
		}

		::System::String* get_AbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ABILITYNAME_OFFSET))(this);
		}

		::RPG::GameCore::AetherPassiveSkillType get_PassiveSkillType()
		{
			return ((::RPG::GameCore::AetherPassiveSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLTYPE_OFFSET))(this);
		}

		::System::UInt32 get_SkillRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLRARITY_OFFSET))(this);
		}

		::System::Boolean get_IsProtected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ISPROTECTED_OFFSET))(this);
		}

		::System::Void set_IsProtected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_ISPROTECTED_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongAetherMonsterAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_BELONGAETHERMONSTERAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAetherMonsterAvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_BELONGAETHERMONSTERAVATARID_OFFSET))(this, value);
		}
	};
}
