#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B4FF23C0355011D9_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x18191DF0)
#define CLASS_2_B4FF23C0355011D9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18191D90)
#define CLASS_2_B4FF23C0355011D9__CTOR_OFFSET UNITYSDK_OFFSET(0x18191E80)
#define CLASS_2_B4FF23C0355011D9__ONBIND_OFFSET UNITYSDK_OFFSET(0x18191C80)

inline static constexpr unsigned int Class_2_B4FF23C0355011D9_TypeDefinitionIndex = 72233;

class Class_2_B4FF23C0355011D9 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* PCANCCCAJHL; // 0x0
	::UnityEngine::ParticleSystem* MBJJHPKBCCC; // 0x60
	::UnityEngine::Transform* DCCOIAKMMEE; // 0x68
	::UnityEngine::Transform* AOKHJDHAAKP; // 0x70
	::System::Boolean DAKHCIHNGBK; // 0x78

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
