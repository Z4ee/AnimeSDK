#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectCharacterMoonHaloControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_33E112708C5C288F_METHOD_2_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x10AC7D40)
#define CLASS_2_33E112708C5C288F_METHOD_2_85DCCD8CA964D96A_OFFSET UNITYSDK_OFFSET(0x10AC7BC0)
#define CLASS_2_33E112708C5C288F_METHOD_2_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x10AC7CF0)
#define CLASS_2_33E112708C5C288F_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x10AC8080)
#define CLASS_2_33E112708C5C288F_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x10AC7C90)
#define CLASS_2_33E112708C5C288F_METHOD_2_DAA5E5E8B8991340_OFFSET UNITYSDK_OFFSET(0x10AC8000)
#define CLASS_2_33E112708C5C288F__CTOR_OFFSET UNITYSDK_OFFSET(0x10AC8070)

inline static constexpr unsigned int Class_2_33E112708C5C288F_TypeDefinitionIndex = 57609;

class Class_2_33E112708C5C288F : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_2; // 0x18
	::System::Single Field_2_0; // 0x20
	::System::Single Field_2_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_85DCCD8CA964D96A(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_85DCCD8CA964D96A_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_2_050D955490C4C3D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_050D955490C4C3D0_OFFSET))(this);
	}

	::RPG::Client::MonoEffectCharacterMoonHaloControl* Method_2_DAA5E5E8B8991340()
	{
		return ((::RPG::Client::MonoEffectCharacterMoonHaloControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_DAA5E5E8B8991340_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_33E112708C5C288F_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
