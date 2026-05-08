#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_BCE2B75EE25AA24E_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x159B1690)
#define CLASS_2_BCE2B75EE25AA24E_1_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x159B1470)
#define CLASS_2_BCE2B75EE25AA24E_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x159B1760)
#define CLASS_2_BCE2B75EE25AA24E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x159B1750)

inline static constexpr unsigned int Class_2_BCE2B75EE25AA24E_1_TypeDefinitionIndex = 45683;

class Class_2_BCE2B75EE25AA24E_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x18
	::UnityEngine::UI::Text* Field_2_4; // 0x20
	::MoleMole::MonoGamepadSelectable* Field_2_7; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_0; // 0x40
	::UnityEngine::GameObject* Field_2_3; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCE2B75EE25AA24E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCE2B75EE25AA24E_1_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCE2B75EE25AA24E_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCE2B75EE25AA24E_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
