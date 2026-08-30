#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoRandomOffsetScale; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_90B76BC9152631D1_METHOD_2_9B6BAF49879647BD_OFFSET UNITYSDK_OFFSET(0x1855D180)
#define CLASS_2_90B76BC9152631D1_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x1855D0E0)
#define CLASS_2_90B76BC9152631D1_METHOD_2_E11BF4997198DC1F_OFFSET UNITYSDK_OFFSET(0x1855D300)
#define CLASS_2_90B76BC9152631D1_METHOD_2_F42C885D6705BD61_OFFSET UNITYSDK_OFFSET(0x1855D290)
#define CLASS_2_90B76BC9152631D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1855DB80)

inline static constexpr unsigned int Class_2_90B76BC9152631D1_TypeDefinitionIndex = 70340;

class Class_2_90B76BC9152631D1 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single DKOBAIALBPJ; // 0x18
	::UnityEngine::Vector3 HOOJPIALFLO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90B76BC9152631D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_90B76BC9152631D1_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B6BAF49879647BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90B76BC9152631D1_METHOD_2_9B6BAF49879647BD_OFFSET))(this);
	}

	::System::Void Method_2_E11BF4997198DC1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90B76BC9152631D1_METHOD_2_E11BF4997198DC1F_OFFSET))(this);
	}

	::RPG::Client::MonoRandomOffsetScale* Method_2_F42C885D6705BD61()
	{
		return ((::RPG::Client::MonoRandomOffsetScale*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90B76BC9152631D1_METHOD_2_F42C885D6705BD61_OFFSET))(this);
	}
};
