#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginFollowVisibility; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_E7E54080F13AC12A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC9E190)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0xAC9E200)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_648B72485907CBB1_OFFSET UNITYSDK_OFFSET(0xAC9E340)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_65F4D176AD70D378_OFFSET UNITYSDK_OFFSET(0xAC9E3B0)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_7908E0A3A062534E_OFFSET UNITYSDK_OFFSET(0xAC9E4F0)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xAC9E120)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xAC9E700)
#define CLASS_2_E7E54080F13AC12A__CTOR_OFFSET UNITYSDK_OFFSET(0xAC9E6F0)
#define CLASS_2_E7E54080F13AC12A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC9E760)

inline static constexpr unsigned int Class_2_E7E54080F13AC12A_TypeDefinitionIndex = 65332;

class Class_2_E7E54080F13AC12A : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_METHOD_2_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_2_65F4D176AD70D378()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_METHOD_2_65F4D176AD70D378_OFFSET))(this);
	}

	::System::Void Method_2_7908E0A3A062534E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_METHOD_2_7908E0A3A062534E_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginFollowVisibility* Method_2_648B72485907CBB1()
	{
		return ((::RPG::Client::MonoEffectPluginFollowVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_METHOD_2_648B72485907CBB1_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
