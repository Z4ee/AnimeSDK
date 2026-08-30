#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEMONSTERINVASIONPARAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CAE7670)
#define RPG_GAMECORE_STAGEMONSTERINVASIONPARAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE77F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageMonsterInvasionParamRow_TypeDefinitionIndex = 14993;

	class StageMonsterInvasionParamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 InvasionID; // 0x18
		::System::UInt32 MonsterID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERINVASIONPARAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageMonsterInvasionParamRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageMonsterInvasionParamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEMONSTERINVASIONPARAMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
