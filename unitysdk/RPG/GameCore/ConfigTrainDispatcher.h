#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConfigCityTrain; }

#define RPG_GAMECORE_CONFIGTRAINDISPATCHER_METHOD_2_52DD6AFFB19CBC58_OFFSET UNITYSDK_OFFSET(0x1BC2CC40)
#define RPG_GAMECORE_CONFIGTRAINDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2CE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigTrainDispatcher_TypeDefinitionIndex = 16242;

	class ConfigTrainDispatcher : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConfigCityTrain*>* TrainList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGTRAINDISPATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_52DD6AFFB19CBC58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigTrainDispatcher*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigTrainDispatcher*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGTRAINDISPATCHER_METHOD_2_52DD6AFFB19CBC58_OFFSET))(a1, a2);
		}
	};
}
