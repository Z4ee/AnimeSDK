#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectCharacterMoonHaloControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_33E112708C5C288F_METHOD_2_02D0A01C19608509_OFFSET UNITYSDK_OFFSET(0x142DE780)
#define CLASS_2_33E112708C5C288F_METHOD_2_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x142DE430)
#define CLASS_2_33E112708C5C288F_METHOD_2_84895CD37C104CC6_OFFSET UNITYSDK_OFFSET(0x142DE480)
#define CLASS_2_33E112708C5C288F_METHOD_2_85DCCD8CA964D96A_OFFSET UNITYSDK_OFFSET(0x142DE300)
#define CLASS_2_33E112708C5C288F_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x142DE3D0)
#define CLASS_2_33E112708C5C288F_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x142DE800)
#define CLASS_2_33E112708C5C288F__CTOR_OFFSET UNITYSDK_OFFSET(0x142DE7F0)

inline static constexpr unsigned int Class_2_33E112708C5C288F_TypeDefinitionIndex = 65798;

class Class_2_33E112708C5C288F : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_85DCCD8CA964D96A(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_85DCCD8CA964D96A_OFFSET))(this, a1);
	}

	::System::Void Method_2_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_585E2EA201FDE7ED_OFFSET))(this);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_2_84895CD37C104CC6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_84895CD37C104CC6_OFFSET))(this);
	}

	::RPG::Client::MonoEffectCharacterMoonHaloControl* Method_2_02D0A01C19608509()
	{
		return ((::RPG::Client::MonoEffectCharacterMoonHaloControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_02D0A01C19608509_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}
};
