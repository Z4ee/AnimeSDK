#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginInitStateByTargetNormalizedTime; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D8C560)
#define CLASS_2_0FB6F5068D635FD7_3_METHOD_2_783E8AADB8EE0369_OFFSET UNITYSDK_OFFSET(0x14D8C940)
#define CLASS_2_0FB6F5068D635FD7_3_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x14D8C4F0)
#define CLASS_2_0FB6F5068D635FD7_3_METHOD_2_B79CCBAA275AEA4D_OFFSET UNITYSDK_OFFSET(0x14D8C5D0)
#define CLASS_2_0FB6F5068D635FD7_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14D8C9B0)
#define CLASS_2_0FB6F5068D635FD7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8C9F0)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_3_TypeDefinitionIndex = 66746;

class Class_2_0FB6F5068D635FD7_3 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B79CCBAA275AEA4D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_METHOD_2_B79CCBAA275AEA4D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginInitStateByTargetNormalizedTime* Method_2_783E8AADB8EE0369()
	{
		return ((::RPG::Client::MonoEffectPluginInitStateByTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_METHOD_2_783E8AADB8EE0369_OFFSET))(this);
	}
};
