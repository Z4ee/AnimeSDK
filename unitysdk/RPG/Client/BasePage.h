#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_1_89D8044AB73F8F6D;

#define RPG_CLIENT_BASEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDBE30)

namespace RPG::Client
{
	inline static constexpr unsigned int BasePage_TypeDefinitionIndex = 65772;

	class BasePage : public ::RPG::Client::UIController
	{
	public:
		::System::Void _ctor(::Class_1_89D8044AB73F8F6D* view2D)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_89D8044AB73F8F6D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPAGE__CTOR_OFFSET))(this, view2D);
		}
	};
}
