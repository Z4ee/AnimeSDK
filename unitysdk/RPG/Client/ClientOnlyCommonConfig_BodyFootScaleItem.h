#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CLIENTONLYCOMMONCONFIG_BODYFOOTSCALEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC01740)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientOnlyCommonConfig_BodyFootScaleItem_TypeDefinitionIndex = 60156;

	class ClientOnlyCommonConfig_BodyFootScaleItem : public ::System::Object
	{
	public:
		::RPG::GameCore::BodySize Body; // 0x10
		::RPG::MVector3 FootScale; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTONLYCOMMONCONFIG_BODYFOOTSCALEITEM__CTOR_OFFSET))(this);
		}
	};
}
