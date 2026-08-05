#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class DesignDataPart; }
namespace Foundation { class GameResPart; }
namespace Foundation { class SilenceDataPart; }

#define FOUNDATION_POSTDISPATCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59C3F0)

namespace Foundation
{
	inline static constexpr unsigned int PostDispatchData_TypeDefinitionIndex = 8267;

	class PostDispatchData : public ::System::Object
	{
	public:
		::Foundation::SilenceDataPart* silence_data; // 0x10
		::Foundation::GameResPart* game_res; // 0x18
		::Foundation::DesignDataPart* design_data; // 0x20

		::System::Void _ctor(::Foundation::GameResPart* gameRes, ::Foundation::DesignDataPart* designData, ::Foundation::SilenceDataPart* silenceData)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::GameResPart*, ::Foundation::DesignDataPart*, ::Foundation::SilenceDataPart*))((::PBYTE)hIl2Cpp + FOUNDATION_POSTDISPATCHDATA__CTOR_OFFSET))(this, gameRes, designData, silenceData);
		}
	};
}
