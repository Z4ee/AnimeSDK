#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"

namespace System { class Object; }

#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC32C6A0)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_START_OFFSET UNITYSDK_OFFSET(0xC32C750)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_STOP_OFFSET UNITYSDK_OFFSET(0xC32C7F0)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_UPLOADAVATARGROWTH_OFFSET UNITYSDK_OFFSET(0xC32C8E0)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xC32CBB0)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__DOUPLOADAVATARGROWTH_OFFSET UNITYSDK_OFFSET(0xC32C940)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__ONAVATARSYNC_OFFSET UNITYSDK_OFFSET(0xC32C890)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatAvatarGrowthUploadService_TypeDefinitionIndex = 59211;

	class PamChatAvatarGrowthUploadService : public ::Class_1_5E4ED920015DC82D
	{
	public:
		::System::Boolean _AvatarGrowthDirty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PamChatAvatarGrowthUploadService* get_Instance()
		{
			return ((::RPG::Client::PamChatAvatarGrowthUploadService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_STOP_OFFSET))(this);
		}

		::System::Void _OnAvatarSync(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__ONAVATARSYNC_OFFSET))(this, a1);
		}

		::System::Void UploadAvatarGrowth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_UPLOADAVATARGROWTH_OFFSET))(this);
		}

		::System::Void _DoUploadAvatarGrowth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__DOUPLOADAVATARGROWTH_OFFSET))(this);
		}
	};
}
