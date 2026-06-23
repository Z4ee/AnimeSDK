#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendSystemWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_14B8F1A93C1DC200_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x15986BC0)
#define CLASS_2_14B8F1A93C1DC200_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x15986DE0)
#define CLASS_2_14B8F1A93C1DC200_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15986E90)
#define CLASS_2_14B8F1A93C1DC200__CTOR_OFFSET UNITYSDK_OFFSET(0x15986E80)

inline static constexpr unsigned int Class_2_14B8F1A93C1DC200_TypeDefinitionIndex = 87375;

class Class_2_14B8F1A93C1DC200 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_134E5210FBBAC6E5* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UITabButton* Field_2_3; // 0x38
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIFriendSystemWidgetController*>* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14B8F1A93C1DC200_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
