#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicAlbumGroupData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICALBUMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E8A030)
#define RPG_CLIENT_MUSICALBUMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8A070)
#define RPG_CLIENT_MUSICALBUMMODULE___C__GETUNLOCKMUSICALBUMGROUPDATAS_B__11_0_OFFSET UNITYSDK_OFFSET(0x18E8A080)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicAlbumModule___c_TypeDefinitionIndex = 63416;

	class MusicAlbumModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MusicAlbumGroupData*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicAlbumGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(MusicAlbumModule___c_TypeDefinitionIndex)->GetStaticField(0x5E6E0);
		}
		static ::RPG::Client::MusicAlbumModule___c** StaticGet___9()
		{
			return (::RPG::Client::MusicAlbumModule___c**)Il2CppClass::FromTypeDefinitionIndex(MusicAlbumModule___c_TypeDefinitionIndex)->GetStaticField(0x5E6E8);
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
