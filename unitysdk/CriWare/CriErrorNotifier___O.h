#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriErrorNotifier_ErrorCallbackFunc; }

namespace CriWare
{
	inline static constexpr unsigned int CriErrorNotifier___O_TypeDefinitionIndex = 38853;

	class CriErrorNotifier___O : public ::System::Object
	{
	public:
		static ::CriWare::CriErrorNotifier_ErrorCallbackFunc** StaticGet__0___ErrorCallbackFromNative()
		{
			return (::CriWare::CriErrorNotifier_ErrorCallbackFunc**)Il2CppClass::FromTypeDefinitionIndex(CriErrorNotifier___O_TypeDefinitionIndex)->GetStaticField(0x5D470);
		}
	};
}
