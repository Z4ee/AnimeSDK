#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_FORBIDDENAREAINSIGHTLEVELUPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1261C610)
#define MOLEMOLE_FORBIDDENAREAINSIGHTLEVELUPSHOW_INITIGNOREPOPCTRL_OFFSET UNITYSDK_OFFSET(0x1261C6A0)
#define MOLEMOLE_FORBIDDENAREAINSIGHTLEVELUPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1261C6F0)
#define MOLEMOLE_FORBIDDENAREAINSIGHTLEVELUPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1261C620)

namespace MoleMole
{
	inline static constexpr unsigned int ForbiddenAreaInsightLevelUpShow_TypeDefinitionIndex = 39852;

	class ForbiddenAreaInsightLevelUpShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::UInt32 NewInsight; // 0x28
		::System::UInt32 LastInsight; // 0x2C

		::System::Void _ctor(::System::UInt32 lastInsight, ::System::UInt32 newInsight)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FORBIDDENAREAINSIGHTLEVELUPSHOW__CTOR_OFFSET))(this, lastInsight, newInsight);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FORBIDDENAREAINSIGHTLEVELUPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void InitIgnorePopCtrl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FORBIDDENAREAINSIGHTLEVELUPSHOW_INITIGNOREPOPCTRL_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FORBIDDENAREAINSIGHTLEVELUPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
