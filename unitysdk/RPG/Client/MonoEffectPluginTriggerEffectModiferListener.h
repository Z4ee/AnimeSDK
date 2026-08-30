#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::Client { class ModiferEffectMapItem; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B399BD0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_1BAAC81B1E9AFDF5_OFFSET UNITYSDK_OFFSET(0x1B39A040)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_A0C1DAA6261B1CB5_OFFSET UNITYSDK_OFFSET(0x1B399FE0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_BF36CA78EE3B5455_OFFSET UNITYSDK_OFFSET(0x1B399E00)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B399860)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B39A220)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTriggerEffectModiferListener_TypeDefinitionIndex = 70095;

	class MonoEffectPluginTriggerEffectModiferListener : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::ModiferEffectMapItem*>* ModiferEffectMapping; // 0x28
		::Il2CppArray<::System::String*>* AttachPointList; // 0x30
		::System::Int32 NOIEMNLMACN; // 0x38
		::System::String* LKDNEEIKNGN; // 0x40
		::System::String* NNIOCPHFNNG; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* AANBAEBCAPM; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* COKDDDGLNGO; // 0x58
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x60
		::RPG::Client::MonoEffectManager* BBKCIBAJKGC; // 0x68
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Method_6_BF36CA78EE3B5455(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_BF36CA78EE3B5455_OFFSET))(this, a1);
		}

		::System::Void Method_6_1BAAC81B1E9AFDF5(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_1BAAC81B1E9AFDF5_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_6_A0C1DAA6261B1CB5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_A0C1DAA6261B1CB5_OFFSET))(this);
		}
	};
}
