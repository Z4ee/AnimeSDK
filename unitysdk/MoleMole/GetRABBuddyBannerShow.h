#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_GETRABBUDDYBANNERSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13022E20)
#define MOLEMOLE_GETRABBUDDYBANNERSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13022E70)
#define MOLEMOLE_GETRABBUDDYBANNERSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x13022E30)

namespace MoleMole
{
	inline static constexpr unsigned int GetRABBuddyBannerShow_TypeDefinitionIndex = 79777;

	class GetRABBuddyBannerShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 ID; // 0x28

		::System::Void _ctor(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETRABBUDDYBANNERSHOW__CTOR_OFFSET))(this, id);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETRABBUDDYBANNERSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETRABBUDDYBANNERSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
