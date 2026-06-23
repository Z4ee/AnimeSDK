#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_383BD95DA56206F0_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x15D52230)
#define CLASS_2_383BD95DA56206F0_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x15D523E0)
#define CLASS_2_383BD95DA56206F0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15D524B0)
#define CLASS_2_383BD95DA56206F0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D524A0)

inline static constexpr unsigned int Class_2_383BD95DA56206F0_TypeDefinitionIndex = 87351;

class Class_2_383BD95DA56206F0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_4; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::UnityEngine::UI::Text* Field_2_3; // 0x28
	::MonoUITableScrollV2* Field_2_5; // 0x30
	::MonoUITableScrollV2* Field_2_0; // 0x38
	::UnityEngine::UI::Text* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_383BD95DA56206F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_383BD95DA56206F0_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_383BD95DA56206F0_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_383BD95DA56206F0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
