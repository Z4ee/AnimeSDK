#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LITTLEGAMESHAREMESSAGEPACKINITIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x19738A00)

inline static constexpr unsigned int LittleGameShareMessagePackInitializer_TypeDefinitionIndex = 35405;

class LittleGameShareMessagePackInitializer : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_AIIPPMJMBAC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LittleGameShareMessagePackInitializer_TypeDefinitionIndex)->GetStaticField(0x8E70);
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITTLEGAMESHAREMESSAGEPACKINITIALIZER_INIT_OFFSET))();
	}
};
