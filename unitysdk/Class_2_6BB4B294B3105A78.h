#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_6BB4B294B3105A78_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x130AD470)
#define CLASS_2_6BB4B294B3105A78_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x130AD680)
#define CLASS_2_6BB4B294B3105A78_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x130AD770)
#define CLASS_2_6BB4B294B3105A78__CTOR_OFFSET UNITYSDK_OFFSET(0x130AD760)

inline static constexpr unsigned int Class_2_6BB4B294B3105A78_TypeDefinitionIndex = 52289;

class Class_2_6BB4B294B3105A78 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIDoubleTipsInfoWidgetController*>* Field_2_5; // 0x38
	::UnityEngine::UI::Text* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UITabButton* Field_2_2; // 0x48
	::UnityEngine::GameObject* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BB4B294B3105A78__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6BB4B294B3105A78_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6BB4B294B3105A78_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BB4B294B3105A78_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
