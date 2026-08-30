#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONFIGGETONTRAIN_METHOD_2_320A9650ABC3AB2A_OFFSET UNITYSDK_OFFSET(0x1D9B0030)
#define RPG_GAMECORE_CONFIGGETONTRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B04C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigGetOnTrain_TypeDefinitionIndex = 16727;

	class ConfigGetOnTrain : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TrainName; // 0x10
		::System::String* LineUpPointName; // 0x18
		::System::Single LineUpPointMixGapTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGGETONTRAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_320A9650ABC3AB2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfigGetOnTrain*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfigGetOnTrain*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGGETONTRAIN_METHOD_2_320A9650ABC3AB2A_OFFSET))(a1, a2);
		}
	};
}
