#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2019B3C14943B358_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1556AA20)
#define CLASS_2_2019B3C14943B358_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x1556ABD0)
#define CLASS_2_2019B3C14943B358_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1556ACA0)
#define CLASS_2_2019B3C14943B358__CTOR_OFFSET UNITYSDK_OFFSET(0x1556AC90)

inline static constexpr unsigned int Class_2_2019B3C14943B358_TypeDefinitionIndex = 40343;

class Class_2_2019B3C14943B358 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_6; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2019B3C14943B358__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2019B3C14943B358_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2019B3C14943B358_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2019B3C14943B358_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
