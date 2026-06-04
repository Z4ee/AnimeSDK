#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_76ED9B246ED58A54.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Pair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8CFE6225B62A57BE_METHOD_2_40B5733C34838AEB_OFFSET UNITYSDK_OFFSET(0x189FF8C0)
#define CLASS_2_8CFE6225B62A57BE_METHOD_2_7B94E26B994F1459_OFFSET UNITYSDK_OFFSET(0x189FFC50)
#define CLASS_2_8CFE6225B62A57BE__CTOR_OFFSET UNITYSDK_OFFSET(0x189FF8B0)

inline static constexpr unsigned int Class_2_8CFE6225B62A57BE_TypeDefinitionIndex = 34444;

class Class_2_8CFE6225B62A57BE : public ::Class_1_76ED9B246ED58A54
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_8CFE6225B62A57BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_40B5733C34838AEB(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_8CFE6225B62A57BE_METHOD_2_40B5733C34838AEB_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_7B94E26B994F1459(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_8CFE6225B62A57BE_METHOD_2_7B94E26B994F1459_OFFSET))(this, a1, a2, a3);
	}
};
