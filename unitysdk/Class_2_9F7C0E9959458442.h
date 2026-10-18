#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_A170836FF14A49D0;
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_9F7C0E9959458442_METHOD_2_69995009EF2F60B9_OFFSET UNITYSDK_OFFSET(0xBDEA670)
#define CLASS_2_9F7C0E9959458442__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEA9F0)
#define CLASS_2_9F7C0E9959458442__ONBIND_OFFSET UNITYSDK_OFFSET(0xBDEA5C0)

inline static constexpr unsigned int Class_2_9F7C0E9959458442_TypeDefinitionIndex = 71667;

class Class_2_9F7C0E9959458442 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Single IMCLIANMBCN; // 0x0
	// static const ::System::Single KMKOOGLDPJA; // 0x0
	// static const ::System::Single GKKGDEMCFBL; // 0x0
	::UnityEngine::Transform* OHJCABBKJHA; // 0x60
	::UnityEngine::RectTransform* NHDIHFJFJDA; // 0x68
	::Class_2_A170836FF14A49D0* ACAKMFDAHDM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F7C0E9959458442__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F7C0E9959458442__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_69995009EF2F60B9(::RPG::Client::ForceKillMarkDataProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ForceKillMarkDataProvider*))((::PBYTE)hIl2Cpp + CLASS_2_9F7C0E9959458442_METHOD_2_69995009EF2F60B9_OFFSET))(this, a1);
	}
};
