#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
class Class_1_2FF4295849ECC7AF;
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA5C9D30)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA5CAF40)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA5CAFA0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA5CAF50)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5C9CD0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C0E50)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA5C9D10)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xA5C9D20)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior___AsyncInitIRICombinedInstances_d__2_TypeDefinitionIndex = 57464;

	class TimeSpaceCrisscrossGroupBehavior___AsyncInitIRICombinedInstances_d__2 : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* _targetMesh_5__6; // 0x10
		::RPG::Client::TimeSpaceCrisscrossGroupBehavior* __4__this; // 0x18
		::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData* _data_5__11; // 0x20
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Mesh*, ::UnityEngine::Material*>, ::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData*>*> __7__wrap3; // 0x28
		::UnityEngine::Material* _instanceItemMat_5__7; // 0x58
		::RPG::Client::LiteInstancedItem::ItemPrototype* _prototypeNormal_5__8; // 0x60
		::Class_0_16E4307DCC419505_260* __2__current; // 0x68
		::System::Collections::Generic::List_1_Enumerator<::Class_1_2FF4295849ECC7AF*> __7__wrap13; // 0x70
		::RPG::Client::LiteInstancedItem::ItemPrototype* _prototypeNormalDeformation_5__9; // 0x88
		::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Mesh*, ::UnityEngine::Material*>, ::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData*>*> _iriTemplate_5__5; // 0x90
		::Class_1_2FF4295849ECC7AF* _tscItemInstance_5__15; // 0xA8
		::System::Int32 _i_5__10; // 0xB0
		::System::Boolean _includeDeformation_5__12; // 0xB4
		::System::Int32 __1__state; // 0xB8
		::System::Int32 _batchSize_5__2; // 0xBC
		::System::Int32 workID; // 0xC0
		::System::Int32 _j_5__13; // 0xC4
		::System::Int32 _batchCounter_5__3; // 0xC8

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

		::Class_0_16E4307DCC419505_260* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_260*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
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
