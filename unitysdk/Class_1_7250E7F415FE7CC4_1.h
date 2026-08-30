#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7250E7F415FE7CC4_1_METHOD_1_64D83CC370B9B944_1_OFFSET UNITYSDK_OFFSET(0x1A778840)
#define CLASS_1_7250E7F415FE7CC4_1_METHOD_1_64D83CC370B9B944_OFFSET UNITYSDK_OFFSET(0x1A778800)
#define CLASS_1_7250E7F415FE7CC4_1_METHOD_1_D2E9FDD71B4930D9_OFFSET UNITYSDK_OFFSET(0x1A778530)
#define CLASS_1_7250E7F415FE7CC4_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A778660)
#define CLASS_1_7250E7F415FE7CC4_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1A778710)
#define CLASS_1_7250E7F415FE7CC4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A778490)

inline static constexpr unsigned int Class_1_7250E7F415FE7CC4_1_TypeDefinitionIndex = 67054;

class Class_1_7250E7F415FE7CC4_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* OLDOJJDKBOO; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* FICEEDILADP; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_1_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_1_TRIGGERACTION_OFFSET))(this);
	}

	::System::Void Method_1_D2E9FDD71B4930D9(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_1_METHOD_1_D2E9FDD71B4930D9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Method_1_64D83CC370B9B944()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_1_METHOD_1_64D83CC370B9B944_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Method_1_64D83CC370B9B944_1()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7250E7F415FE7CC4_1_METHOD_1_64D83CC370B9B944_1_OFFSET))(this);
	}
};
