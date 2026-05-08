#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_HOLLOWBIGWORLDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x159F94F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowBigWorldConfig_TypeDefinitionIndex = 40834;

	class HollowBigWorldConfig : public ::System::Object
	{
	public:
		::System::String* BackgroundMatPath; // 0x10
		::System::Boolean BigWorldTestPattern; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWBIGWORLDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
