#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONOTEST_ECS_METHOD_5_EA6D328EF56CB9CB_OFFSET UNITYSDK_OFFSET(0x13EA8A20)
#define MOLEMOLE_MONOTEST_ECS_TEST_OFFSET UNITYSDK_OFFSET(0x13EA8990)
#define MOLEMOLE_MONOTEST_ECS__CTOR_OFFSET UNITYSDK_OFFSET(0x13EA89D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTest_ECS_TypeDefinitionIndex = 41958;

	class MonoTest_ECS : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEST_ECS__CTOR_OFFSET))(this);
		}

		::System::Void Test()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEST_ECS_TEST_OFFSET))(this);
		}

		::System::Int32 Method_5_EA6D328EF56CB9CB(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEST_ECS_METHOD_5_EA6D328EF56CB9CB_OFFSET))(this, a1);
		}
	};
}
