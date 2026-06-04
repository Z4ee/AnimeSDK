#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

#define RPG_CLIENT_EMPTYPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB90A1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmptyPageContext_TypeDefinitionIndex = 67971;

	class EmptyPageContext : public ::RPG::Client::UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
