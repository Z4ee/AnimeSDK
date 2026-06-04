#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_980725853FAC52A9.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_AVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB391DD0)
#define RPG_CLIENT_AVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xB391CF0)
#define RPG_CLIENT_AVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB391A30)
#define RPG_CLIENT_AVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xB391B50)
#define RPG_CLIENT_AVATARPROXY_SETSOURCE_OFFSET UNITYSDK_OFFSET(0xB391C60)
#define RPG_CLIENT_AVATARPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xB391C00)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarProxy_TypeDefinitionIndex = 58672;

	class AvatarProxy : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Source; // 0x10
		::Struct_2_980725853FAC52A9 _InstanceIdentifier; // 0x18

		::System::Void _ctor(::Struct_2_980725853FAC52A9& a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_980725853FAC52A9&, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY__CTOR_OFFSET))(this, a1, a2);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_GET_VERSION_OFFSET))(this);
		}

		::System::Void SetSource(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_SETSOURCE_OFFSET))(this, a1);
		}

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_360* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
