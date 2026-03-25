#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMagicStyleTypeSelectRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA331D00)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA331C90)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA331D90)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA331760)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA331B30)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA3319E0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA3319C0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xA331E50)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA3319D0)
#define RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA331390)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStyleTypeInfo_TypeDefinitionIndex = 54953;

	class RogueMagicStyleTypeInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMagicStyleTypeSelectRow* _Row; // 0x10
		::RPG::Client::TextID _CommonTypeNameTextID; // 0x18
		::RPG::Client::TextID _Name; // 0x28
		::RPG::GameCore::RogueMagicStyleType _Type_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::RogueMagicStyleType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO__CTOR_OFFSET))(this, type);
		}

		::RPG::GameCore::RogueMagicStyleType get_Type()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::RogueMagicStyleType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTYLETYPEINFO_SET_TYPE_OFFSET))(this, value);
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
