#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LOGIC_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1655E740)
#define LOGIC_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1656D960)

inline static constexpr unsigned int Logic_OdinNewInitializer_TypeDefinitionIndex = 72963;

class Logic_OdinNewInitializer : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGIC_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOGIC_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
