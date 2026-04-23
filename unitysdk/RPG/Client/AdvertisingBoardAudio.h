#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class AdvertisingBoardConfigRow; }

#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x9CCC170)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x9CCBF00)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9CCBDD0)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x9CCC0E0)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x9CCC030)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_MUTEAUDIO_OFFSET UNITYSDK_OFFSET(0x9CCBC90)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9CCBFE0)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9CCBEB0)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9CCBD70)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x9CCC240)

namespace RPG::Client
{
	inline static constexpr unsigned int AdvertisingBoardAudio_TypeDefinitionIndex = 62984;

	class AdvertisingBoardAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 BoardID; // 0x18
		::RPG::GameCore::AdvertisingBoardConfigRow* Field_5_1; // 0x20
		::System::Single Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x2C
		::System::Single Field_5_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO__CTOR_OFFSET))(this);
		}

		static ::System::Boolean MuteAudio()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_MUTEAUDIO_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_AD23FDCC7576BB32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_AD23FDCC7576BB32_OFFSET))(this, a1);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_0865E94460F11643_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_METHOD_5_33ACA6CB2ABC73F7_1_OFFSET))(this);
		}
	};
}
