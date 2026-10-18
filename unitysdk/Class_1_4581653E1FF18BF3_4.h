#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4581653E1FF18BF3_4_GETFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0x12CDF690)
#define CLASS_1_4581653E1FF18BF3_4_HASTRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x12CDF860)
#define CLASS_1_4581653E1FF18BF3_4_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x12CDF8A0)
#define CLASS_1_4581653E1FF18BF3_4_SHOULDTRIGGER_OFFSET UNITYSDK_OFFSET(0x12CDF740)
#define CLASS_1_4581653E1FF18BF3_4__CTOR_OFFSET UNITYSDK_OFFSET(0x12CDF920)

inline static constexpr unsigned int Class_1_4581653E1FF18BF3_4_TypeDefinitionIndex = 75386;

class Class_1_4581653E1FF18BF3_4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_4__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID GetFailHintText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_4_GETFAILHINTTEXT_OFFSET))(this);
	}

	::System::Boolean ShouldTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_4_SHOULDTRIGGER_OFFSET))(this);
	}

	::System::Boolean HasTriggerAction()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_4_HASTRIGGERACTION_OFFSET))(this);
	}

	::System::Void OnTrigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_4_ONTRIGGER_OFFSET))(this);
	}
};
