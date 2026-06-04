#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_278;
class Class_1_2FF4295849ECC7AF;
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCA60710)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCA61AE0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCA61B40)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCA61AF0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA606C0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0xCA56E60)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCA606F0)
#define RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xCA60700)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior___AsyncInitIRICombinedInstances_d__2_TypeDefinitionIndex = 65647;

	class TimeSpaceCrisscrossGroupBehavior___AsyncInitIRICombinedInstances_d__2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Mesh*, ::UnityEngine::Material*>, ::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData*>*> __7__wrap3; // 0x10
		::Class_1_2FF4295849ECC7AF* _tscItemInstance_5__15; // 0x40
		::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData* _data_5__11; // 0x48
		::UnityEngine::Mesh* _targetMesh_5__6; // 0x50
		::RPG::Client::TimeSpaceCrisscrossGroupBehavior* __4__this; // 0x58
		::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::Mesh*, ::UnityEngine::Material*>, ::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin_TSCInstanceData*>*> _iriTemplate_5__5; // 0x60
		::Class_0_16E4307DCC419505_278* __2__current; // 0x78
		::RPG::Client::LiteInstancedItem::ItemPrototype* _prototypeNormal_5__8; // 0x80
		::UnityEngine::Material* _instanceItemMat_5__7; // 0x88
		::RPG::Client::LiteInstancedItem::ItemPrototype* _prototypeNormalDeformation_5__9; // 0x90
		::System::Collections::Generic::List_1_Enumerator<::Class_1_2FF4295849ECC7AF*> __7__wrap13; // 0x98
		::System::Int32 __1__state; // 0xB0
		::System::Boolean _includeDeformation_5__12; // 0xB4
		::System::Int32 _batchSize_5__2; // 0xB8
		::System::Int32 workID; // 0xBC
		::System::Int32 _i_5__10; // 0xC0
		::System::Int32 _j_5__13; // 0xC4
		::System::Int32 _batchCounter_5__3; // 0xC8

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2__CTOR_OFFSET))(this, a1);
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

		::Class_0_16E4307DCC419505_278* System_Collections_Generic_IEnumerator_RPG_Work_IAsyncWorkStepResult__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_278*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSGROUPBEHAVIOR___ASYNCINITIRICOMBINEDINSTANCES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_WORK_IASYNCWORKSTEPRESULT__GET_CURRENT_OFFSET))(this);
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
