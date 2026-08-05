#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_F2F58FC08BDC2A85_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x141BEBB0)
#define CLASS_2_F2F58FC08BDC2A85_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x141BED60)
#define CLASS_2_F2F58FC08BDC2A85_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x141BEE70)
#define CLASS_2_F2F58FC08BDC2A85__CTOR_OFFSET UNITYSDK_OFFSET(0x141BEE60)

inline static constexpr unsigned int Class_2_F2F58FC08BDC2A85_TypeDefinitionIndex = 47793;

class Class_2_F2F58FC08BDC2A85 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x30
	::UnityEngine::Animation* Field_2_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2F58FC08BDC2A85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2F58FC08BDC2A85_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2F58FC08BDC2A85_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2F58FC08BDC2A85_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
