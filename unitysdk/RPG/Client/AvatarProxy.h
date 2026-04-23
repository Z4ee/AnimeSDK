#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_348;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_AVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DB5FA0)
#define RPG_CLIENT_AVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x9DB5EB0)
#define RPG_CLIENT_AVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9DB5C60)
#define RPG_CLIENT_AVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9DB5D20)
#define RPG_CLIENT_AVATARPROXY_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x9DB5E20)
#define RPG_CLIENT_AVATARPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB5DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarProxy_TypeDefinitionIndex = 57821;

	class AvatarProxy : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Source; // 0x10

		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* source)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY__CTOR_OFFSET))(this, source);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_GET_VERSION_OFFSET))(this);
		}

		::System::Void SetSource(::RPG::AvatarSystem::IAvatar* source)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_SETSOURCE_OFFSET))(this, source);
		}

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_348* builder)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_348*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_EXPORTPROFILE_OFFSET))(this, builder);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
