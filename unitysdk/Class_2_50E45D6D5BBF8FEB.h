#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_50E45D6D5BBF8FEB_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x1431BA80)
#define CLASS_2_50E45D6D5BBF8FEB_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x1431BC80)
#define CLASS_2_50E45D6D5BBF8FEB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1431BDC0)
#define CLASS_2_50E45D6D5BBF8FEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1431BDB0)

inline static constexpr unsigned int Class_2_50E45D6D5BBF8FEB_TypeDefinitionIndex = 68581;

class Class_2_50E45D6D5BBF8FEB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_9; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::UnityEngine::UI::Text* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50E45D6D5BBF8FEB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_50E45D6D5BBF8FEB_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_50E45D6D5BBF8FEB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50E45D6D5BBF8FEB_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
