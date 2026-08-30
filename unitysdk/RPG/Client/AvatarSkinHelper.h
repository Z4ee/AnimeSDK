#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_137AB23E3A00ECA1_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::Client { class IAvatarSkinData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARSKINHELPER_ADDAVATARSKINDATACACHE_OFFSET UNITYSDK_OFFSET(0xC843740)
#define RPG_CLIENT_AVATARSKINHELPER_CHECKSKINISNEW_OFFSET UNITYSDK_OFFSET(0xC844210)
#define RPG_CLIENT_AVATARSKINHELPER_CHECKSKINISOWNED_OFFSET UNITYSDK_OFFSET(0xC844070)
#define RPG_CLIENT_AVATARSKINHELPER_FILLNEWSKINIDSTO_OFFSET UNITYSDK_OFFSET(0xC844560)
#define RPG_CLIENT_AVATARSKINHELPER_GETORIGINSKIN_OFFSET UNITYSDK_OFFSET(0xC843E50)
#define RPG_CLIENT_AVATARSKINHELPER_GETOWNERAVATARPATHNAME_OFFSET UNITYSDK_OFFSET(0xC843EA0)
#define RPG_CLIENT_AVATARSKINHELPER_GETSKINBYSKINID_OFFSET UNITYSDK_OFFSET(0xC843C10)
#define RPG_CLIENT_AVATARSKINHELPER_GETSKIN_OFFSET UNITYSDK_OFFSET(0xC843D60)
#define RPG_CLIENT_AVATARSKINHELPER_MARKSKINHASSEEN_OFFSET UNITYSDK_OFFSET(0xC8443A0)
#define RPG_CLIENT_AVATARSKINHELPER_TRYGETAVATARSKINDATACACHE_OFFSET UNITYSDK_OFFSET(0xC843610)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkinHelper_TypeDefinitionIndex = 62724;

	class AvatarSkinHelper : public ::System::Object
	{
	public:
		static ::RPG::AvatarSystem::AvatarSkin* GetSkinBySkinID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_GETSKINBYSKINID_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::AvatarSkin* GetSkin(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_GETSKIN_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::AvatarSkin* GetOriginSkin(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_GETORIGINSKIN_OFFSET))(a1);
		}

		static ::RPG::Client::TextID GetOwnerAvatarPathName(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_GETOWNERAVATARPATHNAME_OFFSET))(a1);
		}

		static ::System::Boolean CheckSkinIsOwned(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_CHECKSKINISOWNED_OFFSET))(a1);
		}

		static ::System::Boolean CheckSkinIsNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_CHECKSKINISNEW_OFFSET))(a1);
		}

		static ::System::Void MarkSkinHasSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_MARKSKINHASSEEN_OFFSET))(a1);
		}

		static ::System::Void FillNewSkinIDsTo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_FILLNEWSKINIDSTO_OFFSET))(a1);
		}

		static ::System::Boolean TryGetAvatarSkinDataCache(::Struct_2_137AB23E3A00ECA1_1& a1, ::RPG::Client::IAvatarSkinData*& a2)
		{
			return ((::System::Boolean(*)(::Struct_2_137AB23E3A00ECA1_1&, ::RPG::Client::IAvatarSkinData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_TRYGETAVATARSKINDATACACHE_OFFSET))(a1, a2);
		}

		static ::System::Void AddAvatarSkinDataCache(::Struct_2_137AB23E3A00ECA1_1& a1, ::RPG::Client::IAvatarSkinData* a2)
		{
			return ((::System::Void(*)(::Struct_2_137AB23E3A00ECA1_1&, ::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_ADDAVATARSKINDATACACHE_OFFSET))(a1, a2);
		}
	};
}
