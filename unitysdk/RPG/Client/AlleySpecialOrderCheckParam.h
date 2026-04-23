#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }

#define RPG_CLIENT_ALLEYSPECIALORDERCHECKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9D19940)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleySpecialOrderCheckParam_TypeDefinitionIndex = 57438;

	class AlleySpecialOrderCheckParam : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackShipData* PackShipData; // 0x10
		::System::Int32 Profit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYSPECIALORDERCHECKPARAM__CTOR_OFFSET))(this);
		}
	};
}
