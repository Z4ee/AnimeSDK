#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_949134FE88CA671F_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x165B9330)
#define CLASS_2_949134FE88CA671F_METHOD_2_26C18447D3F62FED_OFFSET UNITYSDK_OFFSET(0x165B9490)
#define CLASS_2_949134FE88CA671F_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x165B95E0)
#define CLASS_2_949134FE88CA671F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x165B96B0)
#define CLASS_2_949134FE88CA671F__CTOR_OFFSET UNITYSDK_OFFSET(0x165B96A0)

inline static constexpr unsigned int Class_2_949134FE88CA671F_TypeDefinitionIndex = 78618;

class Class_2_949134FE88CA671F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_26C18447D3F62FED(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F_METHOD_2_26C18447D3F62FED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
