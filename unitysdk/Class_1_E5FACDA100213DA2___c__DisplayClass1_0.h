#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E5FACDA100213DA2;
namespace RPG::Client::BlindBox::Pool { class BlindBoxOpenResultPet; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E5FACDA100213DA2___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD20C6F0)

inline static constexpr unsigned int Class_1_E5FACDA100213DA2___c__DisplayClass1_0_TypeDefinitionIndex = 74954;

class Class_1_E5FACDA100213DA2___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_1_E5FACDA100213DA2* __4__this; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*>* pets; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5FACDA100213DA2___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}
};
