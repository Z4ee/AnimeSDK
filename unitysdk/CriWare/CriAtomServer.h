#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace System { template <typename T> class Action_1; }

#define CRIWARE_CRIATOMSERVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F901670)
#define CRIWARE_CRIATOMSERVER_CONSUMEPCMOUTPUT_OFFSET UNITYSDK_OFFSET(0x1F901CA0)
#define CRIWARE_CRIATOMSERVER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F901300)
#define CRIWARE_CRIATOMSERVER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F901CB0)
#define CRIWARE_CRIATOMSERVER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9019A0)
#define CRIWARE_CRIATOMSERVER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F901470)
#define CRIWARE_CRIATOMSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F9012A0)
#define CRIWARE_CRIATOMSERVER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1F901CC0)
#define CRIWARE_CRIATOMSERVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F901880)
#define CRIWARE_CRIATOMSERVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F901870)
#define CRIWARE_CRIATOMSERVER_PROCESSAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1F901CD0)
#define CRIWARE_CRIATOMSERVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F901E00)
#define CRIWARE_CRIATOMSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F901D90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomServer_TypeDefinitionIndex = 34895;

	class CriAtomServer : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriAtomServer** StaticGet__instance()
		{
			return (::CriWare::CriAtomServer**)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x292C0);
		}
		static ::System::Boolean* StaticGet_KeepPlayingSoundOnPause()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x8490);
		}
		static ::System::Boolean* StaticGet_EnableBackgroundPlayback_ANDROID()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x8491);
		}
		static ::System::Boolean* StaticGet_EnableAutoConsumePcmOutput()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomServer_TypeDefinitionIndex)->GetStaticField(0x8492);
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

		::System::Void OnApplicationPause(::System::Boolean appPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_ONAPPLICATIONPAUSE_OFFSET))(this, appPause);
		}

		::System::Void ProcessApplicationPause(::System::Boolean appPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSERVER_PROCESSAPPLICATIONPAUSE_OFFSET))(this, appPause);
		}
	};
}
