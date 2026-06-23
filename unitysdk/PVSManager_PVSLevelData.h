#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PVSMANAGER_PVSLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x4E6C30)

inline static constexpr unsigned int PVSManager_PVSLevelData_TypeDefinitionIndex = 37439;

struct alignas(4) PVSManager_PVSLevelData
{
	::System::Int32 levelID; // 0x10
	::System::Int32 start; // 0x14
	::System::Int32 end; // 0x18

	::System::Void _ctor(::System::Int32 level, ::System::Int32 s, ::System::Int32 e)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PVSMANAGER_PVSLEVELDATA__CTOR_OFFSET))(this, level, s, e);
	}
};
