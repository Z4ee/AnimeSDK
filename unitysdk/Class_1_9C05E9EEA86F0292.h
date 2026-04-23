#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCard; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9C05E9EEA86F0292_GET_CARDSDICT_OFFSET UNITYSDK_OFFSET(0x12ACECD0)
#define CLASS_1_9C05E9EEA86F0292_GET_CARDS_OFFSET UNITYSDK_OFFSET(0x12ACECE0)
#define CLASS_1_9C05E9EEA86F0292_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x12ACE910)
#define CLASS_1_9C05E9EEA86F0292_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x12ACE7D0)
#define CLASS_1_9C05E9EEA86F0292_SET_CARDS_OFFSET UNITYSDK_OFFSET(0x12ACECF0)
#define CLASS_1_9C05E9EEA86F0292__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACE890)

inline static constexpr unsigned int Class_1_9C05E9EEA86F0292_TypeDefinitionIndex = 58787;

class Class_1_9C05E9EEA86F0292 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* _CardsDict_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _Cards_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C05E9EEA86F0292__CTOR_OFFSET))(this);
	}

	static ::Class_1_9C05E9EEA86F0292* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_9C05E9EEA86F0292*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C05E9EEA86F0292_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C05E9EEA86F0292_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* get_CardsDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C05E9EEA86F0292_GET_CARDSDICT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_Cards()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C05E9EEA86F0292_GET_CARDS_OFFSET))(this);
	}

	::System::Void set_Cards(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*))((::PBYTE)hIl2Cpp + CLASS_1_9C05E9EEA86F0292_SET_CARDS_OFFSET))(this, value);
	}
};
