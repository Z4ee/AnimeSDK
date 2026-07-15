#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildCard; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D4711C2FABD22E7C_GET_CARDSDICT_OFFSET UNITYSDK_OFFSET(0x1517B940)
#define CLASS_1_D4711C2FABD22E7C_GET_CARDS_OFFSET UNITYSDK_OFFSET(0x1517B950)
#define CLASS_1_D4711C2FABD22E7C_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x1517B490)
#define CLASS_1_D4711C2FABD22E7C_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x1517B350)
#define CLASS_1_D4711C2FABD22E7C_SET_CARDS_OFFSET UNITYSDK_OFFSET(0x1517B960)
#define CLASS_1_D4711C2FABD22E7C__CTOR_OFFSET UNITYSDK_OFFSET(0x1517B410)

inline static constexpr unsigned int Class_1_D4711C2FABD22E7C_TypeDefinitionIndex = 61002;

class Class_1_D4711C2FABD22E7C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _Cards_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* _CardsDict_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4711C2FABD22E7C__CTOR_OFFSET))(this);
	}

	static ::Class_1_D4711C2FABD22E7C* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_D4711C2FABD22E7C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4711C2FABD22E7C_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4711C2FABD22E7C_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>* get_CardsDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4711C2FABD22E7C_GET_CARDSDICT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_Cards()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4711C2FABD22E7C_GET_CARDS_OFFSET))(this);
	}

	::System::Void set_Cards(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*))((::PBYTE)hIl2Cpp + CLASS_1_D4711C2FABD22E7C_SET_CARDS_OFFSET))(this, a1);
	}
};
