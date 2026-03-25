#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriWareDecrypterConfig; }
namespace CriWare { class CriWareDecrypter_CallbackFromNativeDelegate; }
namespace System { class String; }

#define CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x11A535C0)
#define CRIWARE_CRIWAREDECRYPTER_CRIWARE05CA8EB2_OFFSET UNITYSDK_OFFSET(0x11A53520)
#define CRIWARE_CRIWAREDECRYPTER_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x11A532B0)
#define CRIWARE_CRIWAREDECRYPTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11A53280)

namespace CriWare
{
	inline static constexpr unsigned int CriWareDecrypter_TypeDefinitionIndex = 31160;

	class CriWareDecrypter : public ::System::Object
	{
	public:
		static ::System::UInt64* StaticGet_temporalStorage()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(CriWareDecrypter_TypeDefinitionIndex)->GetStaticField(0x10AD0);
		}

		static ::System::Boolean Initialize(::CriWare::CriWareDecrypterConfig* config)
		{
			return ((::System::Boolean(*)(::CriWare::CriWareDecrypterConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_INITIALIZE_OFFSET))(config);
		}

		static ::System::Boolean Initialize_1(::System::String* key, ::System::String* authenticationFile, ::System::Boolean enableAtomDecryption, ::System::Boolean enableManaDecryption)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_INITIALIZE_1_OFFSET))(key, authenticationFile, enableAtomDecryption, enableManaDecryption);
		}

		static ::System::UInt64 CallbackFromNative(::System::IntPtr ptr1)
		{
			return ((::System::UInt64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVE_OFFSET))(ptr1);
		}

		static ::System::Int32 CRIWARE05CA8EB2(::System::Boolean enable_atom_decryption, ::System::Boolean enable_mana_decryption, ::CriWare::CriWareDecrypter_CallbackFromNativeDelegate* func, ::System::IntPtr obj)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Boolean, ::CriWare::CriWareDecrypter_CallbackFromNativeDelegate*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_CRIWARE05CA8EB2_OFFSET))(enable_atom_decryption, enable_mana_decryption, func, obj);
		}
	};
}
