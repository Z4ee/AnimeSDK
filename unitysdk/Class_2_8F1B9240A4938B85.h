#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_8F1B9240A4938B85_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x124894B0)
#define CLASS_2_8F1B9240A4938B85_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12489560)
#define CLASS_2_8F1B9240A4938B85_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x12489310)
#define CLASS_2_8F1B9240A4938B85__CTOR_OFFSET UNITYSDK_OFFSET(0x12489550)

inline static constexpr unsigned int Class_2_8F1B9240A4938B85_TypeDefinitionIndex = 72729;

class Class_2_8F1B9240A4938B85 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_3; // 0x18
	::UnityEngine::UI::Button* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F1B9240A4938B85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8F1B9240A4938B85_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8F1B9240A4938B85_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F1B9240A4938B85_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
