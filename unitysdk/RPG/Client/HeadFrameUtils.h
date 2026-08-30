#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HeadFrameInfo; }
namespace System { class String; }

#define RPG_CLIENT_HEADFRAMEUTILS_GETHEADFRAMEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xD3B0EC0)
#define RPG_CLIENT_HEADFRAMEUTILS_GETPLAYERHEADFRAMEINFOIFDISPLAY_OFFSET UNITYSDK_OFFSET(0xD3B0D60)
#define RPG_CLIENT_HEADFRAMEUTILS_GET_HASHEADFRAME_OFFSET UNITYSDK_OFFSET(0xD3B0CC0)
#define RPG_CLIENT_HEADFRAMEUTILS_GET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0xD3B0C20)
#define RPG_CLIENT_HEADFRAMEUTILS_SWITCHDISPLAYSTATE_OFFSET UNITYSDK_OFFSET(0xD3B0E10)

namespace RPG::Client
{
	inline static constexpr unsigned int HeadFrameUtils_TypeDefinitionIndex = 65712;

	class HeadFrameUtils : public ::System::Object
	{
	public:
		static ::System::Boolean get_IsDisplayHeadFrame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEUTILS_GET_ISDISPLAYHEADFRAME_OFFSET))();
		}

		static ::System::Boolean get_HasHeadFrame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEUTILS_GET_HASHEADFRAME_OFFSET))();
		}

		static ::RPG::Client::HeadFrameInfo* GetPlayerHeadFrameInfoIfDisplay()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEUTILS_GETPLAYERHEADFRAMEINFOIFDISPLAY_OFFSET))();
		}

		static ::System::Void SwitchDisplayState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEUTILS_SWITCHDISPLAYSTATE_OFFSET))();
		}

		static ::System::String* GetHeadFramePrefabPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEADFRAMEUTILS_GETHEADFRAMEPREFABPATH_OFFSET))(a1);
		}
	};
}
