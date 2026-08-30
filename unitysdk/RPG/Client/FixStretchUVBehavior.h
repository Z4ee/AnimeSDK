#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class FixStretchUV; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD0A0150)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_37AACA8481A4B501_OFFSET UNITYSDK_OFFSET(0xD09F9B0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD09ED00)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_5D2EADEA3A052595_OFFSET UNITYSDK_OFFSET(0xD09FC50)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_74F16A204699EDE8_OFFSET UNITYSDK_OFFSET(0xD09FD80)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0xD09ED70)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_E87C1FD44C1B6C8A_OFFSET UNITYSDK_OFFSET(0xD09F440)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xD09F3C0)
#define RPG_CLIENT_FIXSTRETCHUVBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A0190)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchUVBehavior_TypeDefinitionIndex = 70564;

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

		::System::Void Method_3_AB7ED27CAB69BE58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_AB7ED27CAB69BE58_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_3_E87C1FD44C1B6C8A()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_E87C1FD44C1B6C8A_OFFSET))(this);
		}

		::System::Void Method_3_74F16A204699EDE8(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_74F16A204699EDE8_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_3_5D2EADEA3A052595(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_5D2EADEA3A052595_OFFSET))(this, a1);
		}

		::System::Void Method_3_37AACA8481A4B501()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_METHOD_3_37AACA8481A4B501_OFFSET))(this);
		}

		::RPG::Client::FixStretchUV* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::FixStretchUV*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUVBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
