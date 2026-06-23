#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class Object; }

#define MOLEMOLE_AUDIO_SOUNDSUBSCRIPTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C49750)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int SoundSubScriptBase_TypeDefinitionIndex = 71412;

	class SoundSubScriptBase : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SOUNDSUBSCRIPTBASE__CTOR_OFFSET))(this);
		}
	};
}
