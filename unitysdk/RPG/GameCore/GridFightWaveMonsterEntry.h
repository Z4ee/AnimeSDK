#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTWAVEMONSTERENTRY_METHOD_2_F4061F3ABC0F36D1_OFFSET UNITYSDK_OFFSET(0x1D16F160)
#define RPG_GAMECORE_GRIDFIGHTWAVEMONSTERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16F280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaveMonsterEntry_TypeDefinitionIndex = 17952;

	class GridFightWaveMonsterEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x10
		::System::UInt32 Star; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEMONSTERENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F4061F3ABC0F36D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaveMonsterEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaveMonsterEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEMONSTERENTRY_METHOD_2_F4061F3ABC0F36D1_OFFSET))(a1, a2);
		}
	};
}
