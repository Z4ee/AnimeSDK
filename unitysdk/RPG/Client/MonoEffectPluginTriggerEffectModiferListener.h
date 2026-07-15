#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::Client { class ModiferEffectMapItem; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913D9C0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_1B5F066B32D8362C_OFFSET UNITYSDK_OFFSET(0x1913DE30)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_8BF711C73CC86CFA_OFFSET UNITYSDK_OFFSET(0x1913DBF0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_A0C1DAA6261B1CB5_OFFSET UNITYSDK_OFFSET(0x1913DDD0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1913D660)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1913DFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginTriggerEffectModiferListener_TypeDefinitionIndex = 66990;

	class MonoEffectPluginTriggerEffectModiferListener : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::ModiferEffectMapItem*>* ModiferEffectMapping; // 0x28
		::Il2CppArray<::System::String*>* AttachPointList; // 0x30
		::System::Int32 Field_6_2; // 0x38
		::System::String* Field_6_3; // 0x40
		::System::String* Field_6_4; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* Field_6_5; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_6_6; // 0x58
		::RPG::GameCore::GameEntity* Field_6_7; // 0x60
		::RPG::Client::MonoEffectManager* Field_6_8; // 0x68
		::RPG::GameCore::EventManager* Field_6_9; // 0x70

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

		::System::Void Method_6_8BF711C73CC86CFA(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_8BF711C73CC86CFA_OFFSET))(this, a1);
		}

		::System::Void Method_6_1B5F066B32D8362C(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_1B5F066B32D8362C_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_6_A0C1DAA6261B1CB5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_METHOD_6_A0C1DAA6261B1CB5_OFFSET))(this);
		}
	};
}
