#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD4EC20BEBA8A2DA.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Odd; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2AB0F9FD0E88EE6B_METHOD_2_D3727EECD0A3A3DE_OFFSET UNITYSDK_OFFSET(0x1C2347F0)
#define CLASS_2_2AB0F9FD0E88EE6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2347E0)

inline static constexpr unsigned int Class_2_2AB0F9FD0E88EE6B_TypeDefinitionIndex = 35693;

class Class_2_2AB0F9FD0E88EE6B : public ::Class_1_CD4EC20BEBA8A2DA
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_2AB0F9FD0E88EE6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_D3727EECD0A3A3DE(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_2AB0F9FD0E88EE6B_METHOD_2_D3727EECD0A3A3DE_OFFSET))(this, a1, a2);
	}
};
