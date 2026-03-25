#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIWAREPS5_SAFENATIVEMETHODS_CRIFSUNITY_SETUP_PS5_OFFSET UNITYSDK_OFFSET(0x11A56C00)

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS5_SafeNativeMethods_TypeDefinitionIndex = 30954;

	class CriWarePS5_SafeNativeMethods : public ::System::Object
	{
	public:
		static ::System::Void criFsUnity_Setup_PS5(::System::Boolean enable_apr_direct_mode)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREPS5_SAFENATIVEMETHODS_CRIFSUNITY_SETUP_PS5_OFFSET))(enable_apr_direct_mode);
		}
	};
}
