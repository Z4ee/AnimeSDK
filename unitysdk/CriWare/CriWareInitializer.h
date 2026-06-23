#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriAtomConfig; }
namespace CriWare { class CriFsConfig; }
namespace CriWare { class CriManaConfig; }
namespace CriWare { class CriWareDecrypterConfig; }

#define CRIWARE_CRIWAREINITIALIZER_ADDAUDIOEFFECTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1E522690)
#define CRIWARE_CRIWAREINITIALIZER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E5202C0)
#define CRIWARE_CRIWAREINITIALIZER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E5210A0)
#define CRIWARE_CRIWAREINITIALIZER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E521090)
#define CRIWARE_CRIWAREINITIALIZER_INITIALIZEATOM_OFFSET UNITYSDK_OFFSET(0x1E521460)
#define CRIWARE_CRIWAREINITIALIZER_INITIALIZEDECRYPTER_OFFSET UNITYSDK_OFFSET(0x1E522730)
#define CRIWARE_CRIWAREINITIALIZER_INITIALIZEFILESYSTEM_OFFSET UNITYSDK_OFFSET(0x1E5210B0)
#define CRIWARE_CRIWAREINITIALIZER_INITIALIZEMANA_OFFSET UNITYSDK_OFFSET(0x1E5220C0)
#define CRIWARE_CRIWAREINITIALIZER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E5203C0)
#define CRIWARE_CRIWAREINITIALIZER_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E5225A0)
#define CRIWARE_CRIWAREINITIALIZER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E520FB0)
#define CRIWARE_CRIWAREINITIALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E520FA0)
#define CRIWARE_CRIWAREINITIALIZER_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1E520FC0)
#define CRIWARE_CRIWAREINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E522760)

namespace CriWare
{
	inline static constexpr unsigned int CriWareInitializer_TypeDefinitionIndex = 34370;

	class CriWareInitializer : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriWareInitializer_TypeDefinitionIndex)->GetStaticField(0x83E0);
		}
		::System::Boolean initializesFileSystem; // 0x28
		::CriWare::CriFsConfig* fileSystemConfig; // 0x30
		::System::Boolean initializesAtom; // 0x38
		::CriWare::CriAtomConfig* atomConfig; // 0x40
		::System::Boolean initializesMana; // 0x48
		::CriWare::CriManaConfig* manaConfig; // 0x50
		::System::Boolean useDecrypter; // 0x58
		::CriWare::CriWareDecrypterConfig* decrypterConfig; // 0x60
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

		static ::System::Boolean InitializeDecrypter(::CriWare::CriWareDecrypterConfig* config)
		{
			return ((::System::Boolean(*)(::CriWare::CriWareDecrypterConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_INITIALIZEDECRYPTER_OFFSET))(config);
		}
	};
}
