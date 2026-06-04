#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkLogger_ErrorLoggerInteropDelegate;

inline static constexpr unsigned int AkLogger___O_TypeDefinitionIndex = 41230;

class AkLogger___O : public ::System::Object
{
public:
	static ::AkLogger_ErrorLoggerInteropDelegate** StaticGet__0___WwiseInternalLogError()
	{
		return (::AkLogger_ErrorLoggerInteropDelegate**)Il2CppClass::FromTypeDefinitionIndex(AkLogger___O_TypeDefinitionIndex)->GetStaticField(0x5FD40);
	}
};
