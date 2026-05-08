#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHadalTabRowWidgetController; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_12BBA24BA7419E86_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1307EF20)
#define CLASS_2_12BBA24BA7419E86_METHOD_2_BE10339521CE8C61_OFFSET UNITYSDK_OFFSET(0x1307EDC0)
#define CLASS_2_12BBA24BA7419E86_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1307EFD0)
#define CLASS_2_12BBA24BA7419E86__CTOR_OFFSET UNITYSDK_OFFSET(0x1307EFC0)

inline static constexpr unsigned int Class_2_12BBA24BA7419E86_TypeDefinitionIndex = 79850;

class Class_2_12BBA24BA7419E86 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIHadalTabRowWidgetController*>* Field_2_1; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIHadalTabRowWidgetController*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12BBA24BA7419E86__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BE10339521CE8C61(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12BBA24BA7419E86_METHOD_2_BE10339521CE8C61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12BBA24BA7419E86_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12BBA24BA7419E86_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
