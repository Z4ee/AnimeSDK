#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LITTLEGAMESHAREMESSAGEPACKINITIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x17B38C00)

inline static constexpr unsigned int LittleGameShareMessagePackInitializer_TypeDefinitionIndex = 34544;

class LittleGameShareMessagePackInitializer : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LittleGameShareMessagePackInitializer_TypeDefinitionIndex)->GetStaticField(0xEA10);
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITTLEGAMESHAREMESSAGEPACKINITIALIZER_INIT_OFFSET))();
	}
};
