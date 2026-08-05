#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBottleLoginWriteContext_EUse.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;
namespace System { class Action; }

#define MOLEMOLE_UIBOTTLELOGINWRITECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1604C550)

namespace MoleMole
{
	inline static constexpr unsigned int UIBottleLoginWriteContext_TypeDefinitionIndex = 65066;

	class UIBottleLoginWriteContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* closeCallback; // 0x28
		::System::Action* successCallback; // 0x30
		::Class_1_D375C91CCE5D3999* activityData; // 0x38
		::System::Int32 itemID; // 0x40
		::System::Int32 questSpecificID; // 0x44
		::MoleMole::UIBottleLoginWriteContext_EUse use; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOTTLELOGINWRITECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
