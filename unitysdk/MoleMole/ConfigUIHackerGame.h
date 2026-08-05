#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUIHACKERGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A004640)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIHackerGame_TypeDefinitionIndex = 65698;

	class ConfigUIHackerGame : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single enterFlickerInterval; // 0x58
		::System::Single enterFlickerStartDelay; // 0x5C
		::System::Single rotationDuration; // 0x60
		::System::Single endAnimDuration; // 0x64
		::System::Single endAnimDuration2; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DifficultyToTutorialGroup; // 0x70
		::System::String* RefreshUISoundKey; // 0x78
		::System::String* EnterNormalPointSoundKey; // 0x80
		::System::String* EnterWhirlPointSoundKey; // 0x88
		::System::String* EnterProtocolPointSoundKey; // 0x90
		::System::String* ExitWhirlPointSoundKey; // 0x98
		::System::String* ExitNormalPointSoundKey; // 0xA0
		::System::String* IllegalActionSoundKey; // 0xA8
		::System::String* SuccessSoundKey; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIHACKERGAME__CTOR_OFFSET))(this);
		}
	};
}
