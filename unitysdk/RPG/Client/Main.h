#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class RPGProfilerMarker; }

#define RPG_CLIENT_MAIN_AWAKE_OFFSET UNITYSDK_OFFSET(0xA76B1B0)
#define RPG_CLIENT_MAIN_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xA76B830)
#define RPG_CLIENT_MAIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA76B880)
#define RPG_CLIENT_MAIN_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0xA76B600)
#define RPG_CLIENT_MAIN_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xA76B680)
#define RPG_CLIENT_MAIN_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xA76B700)
#define RPG_CLIENT_MAIN_START_OFFSET UNITYSDK_OFFSET(0xA76B480)
#define RPG_CLIENT_MAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xA76B790)
#define RPG_CLIENT_MAIN__CCTOR_OFFSET UNITYSDK_OFFSET(0xA76B910)
#define RPG_CLIENT_MAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA76B900)

namespace RPG::Client
{
	inline static constexpr unsigned int Main_TypeDefinitionIndex = 62954;

	class Main : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateMainMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Main_TypeDefinitionIndex)->GetStaticField(0x1CC40);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateMainMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Main_TypeDefinitionIndex)->GetStaticField(0x1CC48);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePhysicsSyncTransformsMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Main_TypeDefinitionIndex)->GetStaticField(0x1CC50);
		}
		::System::Int32 _lastFixedUpdateFrameCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_START_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
		}

		::System::Void OnApplicationPause(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_ONAPPLICATIONPAUSE_OFFSET))(this, pause);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAIN_LATEUPDATE_OFFSET))(this);
		}
	};
}
