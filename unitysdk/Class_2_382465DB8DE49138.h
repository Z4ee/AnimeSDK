#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace MoleMole { class UIMiniUIGameLevelSelectWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_382465DB8DE49138_METHOD_2_126E80929745C68C_OFFSET UNITYSDK_OFFSET(0xF3C9FC0)
#define CLASS_2_382465DB8DE49138_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xF3C9DB0)
#define CLASS_2_382465DB8DE49138_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xF3CA2F0)
#define CLASS_2_382465DB8DE49138_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0xF3CA1A0)
#define CLASS_2_382465DB8DE49138_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF3CA400)
#define CLASS_2_382465DB8DE49138__CTOR_OFFSET UNITYSDK_OFFSET(0xF3CA3F0)

inline static constexpr unsigned int Class_2_382465DB8DE49138_TypeDefinitionIndex = 74865;

class Class_2_382465DB8DE49138 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralRewardListBtnWidgetController*>* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_5; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIMiniUIGameLevelSelectWidgetController*>*>* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382465DB8DE49138__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_382465DB8DE49138_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIMiniUIGameLevelSelectWidgetController*>*>* Method_2_126E80929745C68C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIMiniUIGameLevelSelectWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_382465DB8DE49138_METHOD_2_126E80929745C68C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_382465DB8DE49138_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_382465DB8DE49138_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_382465DB8DE49138_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
