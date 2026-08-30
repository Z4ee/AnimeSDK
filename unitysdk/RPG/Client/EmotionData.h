#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_EMOTIONDATA_GET_EMOTIONCLIPPATH_OFFSET UNITYSDK_OFFSET(0xCE9B1D0)
#define RPG_CLIENT_EMOTIONDATA_GET_EMOTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xCE9B1B0)
#define RPG_CLIENT_EMOTIONDATA_GET_EMOTIONID_OFFSET UNITYSDK_OFFSET(0xCE9B170)
#define RPG_CLIENT_EMOTIONDATA_GET_EMOTIONNAME_OFFSET UNITYSDK_OFFSET(0xCE9B190)
#define RPG_CLIENT_EMOTIONDATA_SET_EMOTIONCLIPPATH_OFFSET UNITYSDK_OFFSET(0xCE9B1E0)
#define RPG_CLIENT_EMOTIONDATA_SET_EMOTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xCE9B1C0)
#define RPG_CLIENT_EMOTIONDATA_SET_EMOTIONID_OFFSET UNITYSDK_OFFSET(0xCE9B180)
#define RPG_CLIENT_EMOTIONDATA_SET_EMOTIONNAME_OFFSET UNITYSDK_OFFSET(0xCE9B1A0)
#define RPG_CLIENT_EMOTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE9B1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmotionData_TypeDefinitionIndex = 69383;

	class EmotionData : public ::System::Object
	{
	public:
		::System::String* _EmotionClipPath_k__BackingField; // 0x10
		::System::String* _EmotionIconPath_k__BackingField; // 0x18
		::RPG::Client::TextID _EmotionName_k__BackingField; // 0x20
		::RPG::GameCore::EmotionID _EmotionID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EmotionID get_EmotionID()
		{
			return ((::RPG::GameCore::EmotionID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONDATA_GET_EMOTIONID_OFFSET))(this);
		}

		::System::Void set_EmotionID(::RPG::GameCore::EmotionID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EmotionID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONDATA_SET_EMOTIONID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EmotionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONDATA_GET_EMOTIONNAME_OFFSET))(this);
		}

		::System::Void set_EmotionName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONDATA_SET_EMOTIONNAME_OFFSET))(this, a1);
		}

		::System::String* get_EmotionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONDATA_GET_EMOTIONICONPATH_OFFSET))(this);
		}

		::System::Void set_EmotionIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONDATA_SET_EMOTIONICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_EmotionClipPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONDATA_GET_EMOTIONCLIPPATH_OFFSET))(this);
		}

		::System::Void set_EmotionClipPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONDATA_SET_EMOTIONCLIPPATH_OFFSET))(this, a1);
		}
	};
}
