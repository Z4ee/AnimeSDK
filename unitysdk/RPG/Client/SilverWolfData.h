#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SILVERWOLFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA482CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfData_TypeDefinitionIndex = 55450;

	class SilverWolfData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFDATA__CTOR_OFFSET))(this);
		}
	};
}
