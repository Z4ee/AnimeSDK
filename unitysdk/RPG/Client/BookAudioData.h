#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AudioBookDataRow; }
namespace System { class String; }

#define RPG_CLIENT_BOOKAUDIODATA_GET_AUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x91F4AF0)
#define RPG_CLIENT_BOOKAUDIODATA_GET_HASAUDIO_OFFSET UNITYSDK_OFFSET(0x91F4AE0)
#define RPG_CLIENT_BOOKAUDIODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91F4690)

namespace RPG::Client
{
	inline static constexpr unsigned int BookAudioData_TypeDefinitionIndex = 53993;

	class BookAudioData : public ::System::Object
	{
	public:
		::RPG::GameCore::AudioBookDataRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 bookID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKAUDIODATA__CTOR_OFFSET))(this, bookID);
		}

		::System::Boolean get_HasAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKAUDIODATA_GET_HASAUDIO_OFFSET))(this);
		}

		::System::String* get_AudioEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKAUDIODATA_GET_AUDIOEVENT_OFFSET))(this);
		}
	};
}
