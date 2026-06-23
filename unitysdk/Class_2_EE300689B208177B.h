#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_EE300689B208177B_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x18917B80)
#define CLASS_2_EE300689B208177B_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x18917D50)
#define CLASS_2_EE300689B208177B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18917E00)
#define CLASS_2_EE300689B208177B__CTOR_OFFSET UNITYSDK_OFFSET(0x18917DF0)

inline static constexpr unsigned int Class_2_EE300689B208177B_TypeDefinitionIndex = 72259;

class Class_2_EE300689B208177B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::Class_2_134E5210FBBAC6E5* Field_2_3; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::MonoUITableScrollV2* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE300689B208177B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE300689B208177B_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE300689B208177B_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EE300689B208177B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
