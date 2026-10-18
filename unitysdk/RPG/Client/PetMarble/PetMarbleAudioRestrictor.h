#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PetMarble { class PetMarbleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEAUDIORESTRICTOR_CREATE_OFFSET UNITYSDK_OFFSET(0xDAD1210)
#define RPG_CLIENT_PETMARBLE_PETMARBLEAUDIORESTRICTOR_REQUIREPLAYAUDIO_OFFSET UNITYSDK_OFFSET(0xDAD12F0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEAUDIORESTRICTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xDAD1190)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleAudioRestrictor_TypeDefinitionIndex = 74722;

	class PetMarbleAudioRestrictor : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt64>* _LastPlayedAudioTimeStamp; // 0x10
		::System::UInt32 _LimitCooldownSeconds; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEAUDIORESTRICTOR__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::PetMarble::PetMarbleAudioRestrictor* Create()
		{
			return ((::RPG::Client::PetMarble::PetMarbleAudioRestrictor*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEAUDIORESTRICTOR_CREATE_OFFSET))();
		}

		::System::Boolean RequirePlayAudio(::RPG::Client::PetMarble::PetMarbleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEAUDIORESTRICTOR_REQUIREPLAYAUDIO_OFFSET))(this, a1);
		}
	};
}
