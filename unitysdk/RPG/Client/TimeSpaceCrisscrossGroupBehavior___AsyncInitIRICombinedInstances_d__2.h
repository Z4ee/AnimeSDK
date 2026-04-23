#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_265;
class Class_1_0BF4BC17BA691114;
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB308A90)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB309C80)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB309CE0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB309C90)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB308A40)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0xB2FFB30)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB308A70)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xB308A80)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior___AsyncInitIRICombinedInstances_d__2_TypeDefinitionIndex = 64725;

	class TimeSpaceCrisscrossGroupBehavior___AsyncInitIRICombinedInstances_d__2 : public ::System::Object
	{
	public:
		::RPG::Client::TimeSpaceCrisscrossGroupBehavior* __4__this; // 0x10
		::RPG::Client::LiteInstancedItem::ItemPrototype* _prototypeNormalDeformation_5__9; // 0x18
		::Class_1_0BF4BC17BA691114* _tscItemInstance_5__15; // 0x20
		::UnityEngine::Mesh* _targetMesh_5__6; // 0x28
		::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Mesh*, ::UnityEngine::Material*>, ::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData*>*> _iriTemplate_5__5; // 0x30
		::System::Collections::Generic::List_1_Enumerator<::Class_1_0BF4BC17BA691114*> __7__wrap13; // 0x48
		::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData* _data_5__11; // 0x60
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Mesh*, ::UnityEngine::Material*>, ::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData*>*> __7__wrap3; // 0x68
		::Class_0_16E4307DCC419505_265* __2__current; // 0x98
		::UnityEngine::Material* _instanceItemMat_5__7; // 0xA0
		::RPG::Client::LiteInstancedItem::ItemPrototype* _prototypeNormal_5__8; // 0xA8
		::System::Boolean _includeDeformation_5__12; // 0xB0
		::System::Int32 _j_5__13; // 0xB4
		::System::Int32 __1__state; // 0xB8
		::System::Int32 workID; // 0xBC
		::System::Int32 _batchSize_5__2; // 0xC0
		::System::Int32 _batchCounter_5__3; // 0xC4
		::System::Int32 _i_5__10; // 0xC8

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2___M__FINALLY2_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_265* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_265*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
