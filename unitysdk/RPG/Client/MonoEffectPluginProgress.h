#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_16802F816BC09D8B;
namespace RPG::Client { class MonoEffectPluginProgress_ModifyMaterialParam; }
namespace RPG::Client { class MonoEffectPluginProgress_ModifyTransformParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD9440)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD9500)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD93B0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9CD95C0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x9CD9650)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD92D0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9660)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD96C0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CD9720)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x9CD9780)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginProgress_TypeDefinitionIndex = 57360;

	class MonoEffectPluginProgress : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Single CurrentProgress; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginProgress_ModifyMaterialParam*>* ModifyMaterialParams; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginProgress_ModifyTransformParam*>* ModifyTransformParams; // 0x38
		::Class_2_16802F816BC09D8B* Field_6_3; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::Class_2_16802F816BC09D8B* get_Behavior()
		{
			return ((::Class_2_16802F816BC09D8B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}
