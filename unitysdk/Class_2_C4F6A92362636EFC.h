#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C4F6A92362636EFC_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x18120D50)
#define CLASS_2_C4F6A92362636EFC_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x18120F60)
#define CLASS_2_C4F6A92362636EFC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18121050)
#define CLASS_2_C4F6A92362636EFC__CTOR_OFFSET UNITYSDK_OFFSET(0x18121040)

inline static constexpr unsigned int Class_2_C4F6A92362636EFC_TypeDefinitionIndex = 47007;

class Class_2_C4F6A92362636EFC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_2; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F6A92362636EFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C4F6A92362636EFC_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4F6A92362636EFC_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C4F6A92362636EFC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
