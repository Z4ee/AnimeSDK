#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIWAREPS4_ISBGMOVERRIDDEN_OFFSET UNITYSDK_OFFSET(0x146DE210)
#define CRIWARE_CRIWAREPS4__CTOR_OFFSET UNITYSDK_OFFSET(0x146DE220)

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS4_TypeDefinitionIndex = 36967;

	class CriWarePS4 : public ::System::Object
	{
	public:
		// static const ::System::Int32 systemUserID = 0xFF; // 0x0
		// static const ::System::Int32 bgmRackID = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREPS4__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsBgmOverridden()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREPS4_ISBGMOVERRIDDEN_OFFSET))();
		}
	};
}
