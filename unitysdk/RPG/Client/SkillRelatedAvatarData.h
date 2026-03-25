#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class AvatarServantSkillLinkRow; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace System { class String; }

#define RPG_CLIENT_SKILLRELATEDAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA49CE80)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATARCARDCENTER_OFFSET UNITYSDK_OFFSET(0xA49D1A0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATARICONSIDE_OFFSET UNITYSDK_OFFSET(0xA49D290)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xA49D470)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA49D490)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xA49D4B0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xA49D430)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_RELATEDAVATARID_OFFSET UNITYSDK_OFFSET(0xA49D110)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xA49D450)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA49D410)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLESKILLDESC_OFFSET UNITYSDK_OFFSET(0xA49D3E0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xA49D380)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xA49D180)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xA49D3B0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xA49D480)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA49D4A0)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xA49D190)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA49CF30)
#define RPG_CLIENT_SKILLRELATEDAVATARDATA__INIT_OFFSET UNITYSDK_OFFSET(0xA49CF60)

namespace RPG::Client
{
	inline static constexpr unsigned int SkillRelatedAvatarData_TypeDefinitionIndex = 50771;

	class SkillRelatedAvatarData : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _Avatar_k__BackingField; // 0x10
		::RPG::GameCore::AvatarServantSkillRow* _SkillRow; // 0x18
		::RPG::GameCore::AvatarServantSkillLinkRow* _Meta; // 0x20
		::System::Boolean _IsUnlocked_k__BackingField; // 0x28
		::System::UInt32 _SkillID_k__BackingField; // 0x2C
		::System::UInt32 _Level; // 0x30

		::System::Void _ctor(::RPG::GameCore::AvatarServantSkillLinkRow* row, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillLinkRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA__CTOR_OFFSET))(this, row, level);
		}

		static ::RPG::Client::SkillRelatedAvatarData* Create(::RPG::GameCore::AvatarServantSkillLinkRow* row, ::System::UInt32 level)
		{
			return ((::RPG::Client::SkillRelatedAvatarData*(*)(::RPG::GameCore::AvatarServantSkillLinkRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_CREATE_OFFSET))(row, level);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA__INIT_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_SKILLID_OFFSET))(this, value);
		}

		::System::UInt32 get_RelatedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_RELATEDAVATARID_OFFSET))(this);
		}

		::System::String* get_AvatarCardCenter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATARCARDCENTER_OFFSET))(this);
		}

		::System::String* get_AvatarIconSide()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATARICONSIDE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SKILLNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SimpleSkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLESKILLDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLEPARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SimpleExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* get_Avatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::Client::IAvatarInfoProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_AVATAR_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKILLRELATEDAVATARDATA_GET_ORDER_OFFSET))(this);
		}
	};
}
