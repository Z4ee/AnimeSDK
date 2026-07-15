#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfWaveCustomerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ELFDAILYWAVECONFIG_METHOD_2_BB9704CA79448EEC_OFFSET UNITYSDK_OFFSET(0x1BB35BD0)
#define RPG_GAMECORE_ELFDAILYWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB35CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfDailyWaveConfig_TypeDefinitionIndex = 17746;

	class ElfDailyWaveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ElfWaveCustomerConfig*>* DailyWaveMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDAILYWAVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BB9704CA79448EEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfDailyWaveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfDailyWaveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDAILYWAVECONFIG_METHOD_2_BB9704CA79448EEC_OFFSET))(a1, a2);
		}
	};
}
