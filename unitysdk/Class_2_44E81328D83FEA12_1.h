#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInterKnotOverNightPostWidgetController; }
namespace MoleMole { class UIInterKnotPageConfig; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_44E81328D83FEA12_1_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0x13D322B0)
#define CLASS_2_44E81328D83FEA12_1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x13D32450)
#define CLASS_2_44E81328D83FEA12_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13D32540)
#define CLASS_2_44E81328D83FEA12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13D32530)

inline static constexpr unsigned int Class_2_44E81328D83FEA12_1_TypeDefinitionIndex = 69710;

class Class_2_44E81328D83FEA12_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::MoleMole::UIInterKnotPageConfig* Field_2_2; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIInterKnotOverNightPostWidgetController*>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44E81328D83FEA12_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_44E81328D83FEA12_1_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44E81328D83FEA12_1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_44E81328D83FEA12_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
