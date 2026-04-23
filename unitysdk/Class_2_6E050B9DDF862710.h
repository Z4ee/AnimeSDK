#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class Effect_RunePositionPaster; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E050B9DDF862710_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1002BDF0)
#define CLASS_2_6E050B9DDF862710_METHOD_2_69CC3C8FCC5D9B7B_OFFSET UNITYSDK_OFFSET(0x1002C140)
#define CLASS_2_6E050B9DDF862710_METHOD_2_85DCCD8CA964D96A_OFFSET UNITYSDK_OFFSET(0x1002BCC0)
#define CLASS_2_6E050B9DDF862710_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1002C1C0)
#define CLASS_2_6E050B9DDF862710_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x1002BEB0)
#define CLASS_2_6E050B9DDF862710_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x1002BD90)
#define CLASS_2_6E050B9DDF862710_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x1002BE60)
#define CLASS_2_6E050B9DDF862710__CTOR_OFFSET UNITYSDK_OFFSET(0x1002C1B0)
#define CLASS_2_6E050B9DDF862710___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1002C230)

inline static constexpr unsigned int Class_2_6E050B9DDF862710_TypeDefinitionIndex = 64867;

class Class_2_6E050B9DDF862710 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_0; // 0x18

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

	::RPG::Client::Effect_RunePositionPaster* Method_2_69CC3C8FCC5D9B7B()
	{
		return ((::RPG::Client::Effect_RunePositionPaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_69CC3C8FCC5D9B7B_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
