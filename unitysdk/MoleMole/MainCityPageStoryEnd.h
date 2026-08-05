#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_MAINCITYPAGESTORYEND_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x118E13A0)
#define MOLEMOLE_MAINCITYPAGESTORYEND_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x118E13B0)
#define MOLEMOLE_MAINCITYPAGESTORYEND__CTOR_OFFSET UNITYSDK_OFFSET(0x118E1390)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityPageStoryEnd_TypeDefinitionIndex = 42639;

	class MainCityPageStoryEnd : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYPAGESTORYEND__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYPAGESTORYEND_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYPAGESTORYEND_ONPROCESS_OFFSET))(this);
		}
	};
}
