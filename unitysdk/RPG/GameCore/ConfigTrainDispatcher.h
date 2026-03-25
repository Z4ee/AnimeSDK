#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConfigCityTrain; }

#define RPG_GAMECORE_CONFIGTRAINDISPATCHER_METHOD_2_672D06B6DA02B895_OFFSET UNITYSDK_OFFSET(0x1712D7F0)
#define RPG_GAMECORE_CONFIGTRAINDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1712DA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigTrainDispatcher_TypeDefinitionIndex = 15488;

	class ConfigTrainDispatcher : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConfigCityTrain*>* TrainList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGTRAINDISPATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_672D06B6DA02B895(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigTrainDispatcher*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigTrainDispatcher*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGTRAINDISPATCHER_METHOD_2_672D06B6DA02B895_OFFSET))(a1, a2);
		}
	};
}
