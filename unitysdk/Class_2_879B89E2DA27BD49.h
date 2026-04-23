#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A79874B455F34F7D.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_EA5232D6CAD71030;
class Class_2_1BB8CA1042AACD99;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Seq; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_879B89E2DA27BD49_METHOD_2_40C7E8917A1D8AF7_OFFSET UNITYSDK_OFFSET(0x17CC40D0)
#define CLASS_2_879B89E2DA27BD49__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC40C0)

inline static constexpr unsigned int Class_2_879B89E2DA27BD49_TypeDefinitionIndex = 34167;

class Class_2_879B89E2DA27BD49 : public ::Class_1_A79874B455F34F7D
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_879B89E2DA27BD49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_40C7E8917A1D8AF7(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_879B89E2DA27BD49_METHOD_2_40C7E8917A1D8AF7_OFFSET))(this, a1, a2);
	}
};
