#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_F6952FD068449A3A_1_Class_2_CC03AAEE6FCC732C_15;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_F6952FD068449A3A_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x128A64C0)
#define CLASS_2_F6952FD068449A3A_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x128A6570)
#define CLASS_2_F6952FD068449A3A_1_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x128A6320)
#define CLASS_2_F6952FD068449A3A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x128A6560)

inline static constexpr unsigned int Class_2_F6952FD068449A3A_1_TypeDefinitionIndex = 79576;

class Class_2_F6952FD068449A3A_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_F6952FD068449A3A_1_Class_2_CC03AAEE6FCC732C_15*>* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6952FD068449A3A_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F6952FD068449A3A_1_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6952FD068449A3A_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F6952FD068449A3A_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
