#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D4ADBAB3347DD09_1_METHOD_1_90EF356D6D3F4600_1_OFFSET UNITYSDK_OFFSET(0x116CD8E0)
#define CLASS_1_8D4ADBAB3347DD09_1_METHOD_1_90EF356D6D3F4600_OFFSET UNITYSDK_OFFSET(0x116CD8D0)
#define CLASS_1_8D4ADBAB3347DD09_1_METHOD_1_D2E9FDD71B4930D9_OFFSET UNITYSDK_OFFSET(0x116CD5F0)
#define CLASS_1_8D4ADBAB3347DD09_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116CD730)
#define CLASS_1_8D4ADBAB3347DD09_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x116CD7E0)
#define CLASS_1_8D4ADBAB3347DD09_1__CTOR_OFFSET UNITYSDK_OFFSET(0x116CD550)
#define CLASS_1_8D4ADBAB3347DD09_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116CD8F0)

inline static constexpr unsigned int Class_1_8D4ADBAB3347DD09_1_TypeDefinitionIndex = 54573;

class Class_1_8D4ADBAB3347DD09_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D4ADBAB3347DD09_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D4ADBAB3347DD09_1_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D4ADBAB3347DD09_1_TRIGGERACTION_OFFSET))(this);
	}

	::System::Void Method_1_D2E9FDD71B4930D9(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D4ADBAB3347DD09_1_METHOD_1_D2E9FDD71B4930D9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Method_1_90EF356D6D3F4600()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D4ADBAB3347DD09_1_METHOD_1_90EF356D6D3F4600_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Method_1_90EF356D6D3F4600_1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D4ADBAB3347DD09_1_METHOD_1_90EF356D6D3F4600_1_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D4ADBAB3347DD09_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
