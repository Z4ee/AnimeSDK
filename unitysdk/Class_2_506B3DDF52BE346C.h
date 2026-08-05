#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_506B3DDF52BE346C_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x12D8ACF0)
#define CLASS_2_506B3DDF52BE346C_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x12D8AEC0)
#define CLASS_2_506B3DDF52BE346C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12D8B000)
#define CLASS_2_506B3DDF52BE346C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8AFF0)

inline static constexpr unsigned int Class_2_506B3DDF52BE346C_TypeDefinitionIndex = 75390;

class Class_2_506B3DDF52BE346C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralNewHintWidgetController*>* Field_2_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_506B3DDF52BE346C_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
