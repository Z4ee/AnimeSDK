#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Effect_SetRandomAnimTime;
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_BA43F695DC73304E_METHOD_2_8B2CD8D5240F4032_OFFSET UNITYSDK_OFFSET(0x8FE9F20)
#define CLASS_2_BA43F695DC73304E_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8FEA170)
#define CLASS_2_BA43F695DC73304E_METHOD_2_B187A6C017700052_OFFSET UNITYSDK_OFFSET(0x8FEA110)
#define CLASS_2_BA43F695DC73304E__CTOR_OFFSET UNITYSDK_OFFSET(0x8FEA160)

inline static constexpr unsigned int Class_2_BA43F695DC73304E_TypeDefinitionIndex = 44197;

class Class_2_BA43F695DC73304E : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_0; // 0x18
	::System::Int32 Field_2_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA43F695DC73304E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8B2CD8D5240F4032(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BA43F695DC73304E_METHOD_2_8B2CD8D5240F4032_OFFSET))(this, a1);
	}

	::Effect_SetRandomAnimTime* Method_2_B187A6C017700052()
	{
		return ((::Effect_SetRandomAnimTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA43F695DC73304E_METHOD_2_B187A6C017700052_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BA43F695DC73304E_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
