#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace Mono::Security::X509 { class X509Stores; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSERPATH_OFFSET UNITYSDK_OFFSET(0x1E706AB0)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSER_OFFSET UNITYSDK_OFFSET(0x1E706D30)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_INTERMEDIATECACERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1E707130)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_INTERMEDIATECACRLS_OFFSET UNITYSDK_OFFSET(0x1E707390)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINEPATH_OFFSET UNITYSDK_OFFSET(0x1E706B50)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x1E706E30)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSERPATH_OFFSET UNITYSDK_OFFSET(0x1E706BF0)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSER_OFFSET UNITYSDK_OFFSET(0x1E706F30)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINEPATH_OFFSET UNITYSDK_OFFSET(0x1E706C90)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x1E707030)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCACRLS_OFFSET UNITYSDK_OFFSET(0x1E7077D0)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1E707570)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_UNTRUSTEDCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1E7079B0)
#define MONO_SECURITY_X509_X509STOREMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E706AA0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509StoreManager_TypeDefinitionIndex = 2305;

	class X509StoreManager : public ::System::Object
	{
	public:
		static ::Mono::Security::X509::X509Stores** StaticGet__newMachineStore()
		{
			return (::Mono::Security::X509::X509Stores**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x2390);
		}
		static ::Mono::Security::X509::X509Stores** StaticGet__newUserStore()
		{
			return (::Mono::Security::X509::X509Stores**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x2398);
		}
		static ::System::String** StaticGet__userPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23A0);
		}
		static ::System::String** StaticGet__localMachinePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23A8);
		}
		static ::Mono::Security::X509::X509Stores** StaticGet__userStore()
		{
			return (::Mono::Security::X509::X509Stores**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23B0);
		}
		static ::System::String** StaticGet__newLocalMachinePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23B8);
		}
		static ::System::String** StaticGet__newUserPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23C0);
		}
		static ::Mono::Security::X509::X509Stores** StaticGet__machineStore()
		{
			return (::Mono::Security::X509::X509Stores**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::String* get_CurrentUserPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSERPATH_OFFSET))();
		}

		static ::System::String* get_LocalMachinePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINEPATH_OFFSET))();
		}

		static ::System::String* get_NewCurrentUserPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSERPATH_OFFSET))();
		}

		static ::System::String* get_NewLocalMachinePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINEPATH_OFFSET))();
		}

		static ::Mono::Security::X509::X509Stores* get_CurrentUser()
		{
			return ((::Mono::Security::X509::X509Stores*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSER_OFFSET))();
		}

		static ::Mono::Security::X509::X509Stores* get_LocalMachine()
		{
			return ((::Mono::Security::X509::X509Stores*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINE_OFFSET))();
		}

		static ::Mono::Security::X509::X509Stores* get_NewCurrentUser()
		{
			return ((::Mono::Security::X509::X509Stores*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSER_OFFSET))();
		}

		static ::Mono::Security::X509::X509Stores* get_NewLocalMachine()
		{
			return ((::Mono::Security::X509::X509Stores*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINE_OFFSET))();
		}

		static ::Mono::Security::X509::X509CertificateCollection* get_IntermediateCACertificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_INTERMEDIATECACERTIFICATES_OFFSET))();
		}

		static ::System::Collections::ArrayList* get_IntermediateCACrls()
		{
			return ((::System::Collections::ArrayList*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_INTERMEDIATECACRLS_OFFSET))();
		}

		static ::Mono::Security::X509::X509CertificateCollection* get_TrustedRootCertificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCERTIFICATES_OFFSET))();
		}

		static ::System::Collections::ArrayList* get_TrustedRootCACrls()
		{
			return ((::System::Collections::ArrayList*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCACRLS_OFFSET))();
		}

		static ::Mono::Security::X509::X509CertificateCollection* get_UntrustedCertificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_UNTRUSTEDCERTIFICATES_OFFSET))();
		}
	};
}
