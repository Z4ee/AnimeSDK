#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4581653E1FF18BF3_2_GETFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0x91D01A0)
#define CLASS_1_4581653E1FF18BF3_2_HASTRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x91D0370)
#define CLASS_1_4581653E1FF18BF3_2_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x91D03B0)
#define CLASS_1_4581653E1FF18BF3_2_SHOULDTRIGGER_OFFSET UNITYSDK_OFFSET(0x91D0250)
#define CLASS_1_4581653E1FF18BF3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x91D0430)

inline static constexpr unsigned int Class_1_4581653E1FF18BF3_2_TypeDefinitionIndex = 69445;

class Class_1_4581653E1FF18BF3_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_2__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID GetFailHintText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_2_GETFAILHINTTEXT_OFFSET))(this);
	}

	::System::Boolean ShouldTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_2_SHOULDTRIGGER_OFFSET))(this);
	}

	::System::Boolean HasTriggerAction()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_2_HASTRIGGERACTION_OFFSET))(this);
	}

	::System::Void OnTrigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_2_ONTRIGGER_OFFSET))(this);
	}
};
