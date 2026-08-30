#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4581653E1FF18BF3_3_GETFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0x12844B20)
#define CLASS_1_4581653E1FF18BF3_3_HASTRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x12844CF0)
#define CLASS_1_4581653E1FF18BF3_3_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x12844D30)
#define CLASS_1_4581653E1FF18BF3_3_SHOULDTRIGGER_OFFSET UNITYSDK_OFFSET(0x12844BD0)
#define CLASS_1_4581653E1FF18BF3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x12844DB0)

inline static constexpr unsigned int Class_1_4581653E1FF18BF3_3_TypeDefinitionIndex = 75087;

class Class_1_4581653E1FF18BF3_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_3__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID GetFailHintText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_3_GETFAILHINTTEXT_OFFSET))(this);
	}

	::System::Boolean ShouldTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_3_SHOULDTRIGGER_OFFSET))(this);
	}

	::System::Boolean HasTriggerAction()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_3_HASTRIGGERACTION_OFFSET))(this);
	}

	::System::Void OnTrigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4581653E1FF18BF3_3_ONTRIGGER_OFFSET))(this);
	}
};
