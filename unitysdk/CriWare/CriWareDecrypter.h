#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriWareDecrypterConfig; }
namespace CriWare { class CriWareDecrypter_CallbackFromNativeDelegate; }
namespace System { class String; }

#define CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x146DB2C0)
#define CRIWARE_CRIWAREDECRYPTER_CRIWARE05CA8EB2_OFFSET UNITYSDK_OFFSET(0x146DB220)
#define CRIWARE_CRIWAREDECRYPTER_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x146DAFB0)
#define CRIWARE_CRIWAREDECRYPTER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x146DAF80)

namespace CriWare
{
	inline static constexpr unsigned int CriWareDecrypter_TypeDefinitionIndex = 37180;

	class CriWareDecrypter : public ::System::Object
	{
	public:
		static ::System::UInt64* StaticGet_temporalStorage()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(CriWareDecrypter_TypeDefinitionIndex)->GetStaticField(0x3810);
		}

		static ::System::Boolean Initialize(::CriWare::CriWareDecrypterConfig* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriWareDecrypterConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_INITIALIZE_OFFSET))(a1);
		}

		static ::System::Boolean Initialize_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_INITIALIZE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt64 CallbackFromNative(::System::IntPtr a1)
		{
			return ((::System::UInt64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_CALLBACKFROMNATIVE_OFFSET))(a1);
		}

		static ::System::Int32 CRIWARE05CA8EB2(::System::Boolean a1, ::System::Boolean a2, ::CriWare::CriWareDecrypter_CallbackFromNativeDelegate* a3, ::System::IntPtr a4)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Boolean, ::CriWare::CriWareDecrypter_CallbackFromNativeDelegate*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREDECRYPTER_CRIWARE05CA8EB2_OFFSET))(a1, a2, a3, a4);
		}
	};
}
