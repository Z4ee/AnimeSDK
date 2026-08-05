#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Battle/NPCSinglePlayableAnimLayer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"

namespace UnityEngine { class AvatarMask; }

#define CLASS_1_446AB32268DB4603_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x11426B00)
#define CLASS_1_446AB32268DB4603_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x11426A40)
#define CLASS_1_446AB32268DB4603_METHOD_1_9CDF01028060AD77_OFFSET UNITYSDK_OFFSET(0x114269B0)
#define CLASS_1_446AB32268DB4603_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11426B60)
#define CLASS_1_446AB32268DB4603__CTOR_OFFSET UNITYSDK_OFFSET(0x114269A0)

inline static constexpr unsigned int Class_1_446AB32268DB4603_TypeDefinitionIndex = 41880;

class Class_1_446AB32268DB4603 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_11; // 0x10
	::UnityEngine::AvatarMask* Field_1_4; // 0x30
	::MoleMole::Battle::NPCSinglePlayableAnimLayer Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x3C
	::UnityEngine::Animations::AnimationClipPlayable Field_1_3; // 0x40
	::System::Int32 Field_1_7; // 0x50
	::System::Single Field_1_0; // 0x54
	::System::Single Field_1_1; // 0x58
	::System::Single Field_1_2; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446AB32268DB4603__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9CDF01028060AD77(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_446AB32268DB4603_METHOD_1_9CDF01028060AD77_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_446AB32268DB4603_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_446AB32268DB4603_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446AB32268DB4603_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
