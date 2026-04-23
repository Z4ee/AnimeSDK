#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class FixStretchUV; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xA3BE700)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_05837CF6F50C82A3_OFFSET UNITYSDK_OFFSET(0xA3BE4A0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_30C97F4D4FBEECDF_OFFSET UNITYSDK_OFFSET(0xA3BDDA0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA3BD600)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0xA3BE140)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA3BE750)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xA3BD670)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_EF791A79C773DCBB_OFFSET UNITYSDK_OFFSET(0xA3BE3F0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xA3BDD20)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BE740)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA3BE7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchUVBehavior_TypeDefinitionIndex = 65090;

	class FixStretchUVBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Vector2 tiling; // 0x38
		::UnityEngine::Renderer* _Renderer; // 0x40
		::UnityEngine::MaterialPropertyBlock* _MaterialPropertyBlock; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_CD9F3CEFB366C27A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_CD9F3CEFB366C27A_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_3_30C97F4D4FBEECDF()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_30C97F4D4FBEECDF_OFFSET))(this);
		}

		::System::Void Method_3_05837CF6F50C82A3(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_05837CF6F50C82A3_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_3_EF791A79C773DCBB(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_EF791A79C773DCBB_OFFSET))(this, a1);
		}

		::System::Void Method_3_44AC3F3C85C7CAA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_44AC3F3C85C7CAA3_OFFSET))(this);
		}

		::RPG::Client::FixStretchUV* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::FixStretchUV*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
