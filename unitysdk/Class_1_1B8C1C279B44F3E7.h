#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F1D8AFEA14313EF.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_1B8C1C279B44F3E7__CTOR_OFFSET UNITYSDK_OFFSET(0x10F75E00)

inline static constexpr unsigned int Class_1_1B8C1C279B44F3E7_TypeDefinitionIndex = 85578;

class Class_1_1B8C1C279B44F3E7 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_0; // 0x10
	::Class_1_D375C91CCE5D3999* Field_1_2; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::Enum_3_7F1D8AFEA14313EF Field_1_1; // 0x24
	::System::Single Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B8C1C279B44F3E7__CTOR_OFFSET))(this);
	}
};
