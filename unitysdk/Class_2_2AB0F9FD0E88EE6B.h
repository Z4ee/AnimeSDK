#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A79874B455F34F7D.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_EA5232D6CAD71030;
class Class_2_1BB8CA1042AACD99;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Odd; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2AB0F9FD0E88EE6B_METHOD_2_6AC20095E0758A03_OFFSET UNITYSDK_OFFSET(0x17CBD750)
#define CLASS_2_2AB0F9FD0E88EE6B__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBD740)

inline static constexpr unsigned int Class_2_2AB0F9FD0E88EE6B_TypeDefinitionIndex = 34168;

class Class_2_2AB0F9FD0E88EE6B : public ::Class_1_A79874B455F34F7D
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Odd*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_2AB0F9FD0E88EE6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_6AC20095E0758A03(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_2AB0F9FD0E88EE6B_METHOD_2_6AC20095E0758A03_OFFSET))(this, a1, a2);
	}
};
