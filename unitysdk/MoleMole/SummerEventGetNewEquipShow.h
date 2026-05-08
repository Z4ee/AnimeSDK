#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_SUMMEREVENTGETNEWEQUIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1585EDF0)
#define MOLEMOLE_SUMMEREVENTGETNEWEQUIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1585EDB0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventGetNewEquipShow_TypeDefinitionIndex = 58475;

	class SummerEventGetNewEquipShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _id; // 0x28

		::System::Void _ctor(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTGETNEWEQUIPSHOW__CTOR_OFFSET))(this, id);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTGETNEWEQUIPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
