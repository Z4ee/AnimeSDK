#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x17E7D570)
#define MOLEMOLE_GALGAME_GALPLAYABLESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7D580)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayableSegment_TypeDefinitionIndex = 40543;

	class GalPlayableSegment : public ::System::Object
	{
	public:
		::System::Int32 End; // 0x10
		::System::Int32 Begin; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYABLESEGMENT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_GET_LENGTH_OFFSET))(this);
		}
	};
}
