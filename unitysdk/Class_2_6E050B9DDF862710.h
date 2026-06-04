#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class Effect_RunePositionPaster; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E050B9DDF862710_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB781A70)
#define CLASS_2_6E050B9DDF862710_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0xB781B30)
#define CLASS_2_6E050B9DDF862710_METHOD_2_6AA6B7BF8BBBBFF2_OFFSET UNITYSDK_OFFSET(0xB781DD0)
#define CLASS_2_6E050B9DDF862710_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0xB781AE0)
#define CLASS_2_6E050B9DDF862710_METHOD_2_85DCCD8CA964D96A_OFFSET UNITYSDK_OFFSET(0xB781940)
#define CLASS_2_6E050B9DDF862710_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0xB781A10)
#define CLASS_2_6E050B9DDF862710_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xB781E50)
#define CLASS_2_6E050B9DDF862710__CTOR_OFFSET UNITYSDK_OFFSET(0xB781E40)
#define CLASS_2_6E050B9DDF862710___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB781EB0)

inline static constexpr unsigned int Class_2_6E050B9DDF862710_TypeDefinitionIndex = 65793;

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

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::RPG::Client::Effect_RunePositionPaster* Method_2_6AA6B7BF8BBBBFF2()
	{
		return ((::RPG::Client::Effect_RunePositionPaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_6AA6B7BF8BBBBFF2_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E050B9DDF862710___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
