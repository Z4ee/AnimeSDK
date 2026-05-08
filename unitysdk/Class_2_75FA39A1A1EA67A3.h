#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIActivitySearchObjectWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_75FA39A1A1EA67A3_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xF0C61D0)
#define CLASS_2_75FA39A1A1EA67A3_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0xF0C5FA0)
#define CLASS_2_75FA39A1A1EA67A3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF0C6310)
#define CLASS_2_75FA39A1A1EA67A3__CTOR_OFFSET UNITYSDK_OFFSET(0xF0C6300)

inline static constexpr unsigned int Class_2_75FA39A1A1EA67A3_TypeDefinitionIndex = 55489;

class Class_2_75FA39A1A1EA67A3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::Class_3_30A064D7BE47C07D<::MoleMole::UIActivitySearchObjectWidgetController*>* Field_2_1; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x40

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
