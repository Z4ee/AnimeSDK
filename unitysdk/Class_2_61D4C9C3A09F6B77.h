#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_61D4C9C3A09F6B77_Class_2_5783D77919246473;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILinearProgressBar; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_61D4C9C3A09F6B77_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xEBF7280)
#define CLASS_2_61D4C9C3A09F6B77_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xEBF7330)
#define CLASS_2_61D4C9C3A09F6B77_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0xEBF70E0)
#define CLASS_2_61D4C9C3A09F6B77__CTOR_OFFSET UNITYSDK_OFFSET(0xEBF7320)

inline static constexpr unsigned int Class_2_61D4C9C3A09F6B77_TypeDefinitionIndex = 49202;

class Class_2_61D4C9C3A09F6B77 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_61D4C9C3A09F6B77_Class_2_5783D77919246473*>* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILinearProgressBar* Field_2_2; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_61D4C9C3A09F6B77_Class_2_5783D77919246473*>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61D4C9C3A09F6B77__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_61D4C9C3A09F6B77_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_61D4C9C3A09F6B77_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61D4C9C3A09F6B77_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
