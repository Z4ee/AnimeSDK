#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOngoingTipsWidgetController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_709BDFCD92369193_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x12265FE0)
#define CLASS_2_709BDFCD92369193_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x12265DC0)
#define CLASS_2_709BDFCD92369193_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x122660B0)
#define CLASS_2_709BDFCD92369193__CTOR_OFFSET UNITYSDK_OFFSET(0x122660A0)

inline static constexpr unsigned int Class_2_709BDFCD92369193_TypeDefinitionIndex = 46072;

class Class_2_709BDFCD92369193 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_6; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIOngoingTipsWidgetController*>* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x40
	::UnityEngine::RectTransform* Field_2_1; // 0x48
	::UnityEngine::RectTransform* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_709BDFCD92369193__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_709BDFCD92369193_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_709BDFCD92369193_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_709BDFCD92369193_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
