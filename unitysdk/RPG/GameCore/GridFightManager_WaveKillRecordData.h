#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C0BFEE1D316B82F5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_WAVEKILLRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA96F1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_WaveKillRecordData_TypeDefinitionIndex = 45019;

	class GridFightManager_WaveKillRecordData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* KillMonsterEntityIDList; // 0x10
		::System::Collections::Generic::List_1<::Class_1_C0BFEE1D316B82F5*>* KillMonsterLineups; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* KillMonsterIDList; // 0x20
		::System::UInt32 WaveIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_WAVEKILLRECORDDATA__CTOR_OFFSET))(this);
		}
	};
}
