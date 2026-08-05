#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60FFEACBA22D448A_Class_1_F1AD72368E0D7BE3_5;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_60FFEACBA22D448A_CLASS_1_7EA8DD3228559031_METHOD_1_F85485D80BBD001F_OFFSET UNITYSDK_OFFSET(0x1CDA2930)
#define CLASS_2_60FFEACBA22D448A_CLASS_1_7EA8DD3228559031__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA2920)

inline static constexpr unsigned int Class_2_60FFEACBA22D448A_Class_1_7EA8DD3228559031_TypeDefinitionIndex = 66210;

class Class_2_60FFEACBA22D448A_Class_1_7EA8DD3228559031 : public ::System::Object
{
public:
	::Class_2_60FFEACBA22D448A_Class_1_F1AD72368E0D7BE3_5* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60FFEACBA22D448A_CLASS_1_7EA8DD3228559031__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F85485D80BBD001F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_60FFEACBA22D448A_CLASS_1_7EA8DD3228559031_METHOD_1_F85485D80BBD001F_OFFSET))(this, a1);
	}
};
