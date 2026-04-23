#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtDefenceBatchMonsterInfo; }

#define RPG_GAMECORE_RTDEFENCEWAVEMONSTERINFO_METHOD_2_9D40FD1D4B65BFF1_OFFSET UNITYSDK_OFFSET(0x18DCFC20)
#define RPG_GAMECORE_RTDEFENCEWAVEMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCFDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceWaveMonsterInfo_TypeDefinitionIndex = 17169;

	class RtDefenceWaveMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Delay; // 0x10
		::Il2CppArray<::RPG::GameCore::RtDefenceBatchMonsterInfo*>* BatchList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEWAVEMONSTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9D40FD1D4B65BFF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceWaveMonsterInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceWaveMonsterInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEWAVEMONSTERINFO_METHOD_2_9D40FD1D4B65BFF1_OFFSET))(a1, a2);
		}
	};
}
