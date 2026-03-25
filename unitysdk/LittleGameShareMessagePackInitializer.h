#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LITTLEGAMESHAREMESSAGEPACKINITIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x166DD0B0)

inline static constexpr unsigned int LittleGameShareMessagePackInitializer_TypeDefinitionIndex = 28266;

class LittleGameShareMessagePackInitializer : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LittleGameShareMessagePackInitializer_TypeDefinitionIndex)->GetStaticField(0xEDD0);
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITTLEGAMESHAREMESSAGEPACKINITIALIZER_INIT_OFFSET))();
	}
};
