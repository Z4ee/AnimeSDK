#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class FixStretchUV; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x96FE1D0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_05837CF6F50C82A3_OFFSET UNITYSDK_OFFSET(0x96FDF70)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_30C97F4D4FBEECDF_OFFSET UNITYSDK_OFFSET(0x96FD870)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x96FD0D0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0x96FDC10)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x96FE220)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x96FD140)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_EF791A79C773DCBB_OFFSET UNITYSDK_OFFSET(0x96FDEC0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x96FD7F0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x96FE210)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x96FE280)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchUVBehavior_TypeDefinitionIndex = 57813;

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
