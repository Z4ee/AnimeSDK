#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHADALZONE_COMMON_HADALROOMSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184678C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_HadalRoomSelectContext_TypeDefinitionIndex = 83406;

	class UIHadalZone_Common_HadalRoomSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 layerIndex; // 0x28
		::System::Int32 layerID; // 0x2C
		::System::Int32 roomID; // 0x30
		::System::Int32 roomIndex; // 0x34
		::System::Int32 zoneId; // 0x38
		::System::Boolean isBattleResultChange; // 0x3C
		::System::Boolean usePrevLayerHistory; // 0x3D
		::System::Int32 subLayerIndex; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_HADALROOMSELECTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
