#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunProjectile.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoWolfBroCustomData; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_0270A57DC85825A7_OFFSET UNITYSDK_OFFSET(0xCC46B20)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_227F3D625371821C_OFFSET UNITYSDK_OFFSET(0xCC476E0)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_290BD11329CA8210_OFFSET UNITYSDK_OFFSET(0xCC46940)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_704CE2B0D4D2E676_OFFSET UNITYSDK_OFFSET(0xCC46F80)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_7D3AFE2824353718_OFFSET UNITYSDK_OFFSET(0xCC47690)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_88E5D000ABA33B13_OFFSET UNITYSDK_OFFSET(0xCC46A20)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xCC45E00)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_9B97A7966B23A4A7_OFFSET UNITYSDK_OFFSET(0xCC46530)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_A1AF98B26C7CFE0A_OFFSET UNITYSDK_OFFSET(0xCC46800)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCC47640)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_TESTTARGET_OFFSET UNITYSDK_OFFSET(0xCC46030)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_TICK_OFFSET UNITYSDK_OFFSET(0xCC45FA0)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC475D0)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCC47680)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunTargetProjectile_TypeDefinitionIndex = 64324;

	class WolfBroGunTargetProjectile : public ::RPG::Client::WolfBroGunProjectile
	{
	public:
		::System::Single delScore; // 0x78
		::System::Single aliveTime; // 0x7C
		::System::Boolean destroyOnHit; // 0x80
		::System::String* onHitCustomString; // 0x88
		::System::String* fireAudioEvent; // 0x90
		::UnityEngine::LayerMask targetLayers; // 0x98
		::System::Single Field_6_6; // 0x9C
		::UnityEngine::Vector3 Field_6_7; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_8CA88D55ECEFAD59()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_8CA88D55ECEFAD59_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_6_9B97A7966B23A4A7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_9B97A7966B23A4A7_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_A1AF98B26C7CFE0A(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_A1AF98B26C7CFE0A_OFFSET))(this, a1);
		}

		::System::Void Method_6_290BD11329CA8210(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_290BD11329CA8210_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_88E5D000ABA33B13(::RPG::Client::MonoWolfBroCustomData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoWolfBroCustomData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_88E5D000ABA33B13_OFFSET))(this, a1, a2);
		}

		::System::Void TestTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_TESTTARGET_OFFSET))(this);
		}

		::System::Void Method_6_0270A57DC85825A7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_0270A57DC85825A7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_704CE2B0D4D2E676(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_704CE2B0D4D2E676_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_7D3AFE2824353718(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_7D3AFE2824353718_OFFSET))(this, a1);
		}

		::System::Void Method_6_227F3D625371821C(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_METHOD_6_227F3D625371821C_OFFSET))(this, a1, a2);
		}
	};
}
