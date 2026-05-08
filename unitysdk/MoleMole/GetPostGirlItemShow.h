#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_GETPOSTGIRLITEMSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1821BDC0)
#define MOLEMOLE_GETPOSTGIRLITEMSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1821C040)
#define MOLEMOLE_GETPOSTGIRLITEMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1821BDD0)

namespace MoleMole
{
	inline static constexpr unsigned int GetPostGirlItemShow_TypeDefinitionIndex = 49613;

	class GetPostGirlItemShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_0D6706375CDAAE8C* Item; // 0x28

		::System::Void _ctor(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETPOSTGIRLITEMSHOW__CTOR_OFFSET))(this, itemData);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETPOSTGIRLITEMSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETPOSTGIRLITEMSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
