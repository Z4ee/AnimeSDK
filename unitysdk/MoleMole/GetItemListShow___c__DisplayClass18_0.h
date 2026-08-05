#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GETITEMLISTSHOW___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1A0E0)
#define MOLEMOLE_GETITEMLISTSHOW___C__DISPLAYCLASS18_0__SETGOBTN_B__0_OFFSET UNITYSDK_OFFSET(0x19B1A1E0)

namespace MoleMole
{
	inline static constexpr unsigned int GetItemListShow___c__DisplayClass18_0_TypeDefinitionIndex = 89514;

	class GetItemListShow___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Int32 accessId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetGoBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETITEMLISTSHOW___C__DISPLAYCLASS18_0__SETGOBTN_B__0_OFFSET))(this);
		}
	};
}
