#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_61D4C9C3A09F6B77_Class_2_5783D77919246473;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_61D4C9C3A09F6B77_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x15563730)
#define CLASS_2_61D4C9C3A09F6B77_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155637E0)
#define CLASS_2_61D4C9C3A09F6B77_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x15563590)
#define CLASS_2_61D4C9C3A09F6B77__CTOR_OFFSET UNITYSDK_OFFSET(0x155637D0)

inline static constexpr unsigned int Class_2_61D4C9C3A09F6B77_TypeDefinitionIndex = 69741;

class Class_2_61D4C9C3A09F6B77 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILinearProgressBar* Field_2_6; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_61D4C9C3A09F6B77_Class_2_5783D77919246473*>* Field_2_0; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_61D4C9C3A09F6B77_Class_2_5783D77919246473*>* Field_2_7; // 0x28
	::UnityEngine::Transform* Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61D4C9C3A09F6B77__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_61D4C9C3A09F6B77_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_61D4C9C3A09F6B77_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61D4C9C3A09F6B77_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
