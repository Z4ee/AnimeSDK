#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETDESC_OFFSET UNITYSDK_OFFSET(0x1AE41C50)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETIMGICON_OFFSET UNITYSDK_OFFSET(0x1AE41950)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETNAME_OFFSET UNITYSDK_OFFSET(0x1AE41AF0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETRARITYBG_OFFSET UNITYSDK_OFFSET(0x1AE41A80)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x1AE41A10)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1AE41DB0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1AE41CF0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AE406B0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1AE41DC0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE407A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitSourceAvatar_TypeDefinitionIndex = 64074;

	class FateTraitSourceAvatar : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x18
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x20
		::System::UInt32 _AvatarID_k__BackingField; // 0x28
		::RPG::Client::TextID _AvatarTipDesc; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TextID a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::RPG::Client::FateBuffTraitInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

		static ::System::Boolean IsUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_ISUNLOCK_OFFSET))(a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_SET_AVATARID_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_AvatarData()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARDATA_OFFSET))(this);
		}
	};
}
