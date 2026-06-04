#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMagicStyleTypeSelectRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC7B6480)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC7B6410)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC7B6520)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC7B5F20)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC7B6350)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC7B6200)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC7B61E0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xC7B65E0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC7B61F0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC7B5AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStyleTypeInfo_TypeDefinitionIndex = 63074;

	class RogueMagicStyleTypeInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMagicStyleTypeSelectRow* _Row; // 0x10
		::RPG::GameCore::RogueMagicStyleType _Type_k__BackingField; // 0x18
		::RPG::Client::TextID _Name; // 0x20
		::RPG::Client::TextID _CommonTypeNameTextID; // 0x30

		::System::Void _ctor(::RPG::GameCore::RogueMagicStyleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicStyleType get_Type()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::RogueMagicStyleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_SET_TYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMagicStyleTypeSelectRow* get_Row()
		{
			return ((::RPG::GameCore::RogueMagicStyleTypeSelectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_DESC_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISUNLOCK_OFFSET))(this);
		}
	};
}
