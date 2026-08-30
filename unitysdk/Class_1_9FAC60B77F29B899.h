#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9FAC60B77F29B899_METHOD_1_64D83CC370B9B944_OFFSET UNITYSDK_OFFSET(0x159A1450)
#define CLASS_1_9FAC60B77F29B899_TOSTRING_OFFSET UNITYSDK_OFFSET(0x159A1340)
#define CLASS_1_9FAC60B77F29B899_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x159A13D0)
#define CLASS_1_9FAC60B77F29B899__CTOR_OFFSET UNITYSDK_OFFSET(0x159A1290)

inline static constexpr unsigned int Class_1_9FAC60B77F29B899_TypeDefinitionIndex = 67044;

class Class_1_9FAC60B77F29B899 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* OLDOJJDKBOO; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + CLASS_1_9FAC60B77F29B899__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FAC60B77F29B899_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FAC60B77F29B899_TRIGGERACTION_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* Method_1_64D83CC370B9B944()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FAC60B77F29B899_METHOD_1_64D83CC370B9B944_OFFSET))(this);
	}
};
