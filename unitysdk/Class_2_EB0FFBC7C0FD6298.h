#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define CLASS_2_EB0FFBC7C0FD6298_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x13E6DE10)
#define CLASS_2_EB0FFBC7C0FD6298_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13E6DEE0)
#define CLASS_2_EB0FFBC7C0FD6298_METHOD_2_F485ED5438CB5FFD_OFFSET UNITYSDK_OFFSET(0x13E6DCC0)
#define CLASS_2_EB0FFBC7C0FD6298__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6DED0)

inline static constexpr unsigned int Class_2_EB0FFBC7C0FD6298_TypeDefinitionIndex = 42831;

class Class_2_EB0FFBC7C0FD6298 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::UnityEngine::Animation* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB0FFBC7C0FD6298__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F485ED5438CB5FFD(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EB0FFBC7C0FD6298_METHOD_2_F485ED5438CB5FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB0FFBC7C0FD6298_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_EB0FFBC7C0FD6298_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
