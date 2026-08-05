#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriAtomConfig; }
namespace CriWare { class CriFsConfig; }
namespace CriWare { class CriManaConfig; }
namespace CriWare { class CriWareDecrypter_Config; }

#define CRIWARE_CRIWAREINITIALIZER_ADDAUDIOEFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1F909450)
#define CRIWARE_CRIWAREINITIALIZER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F906DB0)
#define CRIWARE_CRIWAREINITIALIZER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F907B60)
#define CRIWARE_CRIWAREINITIALIZER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1F907B50)
#define CRIWARE_CRIWAREINITIALIZER_INITIALIZEATOM_OFFSET UNITYSDK_OFFSET(0x1F907F30)
#define CRIWARE_CRIWAREINITIALIZER_INITIALIZEFILESYSTEM_OFFSET UNITYSDK_OFFSET(0x1F907B80)
#define CRIWARE_CRIWAREINITIALIZER_INITIALIZEMANA_OFFSET UNITYSDK_OFFSET(0x1F908E10)
#define CRIWARE_CRIWAREINITIALIZER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F906EB0)
#define CRIWARE_CRIWAREINITIALIZER_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F909360)
#define CRIWARE_CRIWAREINITIALIZER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F907A70)
#define CRIWARE_CRIWAREINITIALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F907A60)
#define CRIWARE_CRIWAREINITIALIZER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F9094F0)
#define CRIWARE_CRIWAREINITIALIZER_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1F907A80)
#define CRIWARE_CRIWAREINITIALIZER_VALIDATECONFIGEDITORFORNOTPUBLIC_OFFSET UNITYSDK_OFFSET(0x1F9095B0)
#define CRIWARE_CRIWAREINITIALIZER_VALIDATECONFIGEDITOR_OFFSET UNITYSDK_OFFSET(0x1F909550)
#define CRIWARE_CRIWAREINITIALIZER_VALIDATECONFIGFORNOTPUBLIC_OFFSET UNITYSDK_OFFSET(0x1F909610)
#define CRIWARE_CRIWAREINITIALIZER_VALIDATECONFIG_OFFSET UNITYSDK_OFFSET(0x1F907B70)
#define CRIWARE_CRIWAREINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F909620)

namespace CriWare
{
	inline static constexpr unsigned int CriWareInitializer_TypeDefinitionIndex = 35022;

	class CriWareInitializer : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriWareInitializer_TypeDefinitionIndex)->GetStaticField(0x84A0);
		}
		::System::Boolean initializesFileSystem; // 0x28
		::CriWare::CriFsConfig* fileSystemConfig; // 0x30
		::System::Boolean initializesAtom; // 0x38
		::CriWare::CriAtomConfig* atomConfig; // 0x40
		::System::Boolean initializesMana; // 0x48
		::CriWare::CriManaConfig* manaConfig; // 0x50
		::System::Boolean useDecrypter; // 0x58
		::CriWare::CriWareDecrypter_Config* DecrypterConfig; // 0x60
		::System::Boolean dontInitializeOnAwake; // 0x68
		::System::Boolean dontDestroyOnLoad; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_ONDESTROY_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_INITIALIZE_OFFSET))(this);
		}

		::System::Void Shutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_SHUTDOWN_OFFSET))(this);
		}

		static ::System::Boolean IsInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void AddAudioEffectInterface(::System::IntPtr effect_interface)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_ADDAUDIOEFFECTINTERFACE_OFFSET))(effect_interface);
		}

		static ::System::Boolean InitializeFileSystem(::CriWare::CriFsConfig* config)
		{
			return ((::System::Boolean(*)(::CriWare::CriFsConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_INITIALIZEFILESYSTEM_OFFSET))(config);
		}

		static ::System::Boolean InitializeAtom(::CriWare::CriAtomConfig* config)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_INITIALIZEATOM_OFFSET))(config);
		}

		static ::System::Boolean InitializeMana(::CriWare::CriManaConfig* config)
		{
			return ((::System::Boolean(*)(::CriWare::CriManaConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_INITIALIZEMANA_OFFSET))(config);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void ValidateConfigEditorForNotPublic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_VALIDATECONFIGEDITORFORNOTPUBLIC_OFFSET))(this);
		}

		::System::Void ValidateConfigForNotPublic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_VALIDATECONFIGFORNOTPUBLIC_OFFSET))(this);
		}

		::System::Void ValidateConfigEditor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_VALIDATECONFIGEDITOR_OFFSET))(this);
		}

		::System::Void ValidateConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_VALIDATECONFIG_OFFSET))(this);
		}
	};
}
