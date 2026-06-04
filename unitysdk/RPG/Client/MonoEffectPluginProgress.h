#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_9A1E7A71D3759A93;
namespace RPG::Client { class MonoEffectPluginProgress_ModifyMaterialParam; }
namespace RPG::Client { class MonoEffectPluginProgress_ModifyTransformParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E9750)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E9810)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E96C0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xC0E98D0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xC0E9960)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E95E0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E9970)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E99D0)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E9A30)
#define RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xC0E9A90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginProgress_TypeDefinitionIndex = 65542;

	class MonoEffectPluginProgress : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Single CurrentProgress; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginProgress_ModifyMaterialParam*>* ModifyMaterialParams; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginProgress_ModifyTransformParam*>* ModifyTransformParams; // 0x38
		::Class_2_9A1E7A71D3759A93* Field_6_3; // 0x40

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

		::Class_2_9A1E7A71D3759A93* get_Behavior()
		{
			return ((::Class_2_9A1E7A71D3759A93*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPROGRESS___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, a1);
		}
	};
}
