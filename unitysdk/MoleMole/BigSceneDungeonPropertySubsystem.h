#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_40C4D493DB33DA57_1.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_6E1B724B14572104_3.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F_1.h"

class Class_1_30B210AEDB34BA56;
class Class_1_BBC4971CD5D273C9;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ADDPERSISTFACTOR_OFFSET UNITYSDK_OFFSET(0x167E9C50)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_APPLYINSTANTDELTA_OFFSET UNITYSDK_OFFSET(0x167EA030)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_CLEARPROPERTIES_OFFSET UNITYSDK_OFFSET(0x167EB4E0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_FLUSHPENDINGSYNC_OFFSET UNITYSDK_OFFSET(0x167EB1D0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_GETALLDEBUGCONTRIBUTIONS_OFFSET UNITYSDK_OFFSET(0x167EA7F0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_INITPROPERTIES_OFFSET UNITYSDK_OFFSET(0x167EA9D0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x167EA950)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x167EB160)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONDUNGEONPROPERTYSYNCNEEDED_OFFSET UNITYSDK_OFFSET(0x167EB6A0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x167EAF50)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x167EADB0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_POPPROPERTYRATIOSBYTAG_OFFSET UNITYSDK_OFFSET(0x167EA2C0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_PUSHPROPERTYRATIO_OFFSET UNITYSDK_OFFSET(0x167EA180)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REGISTERVALUECHANGEDLISTENER_OFFSET UNITYSDK_OFFSET(0x167EA510)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REMOVEPERSISTFACTORSBYTAG_OFFSET UNITYSDK_OFFSET(0x167E9F10)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REMOVEPERSISTFACTOR_OFFSET UNITYSDK_OFFSET(0x167E9DB0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TICKPROPERTIES_OFFSET UNITYSDK_OFFSET(0x167EAFE0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TICKSYNC_OFFSET UNITYSDK_OFFSET(0x167EAEC0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYMAXVALUE_OFFSET UNITYSDK_OFFSET(0x167E9B20)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYRATIO_OFFSET UNITYSDK_OFFSET(0x167EA3E0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x167E99E0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x167E9880)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_UNREGISTERVALUECHANGEDLISTENER_OFFSET UNITYSDK_OFFSET(0x167EA680)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x167EB710)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x167EB850)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x167EB8E0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x167EB970)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x167EBA10)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonPropertySubsystem_TypeDefinitionIndex = 56557;

	class BigSceneDungeonPropertySubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneDungeonPropertySubsystem*>
	{
	public:
		// static const ::System::Single SyncInterval; // 0x0
		::System::Collections::Generic::Dictionary_2<::Enum_3_40C4D493DB33DA57_1, ::Class_1_30B210AEDB34BA56*>* _properties; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _pendingSyncCache; // 0x18
		::System::Single _syncInterval; // 0x20
		::System::Single _syncTimer; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetPropertyValue(::Enum_3_40C4D493DB33DA57_1 type, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYVALUE_OFFSET))(this, type, value);
		}

		::System::Boolean TryGetPropertySnapshot(::Enum_3_40C4D493DB33DA57_1 type, ::Struct_2_6E1B724B14572104_3& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::Struct_2_6E1B724B14572104_3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYSNAPSHOT_OFFSET))(this, type, value);
		}

		::System::Boolean TryGetPropertyMaxValue(::Enum_3_40C4D493DB33DA57_1 type, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYMAXVALUE_OFFSET))(this, type, value);
		}

		::Struct_2_90E529DB4DCB014F_1 AddPersistFactor(::Enum_3_40C4D493DB33DA57_1 type, ::System::String* tag, ::System::Single deltaRate, ::System::Single duration)
		{
			return ((::Struct_2_90E529DB4DCB014F_1(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ADDPERSISTFACTOR_OFFSET))(this, type, tag, deltaRate, duration);
		}

		::System::Void RemovePersistFactor(::Enum_3_40C4D493DB33DA57_1 type, ::Struct_2_90E529DB4DCB014F_1 handle)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::Struct_2_90E529DB4DCB014F_1))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REMOVEPERSISTFACTOR_OFFSET))(this, type, handle);
		}

		::System::Void RemovePersistFactorsByTag(::Enum_3_40C4D493DB33DA57_1 type, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REMOVEPERSISTFACTORSBYTAG_OFFSET))(this, type, tag);
		}

		::System::Void ApplyInstantDelta(::Enum_3_40C4D493DB33DA57_1 type, ::System::String* tag, ::System::Single delta, ::System::Boolean skipRatio)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_APPLYINSTANTDELTA_OFFSET))(this, type, tag, delta, skipRatio);
		}

		::System::Void PushPropertyRatio(::Enum_3_40C4D493DB33DA57_1 type, ::System::String* tag, ::System::Single ratioValue)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_PUSHPROPERTYRATIO_OFFSET))(this, type, tag, ratioValue);
		}

		::System::Void PopPropertyRatiosByTag(::Enum_3_40C4D493DB33DA57_1 type, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_POPPROPERTYRATIOSBYTAG_OFFSET))(this, type, tag);
		}

		::System::Boolean TryGetPropertyRatio(::Enum_3_40C4D493DB33DA57_1 type, ::System::Single& ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TRYGETPROPERTYRATIO_OFFSET))(this, type, ratio);
		}

		::System::Void RegisterValueChangedListener(::Enum_3_40C4D493DB33DA57_1 type, ::System::Action_2<::System::Single, ::System::Single>* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_REGISTERVALUECHANGEDLISTENER_OFFSET))(this, type, listener);
		}

		::System::Void UnregisterValueChangedListener(::Enum_3_40C4D493DB33DA57_1 type, ::System::Action_2<::System::Single, ::System::Single>* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_UNREGISTERVALUECHANGEDLISTENER_OFFSET))(this, type, listener);
		}

		::System::Collections::Generic::List_1<::Class_1_BBC4971CD5D273C9*>* GetAllDebugContributions(::Enum_3_40C4D493DB33DA57_1 type)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_BBC4971CD5D273C9*>*(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_GETALLDEBUGCONTRIBUTIONS_OFFSET))(this, type);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_INITPROPERTIES_OFFSET))(this);
		}

		::System::Void ClearProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_CLEARPROPERTIES_OFFSET))(this);
		}

		::System::Void TickProperties(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TICKPROPERTIES_OFFSET))(this, deltaTime);
		}

		::System::Void TickSync(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_TICKSYNC_OFFSET))(this, deltaTime);
		}

		::System::Void FlushPendingSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_FLUSHPENDINGSYNC_OFFSET))(this);
		}

		::System::Void OnDungeonPropertySyncNeeded(::Enum_3_40C4D493DB33DA57_1 propertyType, ::System::Int32 currentValue)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_40C4D493DB33DA57_1, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM_ONDUNGEONPROPERTYSYNCNEEDED_OFFSET))(this, propertyType, currentValue);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
