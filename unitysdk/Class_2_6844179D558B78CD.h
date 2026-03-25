#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6844179D558B78CD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC6EC70)
#define CLASS_2_6844179D558B78CD_METHOD_2_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xAC6F080)
#define CLASS_2_6844179D558B78CD_METHOD_2_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0xAC6F150)
#define CLASS_2_6844179D558B78CD_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xAC6F330)
#define CLASS_2_6844179D558B78CD_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xAC6F9A0)
#define CLASS_2_6844179D558B78CD_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xAC6EC00)
#define CLASS_2_6844179D558B78CD_METHOD_2_C67BACF14AADD040_OFFSET UNITYSDK_OFFSET(0xAC6EF30)
#define CLASS_2_6844179D558B78CD_METHOD_2_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0xAC6EF80)
#define CLASS_2_6844179D558B78CD_METHOD_2_F8F1E3D43C912F88_OFFSET UNITYSDK_OFFSET(0xAC6ECE0)
#define CLASS_2_6844179D558B78CD__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6F700)
#define CLASS_2_6844179D558B78CD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC6FA10)
#define CLASS_2_6844179D558B78CD___ONFLYTOTARGET_B__6_0_OFFSET UNITYSDK_OFFSET(0xAC6F710)

inline static constexpr unsigned int Class_2_6844179D558B78CD_TypeDefinitionIndex = 57170;

class Class_2_6844179D558B78CD : public ::RPG::Client::BehaviorBase
{
public:
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F8F1E3D43C912F88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD_METHOD_2_F8F1E3D43C912F88_OFFSET))(this);
	}

	::System::Void Method_2_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD_METHOD_2_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_2_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD_METHOD_2_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_31B86CF031D1C6B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD_METHOD_2_31B86CF031D1C6B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginPerformEventListener* Method_2_C67BACF14AADD040()
	{
		return ((::RPG::Client::MonoEffectPluginPerformEventListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD_METHOD_2_C67BACF14AADD040_OFFSET))(this);
	}

	::System::Void __OnFlyToTarget_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD___ONFLYTOTARGET_B__6_0_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6844179D558B78CD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
