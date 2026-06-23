#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_38FEAE204BE53C7E_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x14EA13D0)
#define CLASS_2_38FEAE204BE53C7E_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x14EA1590)
#define CLASS_2_38FEAE204BE53C7E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14EA1680)
#define CLASS_2_38FEAE204BE53C7E__CTOR_OFFSET UNITYSDK_OFFSET(0x14EA1670)

inline static constexpr unsigned int Class_2_38FEAE204BE53C7E_TypeDefinitionIndex = 45226;

class Class_2_38FEAE204BE53C7E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x18
	::UnityEngine::Animation* Field_2_2; // 0x20
	::UnityEngine::Animation* Field_2_5; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FEAE204BE53C7E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38FEAE204BE53C7E_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FEAE204BE53C7E_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38FEAE204BE53C7E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
