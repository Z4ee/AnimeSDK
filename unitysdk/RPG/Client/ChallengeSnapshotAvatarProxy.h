#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9789626E6BA2AAC1.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_506;
class Class_0_16E4307DCC419505_861;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9BC1F0)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xC9BC180)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC9BC050)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xC9BBF20)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xC9BBF60)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xC9BC0D0)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xC9BC0E0)
#define RPG_CLIENT_CHALLENGESNAPSHOTAVATARPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xC9BC0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeSnapshotAvatarProxy_TypeDefinitionIndex = 62545;

	class ChallengeSnapshotAvatarProxy : public ::System::Object
	{
	public:
		::Struct_2_9789626E6BA2AAC1 _Entry; // 0x10
		::Class_0_16E4307DCC419505_861* _Refresher; // 0x38
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
