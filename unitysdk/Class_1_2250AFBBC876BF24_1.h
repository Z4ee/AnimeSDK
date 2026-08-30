#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2250AFBBC876BF24_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16364B60)
#define CLASS_1_2250AFBBC876BF24_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x16364C20)
#define CLASS_1_2250AFBBC876BF24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16364B50)

inline static constexpr unsigned int Class_1_2250AFBBC876BF24_1_TypeDefinitionIndex = 67066;

class Class_1_2250AFBBC876BF24_1 : public ::System::Object
{
public:
	::System::Object* BAELGJMOKBO; // 0x10
	::RPG::Client::NotifyType AJBMOLOFCPN; // 0x18

	::System::Void _ctor(::RPG::Client::NotifyType a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2250AFBBC876BF24_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2250AFBBC876BF24_1_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2250AFBBC876BF24_1_TRIGGERACTION_OFFSET))(this);
	}
};
