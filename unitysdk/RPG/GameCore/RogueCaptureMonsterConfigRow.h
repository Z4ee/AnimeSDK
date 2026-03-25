#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175E8EE0)
#define RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175E9590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCaptureMonsterConfigRow_TypeDefinitionIndex = 13395;

	class RogueCaptureMonsterConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ScoreRange; // 0x10
		::System::UInt32 ParamGroupID; // 0x18
		::System::UInt32 GameTime; // 0x1C
		::System::UInt32 MonsterNum; // 0x20
		::System::UInt32 PrepareTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueCaptureMonsterConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCaptureMonsterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECAPTUREMONSTERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
