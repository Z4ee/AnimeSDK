#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEITEMDROPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x191BBEE0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_RuntimeItemDropInfo_TypeDefinitionIndex = 80761;

	class SummerTideTreasuresSubSystem_RuntimeItemDropInfo : public ::System::Object
	{
	public:
		::System::Int32 baseWeight; // 0x10
		::System::Int32 itemID; // 0x14
		::System::Int32 addWeight; // 0x18
		::System::Int32 score; // 0x1C
		::System::Int32 itemNum; // 0x20
		::System::Int32 curWeight; // 0x24
		::System::Int32 itemStar; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RUNTIMEITEMDROPINFO__CTOR_OFFSET))(this);
		}
	};
}
