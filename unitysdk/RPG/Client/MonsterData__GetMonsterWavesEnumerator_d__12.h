#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC19AD80)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC19AFD0)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC19B030)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC19AFE0)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC19AD70)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0xC199650)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterData__GetMonsterWavesEnumerator_d__12_TypeDefinitionIndex = 59086;

	class MonsterData__GetMonsterWavesEnumerator_d__12 : public ::System::Object
	{
	public:
		::RPG::GameCore::StageRow* stageRow; // 0x10
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __2__current; // 0x18
		::Il2CppArray<::System::UInt32>* _waveIDs_5__2; // 0x20
		::System::Int32 _i_5__3; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerator_System_Collections_Generic_IEnumerator_System_UInt32___get_Current()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERWAVESENUMERATOR_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
