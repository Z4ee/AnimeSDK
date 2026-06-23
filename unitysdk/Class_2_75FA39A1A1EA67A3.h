#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIActivitySearchObjectWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_75FA39A1A1EA67A3_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x12B57D10)
#define CLASS_2_75FA39A1A1EA67A3_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x12B57AE0)
#define CLASS_2_75FA39A1A1EA67A3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B57E50)
#define CLASS_2_75FA39A1A1EA67A3__CTOR_OFFSET UNITYSDK_OFFSET(0x12B57E40)

inline static constexpr unsigned int Class_2_75FA39A1A1EA67A3_TypeDefinitionIndex = 75261;

class Class_2_75FA39A1A1EA67A3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivitySearchObjectWidgetController*>* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75FA39A1A1EA67A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_75FA39A1A1EA67A3_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_75FA39A1A1EA67A3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_75FA39A1A1EA67A3_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
