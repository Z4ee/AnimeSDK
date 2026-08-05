#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CDNDesignData; }
namespace MoleMole { class CDNGameRes; }
namespace MoleMole { class CDNSilenceData; }

#define MOLEMOLE_CDN_DISPATCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12EE1D60)

namespace MoleMole
{
	inline static constexpr unsigned int CDN_DispatchData_TypeDefinitionIndex = 63996;

	class CDN_DispatchData : public ::System::Object
	{
	public:
		::MoleMole::CDNGameRes* game_res; // 0x10
		::MoleMole::CDNDesignData* design_data; // 0x18
		::MoleMole::CDNSilenceData* silence_data; // 0x20
		::MoleMole::CDNGameRes* pre_download; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CDN_DISPATCHDATA__CTOR_OFFSET))(this);
		}
	};
}
