#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_76ED9B246ED58A54.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Seq; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A1105ADFD7C94258_METHOD_2_1FAC2C3CCBA6A879_OFFSET UNITYSDK_OFFSET(0x18B69FC0)
#define CLASS_2_A1105ADFD7C94258__CTOR_OFFSET UNITYSDK_OFFSET(0x18B69FB0)

inline static constexpr unsigned int Class_2_A1105ADFD7C94258_TypeDefinitionIndex = 34449;

class Class_2_A1105ADFD7C94258 : public ::Class_1_76ED9B246ED58A54
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_A1105ADFD7C94258__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_1FAC2C3CCBA6A879(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_A1105ADFD7C94258_METHOD_2_1FAC2C3CCBA6A879_OFFSET))(this, a1, a2);
	}
};
