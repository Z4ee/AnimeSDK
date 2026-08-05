#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_CD3DD745FAE9C3D4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14139D20)
#define CLASS_2_CD3DD745FAE9C3D4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14139DA0)
#define CLASS_2_CD3DD745FAE9C3D4_METHOD_2_F87973A9CF5B5F69_OFFSET UNITYSDK_OFFSET(0x14139B60)
#define CLASS_2_CD3DD745FAE9C3D4__CTOR_OFFSET UNITYSDK_OFFSET(0x14139D90)

inline static constexpr unsigned int Class_2_CD3DD745FAE9C3D4_TypeDefinitionIndex = 46463;

class Class_2_CD3DD745FAE9C3D4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_5; // 0x18
	::UnityEngine::UI::RawImage* Field_2_6; // 0x20
	::UnityEngine::CanvasGroup* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::UnityEngine::GameObject* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F87973A9CF5B5F69(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_METHOD_2_F87973A9CF5B5F69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CD3DD745FAE9C3D4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
