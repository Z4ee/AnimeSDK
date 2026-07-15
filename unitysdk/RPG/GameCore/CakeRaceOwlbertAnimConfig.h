#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceOwlbertAnim; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAKERACEOWLBERTANIMCONFIG_METHOD_2_BD854603E796B065_OFFSET UNITYSDK_OFFSET(0x1B704C50)
#define RPG_GAMECORE_CAKERACEOWLBERTANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B704D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceOwlbertAnimConfig_TypeDefinitionIndex = 17639;

	class CakeRaceOwlbertAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CakeRaceOwlbertAnim*>* AnimMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEOWLBERTANIMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BD854603E796B065(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceOwlbertAnimConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceOwlbertAnimConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEOWLBERTANIMCONFIG_METHOD_2_BD854603E796B065_OFFSET))(a1, a2);
		}
	};
}
