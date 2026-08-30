#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7250E7F415FE7CC4_METHOD_1_64D83CC370B9B944_1_OFFSET UNITYSDK_OFFSET(0xB932400)
#define CLASS_1_7250E7F415FE7CC4_METHOD_1_64D83CC370B9B944_OFFSET UNITYSDK_OFFSET(0xB9323C0)
#define CLASS_1_7250E7F415FE7CC4_METHOD_1_D2E9FDD71B4930D9_OFFSET UNITYSDK_OFFSET(0xB9320F0)
#define CLASS_1_7250E7F415FE7CC4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB932220)
#define CLASS_1_7250E7F415FE7CC4_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB9322D0)
#define CLASS_1_7250E7F415FE7CC4__CTOR_OFFSET UNITYSDK_OFFSET(0xB932050)

inline static constexpr unsigned int Class_1_7250E7F415FE7CC4_TypeDefinitionIndex = 67048;

class Class_1_7250E7F415FE7CC4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* FICEEDILADP; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* OLDOJJDKBOO; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_TRIGGERACTION_OFFSET))(this);
	}

	::System::Void Method_1_D2E9FDD71B4930D9(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_METHOD_1_D2E9FDD71B4930D9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Method_1_64D83CC370B9B944()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_METHOD_1_64D83CC370B9B944_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Method_1_64D83CC370B9B944_1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_METHOD_1_64D83CC370B9B944_1_OFFSET))(this);
	}
};
