#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_1_A167209E71412818;

#define RPG_CLIENT_BASEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x186907D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BasePage_TypeDefinitionIndex = 68143;

	class BasePage : public ::RPG::Client::UIController
	{
	public:
		::System::Void _ctor(::Class_1_A167209E71412818* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A167209E71412818*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPAGE__CTOR_OFFSET))(this, a1);
		}
	};
}
