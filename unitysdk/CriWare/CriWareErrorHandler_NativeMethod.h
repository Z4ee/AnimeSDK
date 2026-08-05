#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIWAREERRORHANDLER_NATIVEMETHOD_CRIWARE18F9C758_OFFSET UNITYSDK_OFFSET(0x1FC55E60)

namespace CriWare
{
	inline static constexpr unsigned int CriWareErrorHandler_NativeMethod_TypeDefinitionIndex = 34994;

	class CriWareErrorHandler_NativeMethod : public ::System::Object
	{
	public:
		static ::System::IntPtr CRIWARE18F9C758()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_NATIVEMETHOD_CRIWARE18F9C758_OFFSET))();
		}
	};
}
