#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginChildNodeFollow; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_079397AEA70D3F85_METHOD_2_08C6766056A70BB1_OFFSET UNITYSDK_OFFSET(0x110FAD10)
#define CLASS_2_079397AEA70D3F85_METHOD_2_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x110FAD70)
#define CLASS_2_079397AEA70D3F85_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x110FB3E0)
#define CLASS_2_079397AEA70D3F85_METHOD_2_AD061FE9AFE563F0_OFFSET UNITYSDK_OFFSET(0x110FB360)
#define CLASS_2_079397AEA70D3F85_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x110FACA0)
#define CLASS_2_079397AEA70D3F85__CTOR_OFFSET UNITYSDK_OFFSET(0x110FB3D0)

inline static constexpr unsigned int Class_2_079397AEA70D3F85_TypeDefinitionIndex = 57153;

class Class_2_079397AEA70D3F85 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_079397AEA70D3F85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_079397AEA70D3F85_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_08C6766056A70BB1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_079397AEA70D3F85_METHOD_2_08C6766056A70BB1_OFFSET))(this, a1);
	}

	::System::Void Method_2_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_079397AEA70D3F85_METHOD_2_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginChildNodeFollow* Method_2_AD061FE9AFE563F0()
	{
		return ((::RPG::Client::MonoEffectPluginChildNodeFollow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_079397AEA70D3F85_METHOD_2_AD061FE9AFE563F0_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_079397AEA70D3F85_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
