#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIBPItemIconRowWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_A0E8715294BAB4D5_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x17001BE0)
#define CLASS_2_A0E8715294BAB4D5_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x170019E0)
#define CLASS_2_A0E8715294BAB4D5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17001CF0)
#define CLASS_2_A0E8715294BAB4D5__CTOR_OFFSET UNITYSDK_OFFSET(0x17001CE0)

inline static constexpr unsigned int Class_2_A0E8715294BAB4D5_TypeDefinitionIndex = 56650;

class Class_2_A0E8715294BAB4D5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIBPItemIconRowWidgetController*>* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_4; // 0x28
	::UnityEngine::UI::Text* Field_2_1; // 0x30
	::UnityEngine::GameObject* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E8715294BAB4D5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0E8715294BAB4D5_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E8715294BAB4D5_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0E8715294BAB4D5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
