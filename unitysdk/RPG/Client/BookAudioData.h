#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AudioBookDataRow; }
namespace System { class String; }

#define RPG_CLIENT_BOOKAUDIODATA_GET_AUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x1BD92AE0)
#define RPG_CLIENT_BOOKAUDIODATA_GET_HASAUDIO_OFFSET UNITYSDK_OFFSET(0x1BD92A90)
#define RPG_CLIENT_BOOKAUDIODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD92530)

namespace RPG::Client
{
	inline static constexpr unsigned int BookAudioData_TypeDefinitionIndex = 66413;

	class BookAudioData : public ::System::Object
	{
	public:
		::RPG::GameCore::AudioBookDataRow* _Row; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKAUDIODATA__CTOR_OFFSET))(this, a1);
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
