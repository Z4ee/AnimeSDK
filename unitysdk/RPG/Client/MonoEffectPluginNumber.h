#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_357697286CC86F68;
namespace RPG::Client { class MonoEffectPluginNumber_SingleDigitData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E4B70)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E4CA0)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E4B30)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xC0E4D60)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E4AD0)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E4D70)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E4DC0)
#define RPG_CLIENT_MONOEFFECTPLUGINNUMBER___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E4E00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginNumber_TypeDefinitionIndex = 65527;

	class MonoEffectPluginNumber : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		// static const ::System::Int32 Field_6_0 = 0xA; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginNumber_SingleDigitData*>* DigitDatas; // 0x28
		::Class_2_357697286CC86F68* Field_6_2; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_DESTROYPLUGIN_OFFSET))(this);
		}

		::Class_2_357697286CC86F68* get_Behavior()
		{
			return ((::Class_2_357697286CC86F68*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINNUMBER___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}
	};
}
