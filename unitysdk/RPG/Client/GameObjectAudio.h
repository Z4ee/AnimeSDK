#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class GeneralAudioItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_GAMEOBJECTAUDIO_DODISABLE_OFFSET UNITYSDK_OFFSET(0x193A89B0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_DOENABLE_OFFSET UNITYSDK_OFFSET(0x193A8960)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_211942F2A3D74CCB_OFFSET UNITYSDK_OFFSET(0x1AD85930)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x1AD854C0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x1AD85350)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x1AD85A40)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x1AD85B30)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1AD85AE0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_METHOD_5_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x1AD85B80)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AD85430)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD852B0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x1AD85890)
#define RPG_CLIENT_GAMEOBJECTAUDIO_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1AD858E0)
#define RPG_CLIENT_GAMEOBJECTAUDIO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD856D0)
#define RPG_CLIENT_GAMEOBJECTAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD85BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectAudio_TypeDefinitionIndex = 68398;

	class GameObjectAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::GeneralAudioItem*>* EnterEventNames; // 0x18
		::Il2CppArray<::System::String*>* ExitEventNames; // 0x20
		::System::Boolean StopEnterEventOnDisable; // 0x28
		::System::Single PGMIOKKLHIE; // 0x2C
		::System::Collections::Generic::List_1<::RPG::Client::GeneralAudioItem*>* LPCOCKFGHKM; // 0x30
		::System::Boolean GBOAMPEGJBE; // 0x38
		::System::Boolean ACAPCHBDIBF; // 0x39
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
