#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VideoCaptionPosition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VIDEOCAPTION_METHOD_2_9A0198C2ADB8ADF6_OFFSET UNITYSDK_OFFSET(0x190F32B0)
#define RPG_GAMECORE_VIDEOCAPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x190F3530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoCaption_TypeDefinitionIndex = 16099;

	class VideoCaption : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID CaptionTextID; // 0x10
		::RPG::GameCore::VideoCaptionPosition Position; // 0x20
		::System::Single StartTime; // 0x24
		::System::Single EndTime; // 0x28
		::System::Single EaseIn; // 0x2C
		::System::Single EaseOut; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCAPTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9A0198C2ADB8ADF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VideoCaption*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VideoCaption*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCAPTION_METHOD_2_9A0198C2ADB8ADF6_OFFSET))(a1, a2);
		}
	};
}
