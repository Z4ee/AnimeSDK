#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class Effect_LineRenderer; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0B9D3A1C4F84514C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F97B90)
#define CLASS_2_0B9D3A1C4F84514C_METHOD_2_81B170638DE261C2_OFFSET UNITYSDK_OFFSET(0x8F96A70)
#define CLASS_2_0B9D3A1C4F84514C_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8F97C10)
#define CLASS_2_0B9D3A1C4F84514C_METHOD_2_AA8DDAA31CE407E8_OFFSET UNITYSDK_OFFSET(0x8F97110)
#define CLASS_2_0B9D3A1C4F84514C_METHOD_2_BB4C8E7E18C5FBD0_OFFSET UNITYSDK_OFFSET(0x8F978C0)
#define CLASS_2_0B9D3A1C4F84514C_METHOD_2_FD84629BA6096517_OFFSET UNITYSDK_OFFSET(0x8F97180)
#define CLASS_2_0B9D3A1C4F84514C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F97C00)
#define CLASS_2_0B9D3A1C4F84514C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F97C80)

inline static constexpr unsigned int Class_2_0B9D3A1C4F84514C_TypeDefinitionIndex = 44192;

class Class_2_0B9D3A1C4F84514C : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B9D3A1C4F84514C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_81B170638DE261C2(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0B9D3A1C4F84514C_METHOD_2_81B170638DE261C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD84629BA6096517(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0B9D3A1C4F84514C_METHOD_2_FD84629BA6096517_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_BB4C8E7E18C5FBD0(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0B9D3A1C4F84514C_METHOD_2_BB4C8E7E18C5FBD0_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B9D3A1C4F84514C_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Effect_LineRenderer* Method_2_AA8DDAA31CE407E8()
	{
		return ((::RPG::Client::Effect_LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B9D3A1C4F84514C_METHOD_2_AA8DDAA31CE407E8_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0B9D3A1C4F84514C_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B9D3A1C4F84514C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
