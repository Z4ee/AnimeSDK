#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CLASS_3_A6B31396C0667910_CLASS_1_EB6C61301FD2CC88_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x13525AD0)
#define CLASS_3_A6B31396C0667910_CLASS_1_EB6C61301FD2CC88__CTOR_OFFSET UNITYSDK_OFFSET(0x13525B70)

inline static constexpr unsigned int Class_3_A6B31396C0667910_Class_1_EB6C61301FD2CC88_TypeDefinitionIndex = 39569;

class Class_3_A6B31396C0667910_Class_1_EB6C61301FD2CC88 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6B31396C0667910_CLASS_1_EB6C61301FD2CC88__CTOR_OFFSET))(this);
	}

	::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* a1)
	{
		return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + CLASS_3_A6B31396C0667910_CLASS_1_EB6C61301FD2CC88_STARTCOROUTINE_OFFSET))(this, a1);
	}
};
