#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BD3EF046502B972.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_EA61C125529DDEBD_METHOD_2_AE035F54FA1ED001_OFFSET UNITYSDK_OFFSET(0x138B5100)
#define CLASS_2_EA61C125529DDEBD__CTOR_OFFSET UNITYSDK_OFFSET(0x138B4FA0)

inline static constexpr unsigned int Class_2_EA61C125529DDEBD_TypeDefinitionIndex = 42017;

class Class_2_EA61C125529DDEBD : public ::Class_1_5BD3EF046502B972
{
public:
	::UnityEngine::AnimationCurve* Field_2_1; // 0x20
	::MoleMole::Config::ConfigCameraNoise* Field_2_0; // 0x28
	::MoleMole::Cameras::VNoiseSettings* Field_2_7; // 0x30
	::UnityEngine::Vector3 Field_2_6; // 0x38
	::System::Single Field_2_5; // 0x44
	::System::Single Field_2_2; // 0x48
	::System::Single Field_2_3; // 0x4C

	::System::Void _ctor(::MoleMole::Config::ConfigCameraNoise* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraNoise*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_EA61C125529DDEBD__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::UICameraAtom Method_2_AE035F54FA1ED001(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_EA61C125529DDEBD_METHOD_2_AE035F54FA1ED001_OFFSET))(this, a1, a2, a3);
	}
};
