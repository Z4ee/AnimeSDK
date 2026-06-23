#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GetItemListShow.h"

class Class_1_61B3BCD70D19C820;

#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW_DOPROCESS_OFFSET UNITYSDK_OFFSET(0xE94B0F0)
#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE94B0E0)
#define MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___BASE_DOPROCESS_OFFSET UNITYSDK_OFFSET(0xE94B460)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyFashionPartGetItemListShow_TypeDefinitionIndex = 73548;

	class BuddyFashionPartGetItemListShow : public ::MoleMole::GetItemListShow
	{
	public:
		::System::Void _ctor(::Class_1_61B3BCD70D19C820* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_61B3BCD70D19C820*))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW_DOPROCESS_OFFSET))(this);
		}

		::System::Void __base_DoProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYFASHIONPARTGETITEMLISTSHOW___BASE_DOPROCESS_OFFSET))(this);
		}
	};
}
