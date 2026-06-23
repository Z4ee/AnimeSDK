#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ABYSSS2_GET_GUARANTEE_AREA_ID_OFFSET UNITYSDK_OFFSET(0x13EB69D0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_TypeDefinitionIndex = 85680;

	class AbyssS2 : public ::System::Object
	{
	public:
		// static const ::System::Int32 S2_CONST_NORMAL_FROM_FLOOR = 0x1; // 0x0
		// static const ::System::Int32 S2_CONST_START_OR_AGENT_POINT_FROM_FLOOR = 0x0; // 0x0
		// static const ::System::Int32 S2_CONST_START_OR_AGENT_POINT_FROM_COL = 0x0; // 0x0
		// static const ::System::Int32 S2_CONST_FINALBOSS_AGENT_FROM_COL = 0x0; // 0x0
		// static const ::System::Int32 S2_CONST_FINALBOSS_FROM_COL = 0x0; // 0x0

		static ::System::Int32 get_GUARANTEE_AREA_ID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GET_GUARANTEE_AREA_ID_OFFSET))();
		}
	};
}
