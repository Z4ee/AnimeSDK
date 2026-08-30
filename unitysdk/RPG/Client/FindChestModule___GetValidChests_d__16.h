#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_846;
namespace RPG::Client { class FindChestModule; }
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class ChestGroupPropertyRow; }
namespace RPG::GameCore { class FindChestFuncDataRow; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AE64580)
#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_ICHESTDATA__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AE64EB0)
#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_ICHESTDATA__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AE64E40)
#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AE64F50)
#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AE64EA0)
#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AE64E50)
#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE64400)
#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE63850)
#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1AE64460)
#define RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1AE64560)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestModule___GetValidChests_d__16_TypeDefinitionIndex = 64265;

	class FindChestModule___GetValidChests_d__16 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_846* __2__current; // 0x10
		::RPG::Client::MapDef* __3__mapDef; // 0x18
		::RPG::GameCore::FindChestFuncDataRow* findChestRow; // 0x20
		::RPG::GameCore::FindChestFuncDataRow* __3__findChestRow; // 0x28
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>>* _iter_5__2; // 0x30
		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestGroupPropertyRow*> _itor_5__5; // 0x38
		::RPG::Client::MapDef* mapDef; // 0x78
		::RPG::Client::FindChestModule* __4__this; // 0x80
		::RPG::GameCore::RuntimeGroupInfo* _groupInfo_5__3; // 0x88
		::System::Int32 __l__initialThreadId; // 0x90
		::System::Int32 _i_5__4; // 0x94
		::System::Int32 __1__state; // 0x98

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16___M__FINALLY2_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_846* System_Collections_Generic_IEnumerator_RPG_Client_IChestData__get_Current()
		{
			return ((::Class_0_16E4307DCC419505_846*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_ICHESTDATA__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_846*>* System_Collections_Generic_IEnumerable_RPG_Client_IChestData__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_846*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_ICHESTDATA__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___GETVALIDCHESTS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
