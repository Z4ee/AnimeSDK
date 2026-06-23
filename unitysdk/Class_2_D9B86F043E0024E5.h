#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D9B86F043E0024E5_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1AC4EDE0)
#define CLASS_2_D9B86F043E0024E5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1AC4EE90)
#define CLASS_2_D9B86F043E0024E5_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x1AC4EC40)
#define CLASS_2_D9B86F043E0024E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC4EE80)

inline static constexpr unsigned int Class_2_D9B86F043E0024E5_TypeDefinitionIndex = 44012;

class Class_2_D9B86F043E0024E5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::MonoUITableScrollV2* Field_2_2; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9B86F043E0024E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D9B86F043E0024E5_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D9B86F043E0024E5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9B86F043E0024E5_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
