#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3BFD1BBF7A6AF539;
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define RPG_CLIENT_MONODICECOMBATDICE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9C2E0E0)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_063673DAD124345C_OFFSET UNITYSDK_OFFSET(0x9C2DF90)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_0706AD38EA2EAB79_OFFSET UNITYSDK_OFFSET(0x9C2EDE0)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_0DA02645F51F0244_OFFSET UNITYSDK_OFFSET(0x9C2ECC0)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_38BE73FE87B9CF1D_OFFSET UNITYSDK_OFFSET(0x9C2E870)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x9C2E600)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_8327FEEFBF3EC917_OFFSET UNITYSDK_OFFSET(0x9C2E1E0)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_EE6C603D16076D99_OFFSET UNITYSDK_OFFSET(0x9C2E460)
#define RPG_CLIENT_MONODICECOMBATDICE_METHOD_5_EFF7FA8E1C5E8D3A_OFFSET UNITYSDK_OFFSET(0x9C2E3B0)
#define RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x9C2DF20)
#define RPG_CLIENT_MONODICECOMBATDICE_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x9C2E070)
#define RPG_CLIENT_MONODICECOMBATDICE_SETENABLE_OFFSET UNITYSDK_OFFSET(0x9C2DD20)
#define RPG_CLIENT_MONODICECOMBATDICE_SETPERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x9C2DED0)
#define RPG_CLIENT_MONODICECOMBATDICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C2EF70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatDice_TypeDefinitionIndex = 51612;

	class MonoDiceCombatDice : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_3BFD1BBF7A6AF539* Field_5_0; // 0x18
		::System::String* Field_5_1; // 0x20
		::System::String* Field_5_2; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit>* Field_5_3; // 0x30
		::System::Single Field_5_4; // 0x38
		::System::Boolean Field_5_5; // 0x3C
		::UnityEngine::Vector3 Field_5_6; // 0x40
		::System::Single Field_5_7; // 0x4C
		::System::Boolean Field_5_8; // 0x50
		::UnityEngine::Collider* Field_5_9; // 0x58

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
