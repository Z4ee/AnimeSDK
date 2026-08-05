#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_D561AC109D3FACC7_Class_2_A73E53DDC2FAC314;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_D561AC109D3FACC7_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x17CE91D0)
#define CLASS_2_D561AC109D3FACC7_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x17CE8FC0)
#define CLASS_2_D561AC109D3FACC7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17CE92F0)
#define CLASS_2_D561AC109D3FACC7__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE92E0)

inline static constexpr unsigned int Class_2_D561AC109D3FACC7_TypeDefinitionIndex = 43118;

class Class_2_D561AC109D3FACC7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_D561AC109D3FACC7_Class_2_A73E53DDC2FAC314*>* Field_2_1; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_D561AC109D3FACC7_Class_2_A73E53DDC2FAC314*>* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D561AC109D3FACC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D561AC109D3FACC7_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D561AC109D3FACC7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D561AC109D3FACC7_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
