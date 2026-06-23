#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_729B3C532A647313_Class_2_2FFF13C5B6E9FCD3_1;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_729B3C532A647313_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12C39260)
#define CLASS_2_729B3C532A647313_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x12C39060)
#define CLASS_2_729B3C532A647313_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12C39310)
#define CLASS_2_729B3C532A647313__CTOR_OFFSET UNITYSDK_OFFSET(0x12C39300)

inline static constexpr unsigned int Class_2_729B3C532A647313_TypeDefinitionIndex = 58652;

class Class_2_729B3C532A647313 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_729B3C532A647313_Class_2_2FFF13C5B6E9FCD3_1*>* Field_2_4; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_729B3C532A647313_Class_2_2FFF13C5B6E9FCD3_1*>* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::MonoUITableScrollV2* Field_2_3; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48
	::UnityEngine::RectTransform* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_729B3C532A647313__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_729B3C532A647313_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_729B3C532A647313_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_729B3C532A647313_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
