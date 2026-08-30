#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectCharacterMoonHaloControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_33E112708C5C288F_METHOD_2_02D0A01C19608509_OFFSET UNITYSDK_OFFSET(0x1852FE00)
#define CLASS_2_33E112708C5C288F_METHOD_2_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x1852FAB0)
#define CLASS_2_33E112708C5C288F_METHOD_2_84895CD37C104CC6_OFFSET UNITYSDK_OFFSET(0x1852FB00)
#define CLASS_2_33E112708C5C288F_METHOD_2_85DCCD8CA964D96A_OFFSET UNITYSDK_OFFSET(0x1852F980)
#define CLASS_2_33E112708C5C288F_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x1852FA50)
#define CLASS_2_33E112708C5C288F__CTOR_OFFSET UNITYSDK_OFFSET(0x1852FE70)

inline static constexpr unsigned int Class_2_33E112708C5C288F_TypeDefinitionIndex = 70334;

class Class_2_33E112708C5C288F : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* GCGIDIIPDBC; // 0x18
	::System::Single NJOFPOAOGFA; // 0x20
	::System::Single PGMIOKKLHIE; // 0x24

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
};
