#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C45458B6C2BEA204_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x11FB11E0)
#define CLASS_2_C45458B6C2BEA204_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11FB1270)
#define CLASS_2_C45458B6C2BEA204_METHOD_2_D25F539834051480_OFFSET UNITYSDK_OFFSET(0x11FB1000)
#define CLASS_2_C45458B6C2BEA204__CTOR_OFFSET UNITYSDK_OFFSET(0x11FB1260)

inline static constexpr unsigned int Class_2_C45458B6C2BEA204_TypeDefinitionIndex = 57957;

class Class_2_C45458B6C2BEA204 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x48
	::MonoUITableScrollV2* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C45458B6C2BEA204__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D25F539834051480(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C45458B6C2BEA204_METHOD_2_D25F539834051480_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C45458B6C2BEA204_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C45458B6C2BEA204_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
