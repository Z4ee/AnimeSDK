#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomPlugin_CallbackFromNativeDelegate; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomPlugin___O_TypeDefinitionIndex = 30957;

	class CriAtomPlugin___O : public ::System::Object
	{
	public:
		static ::CriWare::CriAtomPlugin_CallbackFromNativeDelegate** StaticGet__0___CallbackFromNative()
		{
			return (::CriWare::CriAtomPlugin_CallbackFromNativeDelegate**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin___O_TypeDefinitionIndex)->GetStaticField(0x34A70);
		}
	};
}
