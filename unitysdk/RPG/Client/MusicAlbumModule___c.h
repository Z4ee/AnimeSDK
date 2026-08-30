#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicAlbumGroupData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICALBUMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD909DA0)
#define RPG_CLIENT_MUSICALBUMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD909DE0)
#define RPG_CLIENT_MUSICALBUMMODULE___C__GETUNLOCKMUSICALBUMGROUPDATAS_B__11_0_OFFSET UNITYSDK_OFFSET(0xD909DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicAlbumModule___c_TypeDefinitionIndex = 66401;

	class MusicAlbumModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MusicAlbumGroupData*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicAlbumGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(MusicAlbumModule___c_TypeDefinitionIndex)->GetStaticField(0x21EA0);
		}
		static ::RPG::Client::MusicAlbumModule___c** StaticGet___9()
		{
			return (::RPG::Client::MusicAlbumModule___c**)Il2CppClass::FromTypeDefinitionIndex(MusicAlbumModule___c_TypeDefinitionIndex)->GetStaticField(0x21EA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetUnlockMusicAlbumGroupDatas_b__11_0(::RPG::Client::MusicAlbumGroupData* a1, ::RPG::Client::MusicAlbumGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicAlbumGroupData*, ::RPG::Client::MusicAlbumGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICALBUMMODULE___C__GETUNLOCKMUSICALBUMGROUPDATAS_B__11_0_OFFSET))(this, a1, a2);
		}
	};
}
