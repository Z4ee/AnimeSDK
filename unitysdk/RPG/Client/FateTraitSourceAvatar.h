#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETDESC_OFFSET UNITYSDK_OFFSET(0x96A8D40)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETIMGICON_OFFSET UNITYSDK_OFFSET(0x96A8B10)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETNAME_OFFSET UNITYSDK_OFFSET(0x96A8CB0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETRARITYBG_OFFSET UNITYSDK_OFFSET(0x96A8C40)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x96A8B80)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x96A8EB0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x96A8DF0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x96A7E60)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x96A8EC0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x96A7F50)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitSourceAvatar_TypeDefinitionIndex = 51929;

	class FateTraitSourceAvatar : public ::System::Object
	{
	public:
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x18
		::RPG::Client::IAvatarInfoProvider* _AvatarData; // 0x20
		::System::UInt32 _AvatarID_k__BackingField; // 0x28
		::RPG::Client::TextID _AvatarTipDesc; // 0x30

		::System::Void _ctor(::System::UInt32 avatarId, ::RPG::Client::TextID desc, ::Il2CppArray<::RPG::GameCore::FixPoint>* descParamList, ::RPG::Client::FateBuffTraitInfo* belongTraitInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR__CTOR_OFFSET))(this, avatarId, desc, descParamList, belongTraitInfo);
		}

		::System::String* GetImgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETIMGICON_OFFSET))(this);
		}

		::System::String* GetRarityBg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETRARITYBG_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETNAME_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETDESC_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_ISACTIVE_OFFSET))(this);
		}

		static ::System::Boolean IsUnlock(::System::UInt32 difficulty)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_ISUNLOCK_OFFSET))(difficulty);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_SET_AVATARID_OFFSET))(this, value);
		}

		::RPG::Client::IAvatarInfoProvider* get_AvatarData()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARDATA_OFFSET))(this);
		}
	};
}
