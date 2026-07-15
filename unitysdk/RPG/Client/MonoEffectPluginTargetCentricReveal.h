#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_A4A04E9CA7B14418;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913B670)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913B7B0)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1913B600)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1913B610)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1913B620)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_TARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1913B5F0)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1913B630)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913B760)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_SETREVEALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1913B840)
#define RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1913B8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTargetCentricReveal_TypeDefinitionIndex = 66980;

	class MonoEffectPluginTargetCentricReveal : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean Field_6_0; // 0x28
		::System::Single Field_6_1; // 0x2C
		::System::Single Field_6_2; // 0x30
		::UnityEngine::Transform* Field_6_3; // 0x38
		::Class_2_A4A04E9CA7B14418* Field_6_4; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_TARGETTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_ENABLE_OFFSET))(this);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_RADIUS_OFFSET))(this);
		}

		::System::Single get_Softness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_GET_SOFTNESS_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void SetRevealProperties(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTARGETCENTRICREVEAL_SETREVEALPROPERTIES_OFFSET))(this, a1, a2, a3);
		}
	};
}
