#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2897C046542BCFF9.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_6D46C2B510FC0355_Class_3_553F838DE83F89EF_1;
class Class_1_97E659ED8D5D259C_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
template <typename T1, typename T2> class Class_1_E810F664D8A209D6;

#define CLASS_1_6D46C2B510FC0355_METHOD_1_2ADDC85169A509AB_OFFSET UNITYSDK_OFFSET(0x13378E60)
#define CLASS_1_6D46C2B510FC0355_METHOD_1_39105B408D9529DE_OFFSET UNITYSDK_OFFSET(0x13379060)
#define CLASS_1_6D46C2B510FC0355_METHOD_1_567F66465B962574_OFFSET UNITYSDK_OFFSET(0x13379190)
#define CLASS_1_6D46C2B510FC0355_METHOD_1_90657B7E7EF7E258_OFFSET UNITYSDK_OFFSET(0x13379180)
#define CLASS_1_6D46C2B510FC0355_METHOD_1_D001E91AEC8A16BE_OFFSET UNITYSDK_OFFSET(0x13378CE0)
#define CLASS_1_6D46C2B510FC0355_METHOD_1_D76A3EC4BA9101E0_OFFSET UNITYSDK_OFFSET(0x13379050)
#define CLASS_1_6D46C2B510FC0355_METHOD_1_FCC065B42111D65F_OFFSET UNITYSDK_OFFSET(0x13379040)
#define CLASS_1_6D46C2B510FC0355__CTOR_OFFSET UNITYSDK_OFFSET(0x13379030)

inline static constexpr unsigned int Class_1_6D46C2B510FC0355_TypeDefinitionIndex = 53942;

class Class_1_6D46C2B510FC0355 : public ::System::Object
{
public:
	::Class_1_E810F664D8A209D6<::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*>* Field_1_1; // 0x10
	::Class_1_6D46C2B510FC0355_Class_3_553F838DE83F89EF_1* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D46C2B510FC0355__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D001E91AEC8A16BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D46C2B510FC0355_METHOD_1_D001E91AEC8A16BE_OFFSET))(this);
	}

	::System::Void Method_1_2ADDC85169A509AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D46C2B510FC0355_METHOD_1_2ADDC85169A509AB_OFFSET))(this);
	}

	::System::Void Method_1_FCC065B42111D65F(::Class_1_E810F664D8A209D6<::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E810F664D8A209D6<::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D46C2B510FC0355_METHOD_1_FCC065B42111D65F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*>* Method_1_D76A3EC4BA9101E0()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D46C2B510FC0355_METHOD_1_D76A3EC4BA9101E0_OFFSET))(this);
	}

	::Class_1_97E659ED8D5D259C_1* Method_1_39105B408D9529DE(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_97E659ED8D5D259C_1* a2)
	{
		return ((::Class_1_97E659ED8D5D259C_1*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*))((::PBYTE)hIl2Cpp + CLASS_1_6D46C2B510FC0355_METHOD_1_39105B408D9529DE_OFFSET))(this, a1, a2);
	}

	::Class_1_E810F664D8A209D6<::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*>* Method_1_90657B7E7EF7E258()
	{
		return ((::Class_1_E810F664D8A209D6<::MoleMole::HollowChessboard::HollowCell, ::Class_1_97E659ED8D5D259C_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D46C2B510FC0355_METHOD_1_90657B7E7EF7E258_OFFSET))(this);
	}

	::System::Void Method_1_567F66465B962574(::MoleMole::HollowChessboard::HollowCell a1, ::Enum_3_2897C046542BCFF9 a2, ::Class_1_97E659ED8D5D259C_1* a3, ::Class_1_97E659ED8D5D259C_1* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_2897C046542BCFF9, ::Class_1_97E659ED8D5D259C_1*, ::Class_1_97E659ED8D5D259C_1*))((::PBYTE)hIl2Cpp + CLASS_1_6D46C2B510FC0355_METHOD_1_567F66465B962574_OFFSET))(this, a1, a2, a3, a4);
	}
};
