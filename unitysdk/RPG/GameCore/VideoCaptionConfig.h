#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VideoCaption; }

#define RPG_GAMECORE_VIDEOCAPTIONCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178EFA30)
#define RPG_GAMECORE_VIDEOCAPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178EFB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoCaptionConfig_TypeDefinitionIndex = 15580;

	class VideoCaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::VideoCaption*>* CaptionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCAPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::VideoCaptionConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VideoCaptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOCAPTIONCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
