#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_8AFFA521C187E77A;
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class CustomCRPSampleSetings; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913A1A0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913A260)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913A370)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913A0E0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913A300)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1913A450)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1913A4F0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x19139FC0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913A000)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_TICK_OFFSET UNITYSDK_OFFSET(0x1913A3E0)
#define RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1913A500)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSimpleCRPVCamera_TypeDefinitionIndex = 66971;

	class MonoEffectPluginSimpleCRPVCamera : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::CustomRP::CRPVirtualCameraVolumn* VCameraVolumn; // 0x28
		::System::Boolean UseVirtualCameraFollowMonoPlugin; // 0x30
		::Il2CppArray<::System::Int32>* OverrideOrderIndex; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::CustomCRPSampleSetings*>* CustomCRPSampleSetings; // 0x40
		::System::Boolean DebugAlwaysRefresh; // 0x48
		::RPG::Client::CameraNormalConfigData* DebugCurrentCRPCameraData; // 0x50
		::Class_2_8AFFA521C187E77A* Field_6_6; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_TICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::Class_2_8AFFA521C187E77A* get_Behavior()
		{
			return ((::Class_2_8AFFA521C187E77A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSIMPLECRPVCAMERA_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
