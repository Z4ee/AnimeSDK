#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_HOLLOWPOPINTERACTOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B921BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowPopInteractOption_TypeDefinitionIndex = 59373;

	class HollowPopInteractOption : public ::System::Object
	{
	public:
		::System::String* Description02TextMap; // 0x10
		::System::String* Description01TextMap; // 0x18
		::System::Int32 Icon; // 0x20
		::System::UInt32 OptionParam; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWPOPINTERACTOPTION__CTOR_OFFSET))(this);
		}
	};
}
