#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class GeneralAudioItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_GAMEOBJECTAUDIO_DODISABLE_OFFSET UNITYSDK_OFFSET(0x192D4A20)
#define RPG_CLIENT_GAMEOBJECTAUDIO_DOENABLE_OFFSET UNITYSDK_OFFSET(0x192D48F0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_211942F2A3D74CCB_OFFSET UNITYSDK_OFFSET(0x192D5010)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x192D4A70)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x192D4940)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x192D5120)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x192D5210)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x192D51C0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x192D5260)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x192D4D20)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x192D4C80)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x192D4F70)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x192D4FC0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_UPDATE_OFFSET UNITYSDK_OFFSET(0x192D4DB0)
#define RPG_CLIENT_GAMEOBJECTAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x192D52B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectAudio_TypeDefinitionIndex = 65386;

	class GameObjectAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::GeneralAudioItem*>* EnterEventNames; // 0x18
		::Il2CppArray<::System::String*>* ExitEventNames; // 0x20
		::System::Boolean StopEnterEventOnDisable; // 0x28
		::System::Single Field_5_3; // 0x2C
		::System::Collections::Generic::List_1<::RPG::Client::GeneralAudioItem*>* Field_5_4; // 0x30
		::System::Boolean Field_5_5; // 0x38
		::System::Boolean Field_5_6; // 0x39
		::System::Boolean _LimitRange; // 0x3A
		::System::Single _MaxRange; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO__CTOR_OFFSET))(this);
		}

		::System::Void DoEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_DOENABLE_OFFSET))(this);
		}

		::System::Void DoDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_DODISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_UPDATE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void Method_5_211942F2A3D74CCB(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_211942F2A3D74CCB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_77FD543600E00498()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_77FD543600E00498_OFFSET))(this);
		}

		::System::Single Method_5_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_5_98060E4D16CBDFE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_98060E4D16CBDFE4_OFFSET))(this);
		}

		::System::Void Method_5_BD658202BB4C4431()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_BD658202BB4C4431_OFFSET))(this);
		}

		::System::Void Method_5_64501B5CB67A94C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_64501B5CB67A94C3_OFFSET))(this);
		}

		::System::Void Method_5_2DCDFF29E7FDDAA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_2DCDFF29E7FDDAA8_OFFSET))(this);
		}
	};
}
