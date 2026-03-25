#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriWareDecrypter_CallbackFromNativeDelegate; }

namespace CriWare
{
	inline static constexpr unsigned int CriWareDecrypter___O_TypeDefinitionIndex = 31162;

	class CriWareDecrypter___O : public ::System::Object
	{
	public:
		static ::CriWare::CriWareDecrypter_CallbackFromNativeDelegate** StaticGet__0___CallbackFromNative()
		{
			return (::CriWare::CriWareDecrypter_CallbackFromNativeDelegate**)Il2CppClass::FromTypeDefinitionIndex(CriWareDecrypter___O_TypeDefinitionIndex)->GetStaticField(0x35450);
		}
	};
}
