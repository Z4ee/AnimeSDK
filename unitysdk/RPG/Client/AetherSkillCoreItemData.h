#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_EBB10EC01CCC4716_12;
namespace RPG::GameCore { class AetherDividePassiveSkillRow; }
namespace RPG::GameCore { class AetherPassiveSkillTypeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x19E03E50)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0x19E044C0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_BELONGAETHERMONSTERAVATARID_OFFSET UNITYSDK_OFFSET(0x19E04640)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x19E04620)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PARAMARRAY_OFFSET UNITYSDK_OFFSET(0x19E04410)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLDESC_OFFSET UNITYSDK_OFFSET(0x19E042B0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLNAME_OFFSET UNITYSDK_OFFSET(0x19E04150)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_PASSIVESKILLTYPE_OFFSET UNITYSDK_OFFSET(0x19E04010)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPARAMARRAY_OFFSET UNITYSDK_OFFSET(0x19E04360)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SIMPLEPASSIVESKILLDESC_OFFSET UNITYSDK_OFFSET(0x19E04200)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLICONPATH_OFFSET UNITYSDK_OFFSET(0x19E040C0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLITEMROW_OFFSET UNITYSDK_OFFSET(0x19E03F20)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLRARITY_OFFSET UNITYSDK_OFFSET(0x19E04570)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_SKILLTYPEROW_OFFSET UNITYSDK_OFFSET(0x19E03F90)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SETISNEW_OFFSET UNITYSDK_OFFSET(0x19E03EB0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_BELONGAETHERMONSTERAVATARID_OFFSET UNITYSDK_OFFSET(0x19E04650)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x19E04630)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x19E03D60)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E03CD0)
#define RPG_CLIENT_AETHERSKILLCOREITEMDATA__UPDATEPROPERTYMODIFERDICT_OFFSET UNITYSDK_OFFSET(0x19E03E10)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherSkillCoreItemData_TypeDefinitionIndex = 65741;

	class AetherSkillCoreItemData : public ::RPG::Client::ItemData
	{
	public:
		::RPG::GameCore::AetherPassiveSkillTypeRow* _SkillTypeRow; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* PropertyDataDict; // 0x48
		::RPG::GameCore::AetherDividePassiveSkillRow* _SkillItemRow; // 0x50
		::System::Boolean _IsProtected_k__BackingField; // 0x58
		::System::UInt32 _BelongAetherMonsterAvatarID_k__BackingField; // 0x5C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_EBB10EC01CCC4716_12* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GETPROPERTYVALUE_OFFSET))(this, a1);
		}

		::System::Void SetIsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SETISNEW_OFFSET))(this, a1);
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

		::System::Void set_IsProtected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_ISPROTECTED_OFFSET))(this, a1);
		}

		::System::UInt32 get_BelongAetherMonsterAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_GET_BELONGAETHERMONSTERAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAetherMonsterAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERSKILLCOREITEMDATA_SET_BELONGAETHERMONSTERAVATARID_OFFSET))(this, a1);
		}
	};
}
