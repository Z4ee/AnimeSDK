#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_506B3DDF52BE346C_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x159BF810)
#define CLASS_2_506B3DDF52BE346C_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x159BF9E0)
#define CLASS_2_506B3DDF52BE346C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x159BFB20)
#define CLASS_2_506B3DDF52BE346C__CTOR_OFFSET UNITYSDK_OFFSET(0x159BFB10)

inline static constexpr unsigned int Class_2_506B3DDF52BE346C_TypeDefinitionIndex = 72560;

class Class_2_506B3DDF52BE346C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralNewHintWidgetController*>* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
