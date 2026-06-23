#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuInputConfig; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class LayoutElement; }

#define CLASS_2_42DB6E38DF4A43B3_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x137DAB00)
#define CLASS_2_42DB6E38DF4A43B3_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x137DAD30)
#define CLASS_2_42DB6E38DF4A43B3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x137DAE00)
#define CLASS_2_42DB6E38DF4A43B3__CTOR_OFFSET UNITYSDK_OFFSET(0x137DADF0)

inline static constexpr unsigned int Class_2_42DB6E38DF4A43B3_TypeDefinitionIndex = 79644;

class Class_2_42DB6E38DF4A43B3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::UnityEngine::UI::HorizontalLayoutGroup* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UIControllerExtensionData* Field_2_1; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x48
	::UnityEngine::UI::LayoutElement* Field_2_2; // 0x50
	::MoleMole::UIMainCityMiniMenuInputConfig* Field_2_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42DB6E38DF4A43B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_42DB6E38DF4A43B3_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_42DB6E38DF4A43B3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42DB6E38DF4A43B3_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
