#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTSTATEPARSER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x98D4560)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTSTATEPARSER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x98D4550)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTSTATEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x98D4540)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineDefaultStateParser_TypeDefinitionIndex = 53161;

	class GridFightTraitRemarkLineDefaultStateParser : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTSTATEPARSER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTSTATEPARSER_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTSTATEPARSER_GET_ISACTIVE_OFFSET))(this);
		}
	};
}
