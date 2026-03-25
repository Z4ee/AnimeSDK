#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_AVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91546D0)
#define RPG_CLIENT_AVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x91545E0)
#define RPG_CLIENT_AVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9154390)
#define RPG_CLIENT_AVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9154450)
#define RPG_CLIENT_AVATARPROXY_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x9154550)
#define RPG_CLIENT_AVATARPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x9154500)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarProxy_TypeDefinitionIndex = 50940;

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

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_341* builder)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_EXPORTPROFILE_OFFSET))(this, builder);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
