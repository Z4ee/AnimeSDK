#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD4EC20BEBA8A2DA.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Triple; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_091C5DD4AFD7B68A_METHOD_2_40B10CAF48937F3B_OFFSET UNITYSDK_OFFSET(0x190DEF50)
#define CLASS_2_091C5DD4AFD7B68A__CTOR_OFFSET UNITYSDK_OFFSET(0x190DEF40)

inline static constexpr unsigned int Class_2_091C5DD4AFD7B68A_TypeDefinitionIndex = 34830;

class Class_2_091C5DD4AFD7B68A : public ::Class_1_CD4EC20BEBA8A2DA
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Triple*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_091C5DD4AFD7B68A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_40B10CAF48937F3B(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_091C5DD4AFD7B68A_METHOD_2_40B10CAF48937F3B_OFFSET))(this, a1, a2);
	}
};
