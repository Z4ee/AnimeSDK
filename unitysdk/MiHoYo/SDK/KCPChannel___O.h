#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class KcpOutput; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPChannel___O_TypeDefinitionIndex = 43534;

	class KCPChannel___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::KcpOutput** StaticGet__0___KcpOutput()
		{
			return (::MiHoYo::SDK::KcpOutput**)Il2CppClass::FromTypeDefinitionIndex(KCPChannel___O_TypeDefinitionIndex)->GetStaticField(0xDFB0);
		}
	};
}
