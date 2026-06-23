#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_BANGBOOMODGARAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C499B0)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooModGarageContext_TypeDefinitionIndex = 66216;

	class BangbooModGarageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsPreview; // 0x28
		::System::Int32 PreviewBuddyID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOMODGARAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
