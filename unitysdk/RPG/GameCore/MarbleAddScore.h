#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEADDSCORE_METHOD_3_0D3B8D012F7B2574_OFFSET UNITYSDK_OFFSET(0x18A95800)
#define RPG_GAMECORE_MARBLEADDSCORE_METHOD_3_6B69F31B7D9CE4D2_OFFSET UNITYSDK_OFFSET(0x18A958E0)
#define RPG_GAMECORE_MARBLEADDSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A95890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddScore_TypeDefinitionIndex = 15958;

	class MarbleAddScore : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Boolean EnemyTeam; // 0x10
		::System::UInt32 Score; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D3B8D012F7B2574(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSCORE_METHOD_3_0D3B8D012F7B2574_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B69F31B7D9CE4D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSCORE_METHOD_3_6B69F31B7D9CE4D2_OFFSET))(a1, a2);
		}
	};
}
