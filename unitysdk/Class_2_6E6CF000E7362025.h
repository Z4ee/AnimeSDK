#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6E6CF000E7362025_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13F05290)
#define CLASS_2_6E6CF000E7362025_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x13F05060)
#define CLASS_2_6E6CF000E7362025_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13F05320)
#define CLASS_2_6E6CF000E7362025__CTOR_OFFSET UNITYSDK_OFFSET(0x13F05310)

inline static constexpr unsigned int Class_2_6E6CF000E7362025_TypeDefinitionIndex = 40893;

class Class_2_6E6CF000E7362025 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_6; // 0x30
	::Class_2_134E5210FBBAC6E5* Field_2_3; // 0x38
	::UnityEngine::Transform* Field_2_2; // 0x40
	::UnityEngine::RectTransform* Field_2_5; // 0x48
	::UnityEngine::RectTransform* Field_2_8; // 0x50
	::UnityEngine::RectTransform* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E6CF000E7362025__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6E6CF000E7362025_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E6CF000E7362025_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6E6CF000E7362025_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
