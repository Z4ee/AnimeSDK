#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_0_16E4307DCC419505_805;
namespace RPG::Client { class MonoEffectPluginReattach; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_7F17E8A8CCBE1B04_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B22B40)
#define CLASS_2_7F17E8A8CCBE1B04_METHOD_2_55575376AA1835D5_OFFSET UNITYSDK_OFFSET(0x10B22D40)
#define CLASS_2_7F17E8A8CCBE1B04_METHOD_2_6471762E12AA53E8_OFFSET UNITYSDK_OFFSET(0x10B22EB0)
#define CLASS_2_7F17E8A8CCBE1B04_METHOD_2_8080E22F79F246F0_OFFSET UNITYSDK_OFFSET(0x10B22D90)
#define CLASS_2_7F17E8A8CCBE1B04_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x10B234B0)
#define CLASS_2_7F17E8A8CCBE1B04_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x10B22E60)
#define CLASS_2_7F17E8A8CCBE1B04_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x10B22AD0)
#define CLASS_2_7F17E8A8CCBE1B04_METHOD_2_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0x10B22BB0)
#define CLASS_2_7F17E8A8CCBE1B04__CTOR_OFFSET UNITYSDK_OFFSET(0x10B234A0)
#define CLASS_2_7F17E8A8CCBE1B04___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B23520)

inline static constexpr unsigned int Class_2_7F17E8A8CCBE1B04_TypeDefinitionIndex = 57175;

class Class_2_7F17E8A8CCBE1B04 : public ::RPG::Client::BehaviorBase
{
public:
	::Class_0_16E4307DCC419505_805* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04_METHOD_2_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_2_8080E22F79F246F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04_METHOD_2_8080E22F79F246F0_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_2_6471762E12AA53E8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04_METHOD_2_6471762E12AA53E8_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginReattach* Method_2_55575376AA1835D5()
	{
		return ((::RPG::Client::MonoEffectPluginReattach*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04_METHOD_2_55575376AA1835D5_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F17E8A8CCBE1B04___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
