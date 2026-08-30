#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3BFD1BBF7A6AF539;
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONODICECOMBATDICE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x11664C00)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_063673DAD124345C_OFFSET UNITYSDK_OFFSET(0x11664AB0)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_0706AD38EA2EAB79_OFFSET UNITYSDK_OFFSET(0x11665900)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_0DA02645F51F0244_OFFSET UNITYSDK_OFFSET(0x116657E0)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_38BE73FE87B9CF1D_OFFSET UNITYSDK_OFFSET(0x11665390)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x11665120)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_8327FEEFBF3EC917_OFFSET UNITYSDK_OFFSET(0x11664D00)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_EE6C603D16076D99_OFFSET UNITYSDK_OFFSET(0x11664F80)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_EFF7FA8E1C5E8D3A_OFFSET UNITYSDK_OFFSET(0x11664ED0)
#define RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x11664A40)
#define RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x11664B90)
#define RPG_CLIENT_MONODICECOMBATDICE_SETENABLE_OFFSET UNITYSDK_OFFSET(0x11664840)
#define RPG_CLIENT_MONODICECOMBATDICE_SETPERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x116649F0)
#define RPG_CLIENT_MONODICECOMBATDICE__CTOR_OFFSET UNITYSDK_OFFSET(0x11665A90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatDice_TypeDefinitionIndex = 63627;

	class MonoDiceCombatDice : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_3BFD1BBF7A6AF539* BPHAGGCLIAE; // 0x18
		::System::String* IPHJGLFDPEH; // 0x20
		::System::String* CDOKKOIGCHL; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit>* DDDMMHLGKAH; // 0x30
		::System::Single PFNHBMEJLAO; // 0x38
		::System::Boolean MHEAIOMEGCA; // 0x3C
		::UnityEngine::Vector3 EMOAICPGEJE; // 0x40
		::System::Single MNOKAIAOCPH; // 0x4C
		::System::Boolean ONCMMJIEOLI; // 0x50
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE__CTOR_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void SetPerformanceConfigProxy(::Class_1_3BFD1BBF7A6AF539* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3BFD1BBF7A6AF539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_SETPERFORMANCECONFIGPROXY_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERSTAY_OFFSET))(this, a1);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_063673DAD124345C(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_063673DAD124345C_OFFSET))(this, a1);
		}

		::System::Single Method_5_EE6C603D16076D99(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_EE6C603D16076D99_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_EFF7FA8E1C5E8D3A(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_EFF7FA8E1C5E8D3A_OFFSET))(this, a1);
		}

		::System::Void Method_5_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_5_8327FEEFBF3EC917()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_8327FEEFBF3EC917_OFFSET))(this);
		}

		::System::Boolean Method_5_38BE73FE87B9CF1D(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_38BE73FE87B9CF1D_OFFSET))(this, a1);
		}

		::System::Void Method_5_0706AD38EA2EAB79(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_0706AD38EA2EAB79_OFFSET))(this, a1);
		}

		::System::UInt32 Method_5_0DA02645F51F0244()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_0DA02645F51F0244_OFFSET))(this);
		}
	};
}
