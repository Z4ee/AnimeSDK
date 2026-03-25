#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class FrameInfo; }

#define RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x9AC5DB0)
#define RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9AC5EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPlayerFrameInfo_TypeDefinitionIndex = 60008;

	class ManaVideoPlayerFrameInfo : public ::System::Object
	{
	public:
		::System::Single FullTime; // 0x10
		::System::UInt32 FullFrame; // 0x14
		::System::Int32 Frame; // 0x18
		::System::Single Time; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO__CTOR_OFFSET))(this);
		}

		::System::Void UpdateInfo(::CriWare::CriMana::FrameInfo* frameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::FrameInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPLAYERFRAMEINFO_UPDATEINFO_OFFSET))(this, frameInfo);
		}
	};
}
