#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginBase; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCDD320)
#define CLASS_2_0FB6F5068D635FD7_6_METHOD_2_20D9F507EF6F1BC0_OFFSET UNITYSDK_OFFSET(0xCCDD390)
#define CLASS_2_0FB6F5068D635FD7_6_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xCCDD2B0)
#define CLASS_2_0FB6F5068D635FD7_6__CTOR_OFFSET UNITYSDK_OFFSET(0xCCDD3E0)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_6_TypeDefinitionIndex = 69872;

class Class_2_0FB6F5068D635FD7_6 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_6_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_6_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginBase* Method_2_20D9F507EF6F1BC0()
	{
		return ((::RPG::Client::MonoEffectPluginBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_6_METHOD_2_20D9F507EF6F1BC0_OFFSET))(this);
	}
};
