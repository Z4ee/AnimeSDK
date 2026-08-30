#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace System { template <typename T> class Action_1; }

#define CRIWARE_CRIATOMSERVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D37E250)
#define CRIWARE_CRIATOMSERVER_CONSUMEPCMOUTPUT_OFFSET UNITYSDK_OFFSET(0x1D37E620)
#define CRIWARE_CRIATOMSERVER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D37B890)
#define CRIWARE_CRIATOMSERVER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D37E630)
#define CRIWARE_CRIATOMSERVER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1D37E3F0)
#define CRIWARE_CRIATOMSERVER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D37BA00)
#define CRIWARE_CRIATOMSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D37E140)
#define CRIWARE_CRIATOMSERVER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1D37E640)
#define CRIWARE_CRIATOMSERVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D37E330)
#define CRIWARE_CRIATOMSERVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D37E2E0)
#define CRIWARE_CRIATOMSERVER_PROCESSAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1D37E6E0)
#define CRIWARE_CRIATOMSERVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D37E7B0)
#define CRIWARE_CRIATOMSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37E780)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomServer_TypeDefinitionIndex = 38643;

	class CriAtomServer : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriAtomServer** StaticGet__instance()
		{
			return (::CriWare::CriAtomServer**)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x5D240);
		}
		static ::System::Boolean* StaticGet_KeepPlayingSoundOnPause()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x12CE0);
		}
		static ::System::Boolean* StaticGet_EnableAutoConsumePcmOutput()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x12CE1);
		}
		static ::System::Boolean* StaticGet_EnableBackgroundPlayback_ANDROID()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x12CE2);
		}
		::System::Action_1<::System::Boolean>* onApplicationPausePreProcess; // 0x28
		::System::Action_1<::System::Boolean>* onApplicationPausePostProcess; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER__CCTOR_OFFSET))();
		}

		static ::CriWare::CriAtomServer* get_instance()
		{
			return ((::CriWare::CriAtomServer*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void CreateInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CREATEINSTANCE_OFFSET))();
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_DESTROYINSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void ConsumePcmOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_CONSUMEPCMOUTPUT_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void ProcessApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_PROCESSAPPLICATIONPAUSE_OFFSET))(this, a1);
		}
	};
}
