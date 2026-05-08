#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_BEB31AE88CD84CC5_Class_2_B55295F21B8C8269;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_BEB31AE88CD84CC5_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xDB7FAE0)
#define CLASS_2_BEB31AE88CD84CC5_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0xDB7F8C0)
#define CLASS_2_BEB31AE88CD84CC5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xDB7FBE0)
#define CLASS_2_BEB31AE88CD84CC5__CTOR_OFFSET UNITYSDK_OFFSET(0xDB7FBD0)

inline static constexpr unsigned int Class_2_BEB31AE88CD84CC5_TypeDefinitionIndex = 68971;

class Class_2_BEB31AE88CD84CC5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_6; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_BEB31AE88CD84CC5_Class_2_B55295F21B8C8269*>* Field_2_3; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_BEB31AE88CD84CC5_Class_2_B55295F21B8C8269*>* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEB31AE88CD84CC5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BEB31AE88CD84CC5_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BEB31AE88CD84CC5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEB31AE88CD84CC5_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
