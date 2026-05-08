#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendInfoWidgetController; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_9D4A1E4158F1CD49_METHOD_2_0A421A6D2D1A1BFD_OFFSET UNITYSDK_OFFSET(0xE4B93B0)
#define CLASS_2_9D4A1E4158F1CD49_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xE4B9530)
#define CLASS_2_9D4A1E4158F1CD49_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE4B95E0)
#define CLASS_2_9D4A1E4158F1CD49__CTOR_OFFSET UNITYSDK_OFFSET(0xE4B95D0)

inline static constexpr unsigned int Class_2_9D4A1E4158F1CD49_TypeDefinitionIndex = 51413;

class Class_2_9D4A1E4158F1CD49 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIFriendInfoWidgetController*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D4A1E4158F1CD49__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0A421A6D2D1A1BFD(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9D4A1E4158F1CD49_METHOD_2_0A421A6D2D1A1BFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9D4A1E4158F1CD49_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D4A1E4158F1CD49_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
