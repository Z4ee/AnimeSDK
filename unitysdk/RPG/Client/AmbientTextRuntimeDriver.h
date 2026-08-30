#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LocalizedTextSDF; }

#define RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_PLAYHIDE_1_OFFSET UNITYSDK_OFFSET(0xC75C630)
#define RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_PLAYHIDE_OFFSET UNITYSDK_OFFSET(0xC75C5B0)
#define RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_PLAYSHOW_1_OFFSET UNITYSDK_OFFSET(0xC75C520)
#define RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_PLAYSHOW_OFFSET UNITYSDK_OFFSET(0xC75C4D0)
#define RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_SETSPEED_OFFSET UNITYSDK_OFFSET(0xC75C6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AmbientTextRuntimeDriver_TypeDefinitionIndex = 72857;

	class AmbientTextRuntimeDriver : public ::System::Object
	{
	public:
		static ::System::Void PlayShow(::RPG::Client::LocalizedTextSDF* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_PLAYSHOW_OFFSET))(a1, a2);
		}

		static ::System::Void PlayShow_1(::RPG::Client::LocalizedTextSDF* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_PLAYSHOW_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PlayHide(::RPG::Client::LocalizedTextSDF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_PLAYHIDE_OFFSET))(a1, a2);
		}

		static ::System::Void PlayHide_1(::RPG::Client::LocalizedTextSDF* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_PLAYHIDE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetSpeed(::RPG::Client::LocalizedTextSDF* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::Client::LocalizedTextSDF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AMBIENTTEXTRUNTIMEDRIVER_SETSPEED_OFFSET))(a1, a2);
		}
	};
}
