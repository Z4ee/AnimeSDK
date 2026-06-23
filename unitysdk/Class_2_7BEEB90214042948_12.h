#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7BEEB90214042948_12_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1284F900)
#define CLASS_2_7BEEB90214042948_12_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1284F9B0)
#define CLASS_2_7BEEB90214042948_12_METHOD_2_E29396CF1CC8FD8D_OFFSET UNITYSDK_OFFSET(0x1284F720)
#define CLASS_2_7BEEB90214042948_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1284F9A0)

inline static constexpr unsigned int Class_2_7BEEB90214042948_12_TypeDefinitionIndex = 71759;

class Class_2_7BEEB90214042948_12 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E29396CF1CC8FD8D(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_12_METHOD_2_E29396CF1CC8FD8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_12_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_12_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
