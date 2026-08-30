#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginBase; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15467030)
#define CLASS_2_0FB6F5068D635FD7_1_METHOD_2_20D9F507EF6F1BC0_OFFSET UNITYSDK_OFFSET(0x154670A0)
#define CLASS_2_0FB6F5068D635FD7_1_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x15466FC0)
#define CLASS_2_0FB6F5068D635FD7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x154670F0)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_1_TypeDefinitionIndex = 69830;

class Class_2_0FB6F5068D635FD7_1 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_1_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_1_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginBase* Method_2_20D9F507EF6F1BC0()
	{
		return ((::RPG::Client::MonoEffectPluginBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_1_METHOD_2_20D9F507EF6F1BC0_OFFSET))(this);
	}
};
