#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_CEE52F1BCA70CAAC_1_METHOD_2_4C9CB642EC86F4C4_OFFSET UNITYSDK_OFFSET(0x1BC3C550)
#define CLASS_2_CEE52F1BCA70CAAC_1_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x1BC3C2F0)
#define CLASS_2_CEE52F1BCA70CAAC_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1BC3C6A0)
#define CLASS_2_CEE52F1BCA70CAAC_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1BC3C770)
#define CLASS_2_CEE52F1BCA70CAAC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3C760)

inline static constexpr unsigned int Class_2_CEE52F1BCA70CAAC_1_TypeDefinitionIndex = 78067;

class Class_2_CEE52F1BCA70CAAC_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_9; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::MoleMole::MonoGamepadSelectable* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_11; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x50
	::UnityEngine::GameObject* Field_2_4; // 0x58
	::UnityEngine::GameObject* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE52F1BCA70CAAC_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CEE52F1BCA70CAAC_1_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CEE52F1BCA70CAAC_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE52F1BCA70CAAC_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_4C9CB642EC86F4C4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CEE52F1BCA70CAAC_1_METHOD_2_4C9CB642EC86F4C4_OFFSET))(this, a1, a2);
	}
};
