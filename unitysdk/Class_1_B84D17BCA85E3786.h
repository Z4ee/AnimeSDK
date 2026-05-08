#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_91F5B5FCD8262EE8_Enum_3_A626A12B886B3470.h"
#include "unitysdk/Class_1_B84D17BCA85E3786_Enum_3_FC96C90566106EC8.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B84D17BCA85E3786_METHOD_1_2B23DF6E4BD6545A_OFFSET UNITYSDK_OFFSET(0x114B0B30)
#define CLASS_1_B84D17BCA85E3786_METHOD_1_46050A28FEACF46E_OFFSET UNITYSDK_OFFSET(0x114B0BE0)
#define CLASS_1_B84D17BCA85E3786__CCTOR_OFFSET UNITYSDK_OFFSET(0x114B0B20)

inline static constexpr unsigned int Class_1_B84D17BCA85E3786_TypeDefinitionIndex = 44975;

class Class_1_B84D17BCA85E3786 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B84D17BCA85E3786_TypeDefinitionIndex)->GetStaticField(0x121F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B84D17BCA85E3786__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_2B23DF6E4BD6545A(::MoleMole::EntityHandle a1, ::Class_1_B84D17BCA85E3786_Enum_3_FC96C90566106EC8 a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::Class_1_B84D17BCA85E3786_Enum_3_FC96C90566106EC8))((::PBYTE)hIl2Cpp + CLASS_1_B84D17BCA85E3786_METHOD_1_2B23DF6E4BD6545A_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_46050A28FEACF46E(::MoleMole::EntityHandle a1, ::Class_1_B84D17BCA85E3786_Enum_3_FC96C90566106EC8 a2, ::Class_1_91F5B5FCD8262EE8_Enum_3_A626A12B886B3470 a3)
	{
		return ((::System::Single(*)(::MoleMole::EntityHandle, ::Class_1_B84D17BCA85E3786_Enum_3_FC96C90566106EC8, ::Class_1_91F5B5FCD8262EE8_Enum_3_A626A12B886B3470))((::PBYTE)hIl2Cpp + CLASS_1_B84D17BCA85E3786_METHOD_1_46050A28FEACF46E_OFFSET))(a1, a2, a3);
	}
};
