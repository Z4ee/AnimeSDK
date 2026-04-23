#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_357673ADDEE88E8E.h"

namespace System { class Object; }

#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xAC1CD40)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_START_OFFSET UNITYSDK_OFFSET(0xAC1CDF0)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_STOP_OFFSET UNITYSDK_OFFSET(0xAC1CE60)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE_UPLOADAVATARGROWTH_OFFSET UNITYSDK_OFFSET(0xAC1CF30)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1D4B0)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__DOUPLOADAVATARGROWTH_OFFSET UNITYSDK_OFFSET(0xAC1CF90)
#define RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__ONAVATARSYNC_OFFSET UNITYSDK_OFFSET(0xAC1CEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatAvatarGrowthUploadService_TypeDefinitionIndex = 58281;

	class PamChatAvatarGrowthUploadService : public ::Class_1_357673ADDEE88E8E
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

		::System::Void _OnAvatarSync(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATAVATARGROWTHUPLOADSERVICE__ONAVATARSYNC_OFFSET))(this, arg);
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
