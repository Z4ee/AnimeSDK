#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEINFINITEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E8DBA0)
#define RPG_GAMECORE_STAGEINFINITEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8DCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInfiniteGroupRow_TypeDefinitionIndex = 14370;

	class StageInfiniteGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WaveIDList; // 0x10
		::System::UInt32 WaveGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StageInfiniteGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInfiniteGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINFINITEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
