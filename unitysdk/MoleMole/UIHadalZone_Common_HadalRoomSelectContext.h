#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHADALZONE_COMMON_HADALROOMSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1687F860)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_HadalRoomSelectContext_TypeDefinitionIndex = 54857;

	class UIHadalZone_Common_HadalRoomSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 subLayerIndex; // 0x28
		::System::Boolean usePrevLayerHistory; // 0x2C
		::System::Boolean isBattleResultChange; // 0x2D
		::System::Int32 roomIndex; // 0x30
		::System::Int32 layerID; // 0x34
		::System::Int32 zoneId; // 0x38
		::System::Int32 layerIndex; // 0x3C
		::System::Int32 roomID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_HADALROOMSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
