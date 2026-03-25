#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A79874B455F34F7D.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_B1A7D8EBAB39D13D;
class Class_2_569DE47525C5FD32;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_SpecialEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7B7CC0BC6E1B9D1_METHOD_2_A01E86327137D73D_OFFSET UNITYSDK_OFFSET(0x16646090)
#define CLASS_2_A7B7CC0BC6E1B9D1__CTOR_OFFSET UNITYSDK_OFFSET(0x16646080)

inline static constexpr unsigned int Class_2_A7B7CC0BC6E1B9D1_TypeDefinitionIndex = 28488;

class Class_2_A7B7CC0BC6E1B9D1 : public ::Class_1_A79874B455F34F7D
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_SpecialEffect*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_2_A7B7CC0BC6E1B9D1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_A01E86327137D73D(::Class_2_569DE47525C5FD32* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_569DE47525C5FD32*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_A7B7CC0BC6E1B9D1_METHOD_2_A01E86327137D73D_OFFSET))(this, a1, a2);
	}
};
