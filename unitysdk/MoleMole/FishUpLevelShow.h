#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_61B3BCD70D19C820;

#define MOLEMOLE_FISHUPLEVELSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x14273820)
#define MOLEMOLE_FISHUPLEVELSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x142738B0)
#define MOLEMOLE_FISHUPLEVELSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x14273830)

namespace MoleMole
{
	inline static constexpr unsigned int FishUpLevelShow_TypeDefinitionIndex = 74369;

	class FishUpLevelShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor(::Class_1_61B3BCD70D19C820* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_61B3BCD70D19C820*))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHUPLEVELSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHUPLEVELSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FISHUPLEVELSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
