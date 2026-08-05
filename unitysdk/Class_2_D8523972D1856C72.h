#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_D8523972D1856C72_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x12AD3BE0)
#define CLASS_2_D8523972D1856C72_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x12AD3DB0)
#define CLASS_2_D8523972D1856C72_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12AD3EA0)
#define CLASS_2_D8523972D1856C72__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD3E90)

inline static constexpr unsigned int Class_2_D8523972D1856C72_TypeDefinitionIndex = 67717;

class Class_2_D8523972D1856C72 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_4; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_7; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x38
	::UnityEngine::UI::Text* Field_2_5; // 0x40
	::UnityEngine::Transform* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8523972D1856C72__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D8523972D1856C72_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8523972D1856C72_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D8523972D1856C72_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
