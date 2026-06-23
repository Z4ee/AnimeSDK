#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOverlordFeastStarRowWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_04BCD6E1EE335F38_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x11AEE920)
#define CLASS_2_04BCD6E1EE335F38_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x11AEE6E0)
#define CLASS_2_04BCD6E1EE335F38_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11AEEA80)
#define CLASS_2_04BCD6E1EE335F38__CTOR_OFFSET UNITYSDK_OFFSET(0x11AEEA70)

inline static constexpr unsigned int Class_2_04BCD6E1EE335F38_TypeDefinitionIndex = 70787;

class Class_2_04BCD6E1EE335F38 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIOverlordFeastStarRowWidgetController*>* Field_2_6; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x40
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIOverlordFeastStarRowWidgetController*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04BCD6E1EE335F38__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04BCD6E1EE335F38_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04BCD6E1EE335F38_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04BCD6E1EE335F38_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
