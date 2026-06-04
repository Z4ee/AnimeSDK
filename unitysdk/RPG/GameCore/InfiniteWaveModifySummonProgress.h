#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_METHOD_3_05AB269B1C61DA92_OFFSET UNITYSDK_OFFSET(0x1984EDE0)
#define RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_METHOD_3_92BB0C4FB111FCD6_OFFSET UNITYSDK_OFFSET(0x1984ED60)
#define RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1984EDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveModifySummonProgress_TypeDefinitionIndex = 21994;

	class InfiniteWaveModifySummonProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NewPercent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_92BB0C4FB111FCD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveModifySummonProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveModifySummonProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_METHOD_3_92BB0C4FB111FCD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05AB269B1C61DA92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveModifySummonProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveModifySummonProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEMODIFYSUMMONPROGRESS_METHOD_3_05AB269B1C61DA92_OFFSET))(a1, a2);
		}
	};
}
