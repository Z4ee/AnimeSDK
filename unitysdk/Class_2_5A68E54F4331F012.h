#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_5A68E54F4331F012_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x125D5BB0)
#define CLASS_2_5A68E54F4331F012_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x125D5D60)
#define CLASS_2_5A68E54F4331F012_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x125D5E70)
#define CLASS_2_5A68E54F4331F012__CTOR_OFFSET UNITYSDK_OFFSET(0x125D5E60)

inline static constexpr unsigned int Class_2_5A68E54F4331F012_TypeDefinitionIndex = 45612;

class Class_2_5A68E54F4331F012 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::Animation* Field_2_4; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A68E54F4331F012__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5A68E54F4331F012_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A68E54F4331F012_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5A68E54F4331F012_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
