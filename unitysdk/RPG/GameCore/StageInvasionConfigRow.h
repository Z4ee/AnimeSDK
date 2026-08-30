#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_9E3925703742C6E4;

#define RPG_GAMECORE_STAGEINVASIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5584F0)
#define RPG_GAMECORE_STAGEINVASIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D558680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionConfigRow_TypeDefinitionIndex = 14989;

	class StageInvasionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_9E3925703742C6E4*>* MonsterInvasionList; // 0x10
		::System::UInt32 InvasionID; // 0x18
		::System::UInt32 StageID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageInvasionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInvasionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
