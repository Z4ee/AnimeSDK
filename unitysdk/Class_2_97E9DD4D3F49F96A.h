#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_97E9DD4D3F49F96A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB9A400)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0x1AB9A880)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_4F004CF01BD7EC9E_OFFSET UNITYSDK_OFFSET(0x1AB9A980)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x1AB9A750)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x1AB9A390)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_CCD2C4BCAE91E81B_OFFSET UNITYSDK_OFFSET(0x1AB9A700)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x1AB9AB70)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_E75A9B7403DC8631_OFFSET UNITYSDK_OFFSET(0x1AB9A470)
#define CLASS_2_97E9DD4D3F49F96A__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB9AFF0)
#define CLASS_2_97E9DD4D3F49F96A___ONFLYTOTARGET_B__6_0_OFFSET UNITYSDK_OFFSET(0x1AB9B000)

inline static constexpr unsigned int Class_2_97E9DD4D3F49F96A_TypeDefinitionIndex = 69856;

class Class_2_97E9DD4D3F49F96A : public ::RPG::Client::BehaviorBase
{
public:
	::System::Boolean OOLBLFHHAPK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E75A9B7403DC8631()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_E75A9B7403DC8631_OFFSET))(this);
	}

	::System::Void Method_2_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F004CF01BD7EC9E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_4F004CF01BD7EC9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginPerformEventListener* Method_2_CCD2C4BCAE91E81B()
	{
		return ((::RPG::Client::MonoEffectPluginPerformEventListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_CCD2C4BCAE91E81B_OFFSET))(this);
	}

	::System::Void __OnFlyToTarget_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A___ONFLYTOTARGET_B__6_0_OFFSET))(this);
	}
};
