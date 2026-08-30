#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightWaveMonsterEntry; }

#define RPG_GAMECORE_GRIDFIGHTWAVEMONSTERINFO_METHOD_2_8F5B80DE79F17F9F_OFFSET UNITYSDK_OFFSET(0x1D3C16E0)
#define RPG_GAMECORE_GRIDFIGHTWAVEMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C18F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaveMonsterInfo_TypeDefinitionIndex = 17953;

	class GridFightWaveMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EliteGroup2; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 HardLevel; // 0x18
		::System::UInt32 FormationWaveID; // 0x1C
		::Il2CppArray<::RPG::GameCore::GridFightWaveMonsterEntry*>* MonsterList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEMONSTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8F5B80DE79F17F9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaveMonsterInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaveMonsterInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAVEMONSTERINFO_METHOD_2_8F5B80DE79F17F9F_OFFSET))(a1, a2);
		}
	};
}
