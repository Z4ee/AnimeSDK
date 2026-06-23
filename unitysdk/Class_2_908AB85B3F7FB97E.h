#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIWishlistSkillItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_908AB85B3F7FB97E_METHOD_2_1EA8DC71148E403D_OFFSET UNITYSDK_OFFSET(0x140C7BF0)
#define CLASS_2_908AB85B3F7FB97E_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x140C79E0)
#define CLASS_2_908AB85B3F7FB97E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x140C7DD0)
#define CLASS_2_908AB85B3F7FB97E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x140C7EA0)
#define CLASS_2_908AB85B3F7FB97E__CTOR_OFFSET UNITYSDK_OFFSET(0x140C7E90)

inline static constexpr unsigned int Class_2_908AB85B3F7FB97E_TypeDefinitionIndex = 78948;

class Class_2_908AB85B3F7FB97E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_4; // 0x40
	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIWishlistSkillItemWidgetController*>*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIWishlistSkillItemWidgetController*>*>* Method_2_1EA8DC71148E403D(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIWishlistSkillItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E_METHOD_2_1EA8DC71148E403D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_908AB85B3F7FB97E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
