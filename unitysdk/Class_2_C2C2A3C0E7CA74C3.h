#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UINewsStandContentWidgetController; }
namespace MoleMole { class UINewsStandHeadLineWidgetController; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_C2C2A3C0E7CA74C3_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x133943E0)
#define CLASS_2_C2C2A3C0E7CA74C3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133944D0)
#define CLASS_2_C2C2A3C0E7CA74C3_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x13394260)
#define CLASS_2_C2C2A3C0E7CA74C3__CTOR_OFFSET UNITYSDK_OFFSET(0x133944C0)

inline static constexpr unsigned int Class_2_C2C2A3C0E7CA74C3_TypeDefinitionIndex = 74260;

class Class_2_C2C2A3C0E7CA74C3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UINewsStandContentWidgetController*>* Field_2_1; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UINewsStandHeadLineWidgetController*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2C2A3C0E7CA74C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C2C2A3C0E7CA74C3_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2C2A3C0E7CA74C3_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C2C2A3C0E7CA74C3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
