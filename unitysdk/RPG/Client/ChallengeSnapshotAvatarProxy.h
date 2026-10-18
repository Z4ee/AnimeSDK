#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9789626E6BA2AAC1.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_506;
class Class_0_16E4307DCC419505_861;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9B44A0)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xC9B4430)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC9B4300)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xC9B41D0)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xC9B4210)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xC9B4380)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xC9B4390)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xC9B43A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeSnapshotAvatarProxy_TypeDefinitionIndex = 62545;

	class ChallengeSnapshotAvatarProxy : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_861* _Refresher; // 0x10
		::Struct_2_9789626E6BA2AAC1 _Entry; // 0x18
		::System::UInt32 _Version_k__BackingField; // 0x40

		::System::Void _ctor(::Struct_2_9789626E6BA2AAC1& a1, ::Class_0_16E4307DCC419505_861* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9789626E6BA2AAC1&, ::Class_0_16E4307DCC419505_861*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* get_Origin()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_ORIGIN_OFFSET))(this);
		}

		::RPG::AvatarSystem::Avatar* get_Upgrade()
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_UPGRADE_OFFSET))(this);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_506* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_506*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
