#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALSORTCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA9E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSortControllerContext_TypeDefinitionIndex = 47124;

	class UIGeneralSortControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* onClosed; // 0x28
		::System::Action* onOpen; // 0x30
		::System::Action_1<::System::Int32>* onDeleteClick; // 0x38
		::System::Action* onChanged; // 0x40
		::System::Boolean showForceSetOwn; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
