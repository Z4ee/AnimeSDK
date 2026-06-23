#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_647FD0778688D46A_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x127C6950)
#define CLASS_2_647FD0778688D46A_METHOD_2_9B59B42BE13F39B8_OFFSET UNITYSDK_OFFSET(0x127C6800)
#define CLASS_2_647FD0778688D46A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x127C69E0)
#define CLASS_2_647FD0778688D46A__CTOR_OFFSET UNITYSDK_OFFSET(0x127C69D0)

inline static constexpr unsigned int Class_2_647FD0778688D46A_TypeDefinitionIndex = 58666;

class Class_2_647FD0778688D46A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_647FD0778688D46A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9B59B42BE13F39B8(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_647FD0778688D46A_METHOD_2_9B59B42BE13F39B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_647FD0778688D46A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_647FD0778688D46A_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
