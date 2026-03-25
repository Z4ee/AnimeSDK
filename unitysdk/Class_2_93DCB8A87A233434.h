#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginPosm; }
namespace RPG::CustomRP { class CharacterModelShadowCmd; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_93DCB8A87A233434_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118CB060)
#define CLASS_2_93DCB8A87A233434_METHOD_2_100C37D9D1141569_OFFSET UNITYSDK_OFFSET(0x118CBBD0)
#define CLASS_2_93DCB8A87A233434_METHOD_2_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x118CB410)
#define CLASS_2_93DCB8A87A233434_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x118CC140)
#define CLASS_2_93DCB8A87A233434_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x118CBD80)
#define CLASS_2_93DCB8A87A233434_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x118CBAB0)
#define CLASS_2_93DCB8A87A233434_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x118CAFF0)
#define CLASS_2_93DCB8A87A233434_METHOD_2_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x118CB690)
#define CLASS_2_93DCB8A87A233434_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x118CB0D0)
#define CLASS_2_93DCB8A87A233434_METHOD_2_EB2A917B0A704DEA_OFFSET UNITYSDK_OFFSET(0x118CB3C0)
#define CLASS_2_93DCB8A87A233434__CTOR_OFFSET UNITYSDK_OFFSET(0x118CC130)
#define CLASS_2_93DCB8A87A233434___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118CC1B0)

inline static constexpr unsigned int Class_2_93DCB8A87A233434_TypeDefinitionIndex = 57172;

class Class_2_93DCB8A87A233434 : public ::RPG::Client::BehaviorBase
{
public:
	::Il2CppArray<::UnityEngine::Renderer*>* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20
	::RPG::CustomRP::CharacterModelShadowCmd* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_METHOD_2_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_METHOD_2_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_2_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_METHOD_2_705FFC79B57F4953_OFFSET))(this, a1);
	}

	::System::Void Method_2_100C37D9D1141569(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_METHOD_2_100C37D9D1141569_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginPosm* Method_2_EB2A917B0A704DEA()
	{
		return ((::RPG::Client::MonoEffectPluginPosm*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_METHOD_2_EB2A917B0A704DEA_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93DCB8A87A233434___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
