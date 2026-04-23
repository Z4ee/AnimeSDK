#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEVERSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AC7540)
#define RPG_GAMECORE_MATCHTHREEVERSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC76F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeVersionRow_TypeDefinitionIndex = 11336;

	class MatchThreeVersionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BirdIDList; // 0x10
		::System::UInt32 ActivityID; // 0x18
		::System::UInt32 ActivityVersion; // 0x1C
		::System::UInt32 PVPModuleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEVERSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeVersionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeVersionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEVERSIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
