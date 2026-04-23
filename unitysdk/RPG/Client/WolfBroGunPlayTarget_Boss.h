#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_1_482F3423DE650EAD;
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_GET_BOSSSCORE_OFFSET UNITYSDK_OFFSET(0xB4D8F60)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_INIT_OFFSET UNITYSDK_OFFSET(0xB4D8650)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xB4D89C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xB4D8910)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_KILL_OFFSET UNITYSDK_OFFSET(0xB4D8560)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xB4D85F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_56A28EFF6A9CC5BA_1_OFFSET UNITYSDK_OFFSET(0xB4D9250)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_56A28EFF6A9CC5BA_OFFSET UNITYSDK_OFFSET(0xB4D9200)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_69225B22C8D30B3E_OFFSET UNITYSDK_OFFSET(0xB4D92A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_775B6D644F07B554_1_OFFSET UNITYSDK_OFFSET(0xB4D92B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xB4D90D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_A86A455D6AB5B836_1_OFFSET UNITYSDK_OFFSET(0xB4D8DC0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xB4D8D70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xB4D86F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0xB4D8E10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_BEC0C6D1D2906F45_OFFSET UNITYSDK_OFFSET(0xB4D90C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB4D87D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ONHIT_OFFSET UNITYSDK_OFFSET(0xB4D8A50)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_SET_BOSSSCORE_OFFSET UNITYSDK_OFFSET(0xB4D8F70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D8F80)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB4D90B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS___IFIXBASEPROXY_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xB4D9150)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS___IFIXBASEPROXY_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xB4D90E0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS___IFIXBASEPROXY_ONHIT_OFFSET UNITYSDK_OFFSET(0xB4D91C0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Boss_TypeDefinitionIndex = 63364;

	class WolfBroGunPlayTarget_Boss : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* OnHits; // 0xD8
		::System::Single _BossScore_k__BackingField; // 0xE0
		::System::Action* OnBossHit; // 0xE8
		::System::Int32 Field_6_3; // 0xF0
		::System::Int32 Field_6_4; // 0xF4
		::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* Field_6_5; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS__CTOR_OFFSET))(this);
		}

		::System::Void Kill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_KILL_OFFSET))(this);
		}

		::System::Void Init(::Class_1_2BF31F3092BDFD9E* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_AD23FDCC7576BB32(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_AD23FDCC7576BB32_OFFSET))(this, a1);
		}

		::System::Void Method_6_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean OnHit(::UnityEngine::Vector3 a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ONHIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_A86A455D6AB5B836(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_A86A455D6AB5B836_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_A86A455D6AB5B836_1(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_A86A455D6AB5B836_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_19CCC07C980409E4_OFFSET))(this, a1);
		}

		::System::Void Method_6_B961D33AD47A2113()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_B961D33AD47A2113_OFFSET))(this);
		}

		::System::Single get_BossScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_GET_BOSSSCORE_OFFSET))(this);
		}

		::System::Void set_BossScore(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_SET_BOSSSCORE_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init(::Class_1_2BF31F3092BDFD9E* P0, ::RPG::Client::WolfBroGunPlayTarget_Group* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS___IFIXBASEPROXY_INIT_OFFSET))(this, P0, P1);
		}

		::System::Void Method_6_BEC0C6D1D2906F45(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_BEC0C6D1D2906F45_OFFSET))(this, P0);
		}

		::System::Void Method_6_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_775B6D644F07B554_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS___IFIXBASEPROXY_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS___IFIXBASEPROXY_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_OnHit(::UnityEngine::Vector3 P0, ::System::Nullable_1<::UnityEngine::Vector3> P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS___IFIXBASEPROXY_ONHIT_OFFSET))(this, P0, P1);
		}

		::System::Boolean Method_6_56A28EFF6A9CC5BA(::System::Boolean P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_56A28EFF6A9CC5BA_OFFSET))(this, P0);
		}

		::System::Boolean Method_6_56A28EFF6A9CC5BA_1(::System::Boolean P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_56A28EFF6A9CC5BA_1_OFFSET))(this, P0);
		}

		::System::Void Method_6_69225B22C8D30B3E(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_69225B22C8D30B3E_OFFSET))(this, P0);
		}

		::System::Void Method_6_775B6D644F07B554_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_METHOD_6_775B6D644F07B554_1_OFFSET))(this);
		}
	};
}
