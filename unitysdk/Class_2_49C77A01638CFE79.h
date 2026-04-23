#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A79874B455F34F7D.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_EA5232D6CAD71030;
class Class_2_1BB8CA1042AACD99;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Color; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_49C77A01638CFE79_METHOD_2_5EB616FCBE7ED41D_OFFSET UNITYSDK_OFFSET(0x17C566F0)
#define CLASS_2_49C77A01638CFE79__CTOR_OFFSET UNITYSDK_OFFSET(0x17C26720)

inline static constexpr unsigned int Class_2_49C77A01638CFE79_TypeDefinitionIndex = 34171;

class Class_2_49C77A01638CFE79 : public ::Class_1_A79874B455F34F7D
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Color* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Color* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Color*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_49C77A01638CFE79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_5EB616FCBE7ED41D(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_49C77A01638CFE79_METHOD_2_5EB616FCBE7ED41D_OFFSET))(this, a1, a2);
	}
};
