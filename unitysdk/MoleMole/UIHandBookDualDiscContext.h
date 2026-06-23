#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHANDBOOKDUALDISCCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7DF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookDualDiscContext_TypeDefinitionIndex = 43611;

	class UIHandBookDualDiscContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnSelectConfirm; // 0x28
		::System::Boolean isCanSelect; // 0x30
		::System::Boolean isShowTarget; // 0x31
		::System::ValueTuple_2<::System::Int32, ::System::Int32> DiscSuitPair; // 0x34
		::System::UInt32 DefaultCheckedAvatarID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDUALDISCCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
