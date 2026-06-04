#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DISTRICTAUDIORTPCCONFIG_METHOD_2_B72C4232A4DBAB00_OFFSET UNITYSDK_OFFSET(0x196BDEC0)
#define RPG_GAMECORE_DISTRICTAUDIORTPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196BE110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictAudioRTPCConfig_TypeDefinitionIndex = 16413;

	class DistrictAudioRTPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single RTPCValue; // 0x18
		::System::Boolean IsRandom; // 0x1C
		::System::Single RandomFrequncy; // 0x20
		::System::Single RTPCRangeMin; // 0x24
		::System::Single RTPCRangeMax; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAUDIORTPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B72C4232A4DBAB00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DistrictAudioRTPCConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DistrictAudioRTPCConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAUDIORTPCCONFIG_METHOD_2_B72C4232A4DBAB00_OFFSET))(a1, a2);
		}
	};
}
