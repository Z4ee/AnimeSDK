#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginFollowVisibility; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_E7E54080F13AC12A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17075760)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x170757D0)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_648B72485907CBB1_OFFSET UNITYSDK_OFFSET(0x17075910)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_7908E0A3A062534E_OFFSET UNITYSDK_OFFSET(0x17075AC0)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x170756F0)
#define CLASS_2_E7E54080F13AC12A_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x17075980)
#define CLASS_2_E7E54080F13AC12A__CTOR_OFFSET UNITYSDK_OFFSET(0x17075CC0)

inline static constexpr unsigned int Class_2_E7E54080F13AC12A_TypeDefinitionIndex = 66742;

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

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_7908E0A3A062534E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_METHOD_2_7908E0A3A062534E_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginFollowVisibility* Method_2_648B72485907CBB1()
	{
		return ((::RPG::Client::MonoEffectPluginFollowVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7E54080F13AC12A_METHOD_2_648B72485907CBB1_OFFSET))(this);
	}
};
