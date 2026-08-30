#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD4EC20BEBA8A2DA.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Even; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_25481CB1A28A6918_METHOD_2_A3196062528F0C75_OFFSET UNITYSDK_OFFSET(0x15449050)
#define CLASS_2_25481CB1A28A6918__CTOR_OFFSET UNITYSDK_OFFSET(0x15449040)

inline static constexpr unsigned int Class_2_25481CB1A28A6918_TypeDefinitionIndex = 35694;

class Class_2_25481CB1A28A6918 : public ::Class_1_CD4EC20BEBA8A2DA
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Even* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Even* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Even*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_25481CB1A28A6918__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_A3196062528F0C75(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_25481CB1A28A6918_METHOD_2_A3196062528F0C75_OFFSET))(this, a1, a2);
	}
};
