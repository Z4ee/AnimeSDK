#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingVolumeComponentData.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_METHOD_4_787A36F7661802AA_OFFSET UNITYSDK_OFFSET(0x18EA8430)
#define RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_METHOD_4_97326DA6C61AF005_OFFSET UNITYSDK_OFFSET(0x18EA7AC0)
#define RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA8420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingRatioVolumeData_TypeDefinitionIndex = 18144;

	class StreamingRatioVolumeData : public ::RPG::GameCore::StreamingVolumeComponentData
	{
	public:
		::System::Single RangeBegin; // 0x10
		::System::Single RangeEnd; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_97326DA6C61AF005(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingRatioVolumeData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingRatioVolumeData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_METHOD_4_97326DA6C61AF005_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_787A36F7661802AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StreamingRatioVolumeData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StreamingRatioVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STREAMINGRATIOVOLUMEDATA_METHOD_4_787A36F7661802AA_OFFSET))(a1, a2);
		}
	};
}
