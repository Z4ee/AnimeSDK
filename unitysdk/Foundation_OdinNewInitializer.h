#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1E754F60)
#define FOUNDATION_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E755080)

inline static constexpr unsigned int Foundation_OdinNewInitializer_TypeDefinitionIndex = 7938;

class Foundation_OdinNewInitializer : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
