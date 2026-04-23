#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageInfiniteMonsterGroupRow; }
namespace RPG::GameCore { class StageInfiniteWaveConfigRow; }

#define RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAACADE0)
#define RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAACAF10)
#define RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAACAF70)
#define RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAACAF20)
#define RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAACADD0)
#define RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0xAACA8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterData___GetMonsterIDEnumeratorByInfiniteWaveID_d__20_TypeDefinitionIndex = 58157;

	class MonsterData___GetMonsterIDEnumeratorByInfiniteWaveID_d__20 : public ::System::Object
	{
	public:
		::RPG::GameCore::StageInfiniteWaveConfigRow* _waveRow_5__2; // 0x10
		::RPG::GameCore::StageInfiniteMonsterGroupRow* _groupRow_5__4; // 0x18
		::System::Int32 _j_5__5; // 0x20
		::System::Int32 _i_5__3; // 0x24
		::System::UInt32 waveID; // 0x28
		::System::UInt32 __2__current; // 0x2C
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___GETMONSTERIDENUMERATORBYINFINITEWAVEID_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
