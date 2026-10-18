#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class Effect_RunePositionPaster; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E050B9DDF862710_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC83490)
#define CLASS_2_6E050B9DDF862710_METHOD_2_4594C7347CA3EB46_OFFSET UNITYSDK_OFFSET(0xCC83750)
#define CLASS_2_6E050B9DDF862710_METHOD_2_85DCCD8CA964D96A_OFFSET UNITYSDK_OFFSET(0xCC83360)
#define CLASS_2_6E050B9DDF862710_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0xCC83550)
#define CLASS_2_6E050B9DDF862710_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0xCC83430)
#define CLASS_2_6E050B9DDF862710_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0xCC83500)
#define CLASS_2_6E050B9DDF862710__CTOR_OFFSET UNITYSDK_OFFSET(0xCC837A0)

inline static constexpr unsigned int Class_2_6E050B9DDF862710_TypeDefinitionIndex = 70365;

class Class_2_6E050B9DDF862710 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* GCGIDIIPDBC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_85DCCD8CA964D96A(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_85DCCD8CA964D96A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::RPG::Client::Effect_RunePositionPaster* Method_2_4594C7347CA3EB46()
	{
		return ((::RPG::Client::Effect_RunePositionPaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_4594C7347CA3EB46_OFFSET))(this);
	}
};
