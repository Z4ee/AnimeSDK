#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VIDEOSEQUENCEITEM_METHOD_2_6AA7D88FD7BB9E64_OFFSET UNITYSDK_OFFSET(0x1D69AED0)
#define RPG_GAMECORE_VIDEOSEQUENCEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoSequenceItem_TypeDefinitionIndex = 16823;

	class VideoSequenceItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 VideoID; // 0x10
		::System::Boolean IsLoop; // 0x14
		::System::String* DefaultTexturePath; // 0x18
		::System::String* SoundEvent; // 0x20
		::System::UInt32 VoiceID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOSEQUENCEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6AA7D88FD7BB9E64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VideoSequenceItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VideoSequenceItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOSEQUENCEITEM_METHOD_2_6AA7D88FD7BB9E64_OFFSET))(a1, a2);
		}
	};
}
