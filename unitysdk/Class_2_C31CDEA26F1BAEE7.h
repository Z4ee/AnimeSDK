#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_A170836FF14A49D0;
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C31CDEA26F1BAEE7_METHOD_2_5130ECDDE192808F_OFFSET UNITYSDK_OFFSET(0x170CB990)
#define CLASS_2_C31CDEA26F1BAEE7__CTOR_OFFSET UNITYSDK_OFFSET(0x170CBD30)
#define CLASS_2_C31CDEA26F1BAEE7__ONBIND_OFFSET UNITYSDK_OFFSET(0x170CB8E0)

inline static constexpr unsigned int Class_2_C31CDEA26F1BAEE7_TypeDefinitionIndex = 71617;

class Class_2_C31CDEA26F1BAEE7 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Single IMCLIANMBCN; // 0x0
	// static const ::System::Single KMKOOGLDPJA; // 0x0
	// static const ::System::Single GKKGDEMCFBL; // 0x0
	::Class_2_A170836FF14A49D0* ACAKMFDAHDM; // 0x60
	::UnityEngine::RectTransform* NHDIHFJFJDA; // 0x68
	::UnityEngine::Transform* OHJCABBKJHA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C31CDEA26F1BAEE7__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C31CDEA26F1BAEE7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5130ECDDE192808F(::RPG::Client::ForceKillMarkDataProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + CLASS_2_C31CDEA26F1BAEE7_METHOD_2_5130ECDDE192808F_OFFSET))(this, a1);
	}
};
