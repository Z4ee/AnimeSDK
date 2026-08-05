#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_803836DC4A21C6C8_Class_2_2B4A80331696625A_7;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_803836DC4A21C6C8_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1612CA20)
#define CLASS_2_803836DC4A21C6C8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1612CB20)
#define CLASS_2_803836DC4A21C6C8_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1612C7C0)
#define CLASS_2_803836DC4A21C6C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1612CB10)

inline static constexpr unsigned int Class_2_803836DC4A21C6C8_TypeDefinitionIndex = 60908;

class Class_2_803836DC4A21C6C8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::UnityEngine::UI::Text* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x38
	::UnityEngine::GameObject* Field_2_1; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_803836DC4A21C6C8_Class_2_2B4A80331696625A_7*>* Field_2_11; // 0x50
	::MonoUITableScrollV2* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_803836DC4A21C6C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_803836DC4A21C6C8_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_803836DC4A21C6C8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_803836DC4A21C6C8_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
