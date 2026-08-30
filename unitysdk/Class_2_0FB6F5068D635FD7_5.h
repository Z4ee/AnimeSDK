#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginSyncTargetShaderProperty; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167A89E0)
#define CLASS_2_0FB6F5068D635FD7_5_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x167A8970)
#define CLASS_2_0FB6F5068D635FD7_5_METHOD_2_C08EDB9F14D82328_OFFSET UNITYSDK_OFFSET(0x167A8D90)
#define CLASS_2_0FB6F5068D635FD7_5_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x167A8A50)
#define CLASS_2_0FB6F5068D635FD7_5__CTOR_OFFSET UNITYSDK_OFFSET(0x167A8E00)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_5_TypeDefinitionIndex = 69869;

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
};
