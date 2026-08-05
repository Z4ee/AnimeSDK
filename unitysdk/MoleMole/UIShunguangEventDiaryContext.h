#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISHUNGUANGEVENTDIARYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8D9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShunguangEventDiaryContext_TypeDefinitionIndex = 87799;

	class UIShunguangEventDiaryContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 id; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
