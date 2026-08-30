#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterLodInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONSTERLODCONFIG_METHOD_2_CA1EDBED1BABF4E3_OFFSET UNITYSDK_OFFSET(0x1D2D4230)
#define RPG_GAMECORE_MONSTERLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D4310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterLodConfig_TypeDefinitionIndex = 18881;

	class MonsterLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MonsterLodInfo*>* MonsterLodInfoListMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERLODCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CA1EDBED1BABF4E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterLodConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterLodConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERLODCONFIG_METHOD_2_CA1EDBED1BABF4E3_OFFSET))(a1, a2);
		}
	};
}
