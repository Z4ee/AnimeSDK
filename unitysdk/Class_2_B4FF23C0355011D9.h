#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B4FF23C0355011D9_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1520DF70)
#define CLASS_2_B4FF23C0355011D9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1520DF10)
#define CLASS_2_B4FF23C0355011D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1520E000)
#define CLASS_2_B4FF23C0355011D9__ONBIND_OFFSET UNITYSDK_OFFSET(0x1520DE00)

inline static constexpr unsigned int Class_2_B4FF23C0355011D9_TypeDefinitionIndex = 69034;

class Class_2_B4FF23C0355011D9 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Transform* Field_2_2; // 0x60
	::UnityEngine::Transform* Field_2_3; // 0x68
	::UnityEngine::ParticleSystem* Field_2_4; // 0x70
	::System::Boolean Field_2_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4FF23C0355011D9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4FF23C0355011D9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4FF23C0355011D9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4FF23C0355011D9_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}
};
