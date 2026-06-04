#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class FixStretchUV; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xBA5B9C0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_37AACA8481A4B501_OFFSET UNITYSDK_OFFSET(0xBA5B290)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBA5A4E0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0xBA5A550)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBA5BA10)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_74F16A204699EDE8_OFFSET UNITYSDK_OFFSET(0xBA5B5F0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_A98241A42A1BCFD0_OFFSET UNITYSDK_OFFSET(0xBA5B530)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_B182E4E61DD67E67_OFFSET UNITYSDK_OFFSET(0xBA5AD90)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xBA5AD10)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBA5BA00)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xBA5BA70)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchUVBehavior_TypeDefinitionIndex = 66016;

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

		::System::Void Method_3_4857357D5C1BFCE8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_4857357D5C1BFCE8_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_3_B182E4E61DD67E67()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_B182E4E61DD67E67_OFFSET))(this);
		}

		::System::Void Method_3_74F16A204699EDE8(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_74F16A204699EDE8_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_3_A98241A42A1BCFD0(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_A98241A42A1BCFD0_OFFSET))(this, a1);
		}

		::System::Void Method_3_37AACA8481A4B501()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_37AACA8481A4B501_OFFSET))(this);
		}

		::RPG::Client::FixStretchUV* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::FixStretchUV*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
