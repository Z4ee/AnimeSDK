#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CFC8E3321E6584C8.h"
#include "unitysdk/Class_2_B097F7DD3BD4F76B_Enum_3_DC8A31F426C04C39.h"

class Class_1_43BD383C98B4C0C5_53;
namespace MoleMole::Config { class ConfigWaveMorphParam; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_B097F7DD3BD4F76B_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x114E5AD0)
#define CLASS_2_B097F7DD3BD4F76B_METHOD_2_31C6836F61CC19EC_OFFSET UNITYSDK_OFFSET(0x114E58F0)
#define CLASS_2_B097F7DD3BD4F76B_METHOD_2_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x114E55B0)
#define CLASS_2_B097F7DD3BD4F76B_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x114E57F0)
#define CLASS_2_B097F7DD3BD4F76B_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x114E5A40)
#define CLASS_2_B097F7DD3BD4F76B__CTOR_OFFSET UNITYSDK_OFFSET(0x114E58E0)

inline static constexpr unsigned int Class_2_B097F7DD3BD4F76B_TypeDefinitionIndex = 55612;

class Class_2_B097F7DD3BD4F76B : public ::Class_1_CFC8E3321E6584C8
{
public:
	::UnityEngine::AnimationCurve* Field_2_2; // 0x20
	::UnityEngine::AnimationCurve* Field_2_1; // 0x28
	::System::Single Field_2_4; // 0x30
	::System::Single Field_2_3; // 0x34
	::System::Single Field_2_5; // 0x38
	::Class_2_B097F7DD3BD4F76B_Enum_3_DC8A31F426C04C39 Field_2_0; // 0x3C
	::System::Single Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B097F7DD3BD4F76B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B097F7DD3BD4F76B_METHOD_2_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_43BD383C98B4C0C5_53*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_53*&))((::PBYTE)hIl2Cpp + CLASS_2_B097F7DD3BD4F76B_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_2_31C6836F61CC19EC(::MoleMole::Config::ConfigWaveMorphParam* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigWaveMorphParam*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B097F7DD3BD4F76B_METHOD_2_31C6836F61CC19EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_43BD383C98B4C0C5_53*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_53*&))((::PBYTE)hIl2Cpp + CLASS_2_B097F7DD3BD4F76B_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B097F7DD3BD4F76B_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
