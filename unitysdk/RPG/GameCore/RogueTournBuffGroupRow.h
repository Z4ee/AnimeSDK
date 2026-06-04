#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNBUFFGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BC06C0)
#define RPG_GAMECORE_ROGUETOURNBUFFGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC0820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffGroupRow_TypeDefinitionIndex = 14282;

	class RogueTournBuffGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RogueBuffDrop; // 0x10
		::System::UInt32 RogueBuffGroupID; // 0x18
		::RPG::GameCore::RogueTournMode TournMode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournBuffGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuffGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
