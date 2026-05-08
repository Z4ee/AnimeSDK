#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISHUNGUANGEVENTSCRATCHCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x154F5570)

namespace MoleMole
{
	inline static constexpr unsigned int UIShunguangEventScratchCardContext_TypeDefinitionIndex = 75026;

	class UIShunguangEventScratchCardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* onUIClose; // 0x28
		::System::Int32 signID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTSCRATCHCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
