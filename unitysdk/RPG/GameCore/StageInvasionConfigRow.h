#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4EA1942B65BA5BD4;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEINVASIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAE19A0)
#define RPG_GAMECORE_STAGEINVASIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionConfigRow_TypeDefinitionIndex = 15156;

	class StageInvasionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_4EA1942B65BA5BD4*>* MonsterInvasionList; // 0x10
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
