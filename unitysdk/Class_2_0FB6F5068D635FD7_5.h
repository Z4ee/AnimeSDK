#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginSyncTargetShaderProperty; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A01490)
#define CLASS_2_0FB6F5068D635FD7_5_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x13A01420)
#define CLASS_2_0FB6F5068D635FD7_5_METHOD_2_C08EDB9F14D82328_OFFSET UNITYSDK_OFFSET(0x13A01840)
#define CLASS_2_0FB6F5068D635FD7_5_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x13A018C0)
#define CLASS_2_0FB6F5068D635FD7_5_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x13A01500)
#define CLASS_2_0FB6F5068D635FD7_5__CTOR_OFFSET UNITYSDK_OFFSET(0x13A018B0)
#define CLASS_2_0FB6F5068D635FD7_5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A01920)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_5_TypeDefinitionIndex = 65355;

class Class_2_0FB6F5068D635FD7_5 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_5_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_5_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginSyncTargetShaderProperty* Method_2_C08EDB9F14D82328()
	{
		return ((::RPG::Client::MonoEffectPluginSyncTargetShaderProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_5_METHOD_2_C08EDB9F14D82328_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_5_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
