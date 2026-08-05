#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_GETITEMSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1924F2C0)
#define MOLEMOLE_GETITEMSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1924F310)
#define MOLEMOLE_GETITEMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1924F2D0)

namespace MoleMole
{
	inline static constexpr unsigned int GetItemShow_TypeDefinitionIndex = 67733;

	class GetItemShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 itemID; // 0x28
		::System::Int32 count; // 0x2C

		::System::Void _ctor(::System::Int32 id, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMSHOW__CTOR_OFFSET))(this, id, count);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
