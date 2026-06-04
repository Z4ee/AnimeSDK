#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvConfigType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyDataBase.h"

namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTPROPERTYDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x135EFCD0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutPropertyDataBase_TypeDefinitionIndex = 46544;

	class LayoutPropertyDataBase : public ::EnviromentSystemV2Space::PropertyDataBase
	{
	public:
		::System::String* groupInfo; // 0x28
		::EnviromentSystemV2Space::EnvConfigType configType; // 0x30
		::System::Int32 usrData; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTPROPERTYDATABASE__CTOR_OFFSET))(this);
		}
	};
}
