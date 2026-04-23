#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BasePhaseContext; }

#define RPG_CLIENT_BASEPHASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x9DDBEC0)
#define RPG_CLIENT_BASEPHASE_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x9DDBE70)
#define RPG_CLIENT_BASEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDBF00)

namespace RPG::Client
{
	inline static constexpr unsigned int BasePhase_TypeDefinitionIndex = 56375;

	class BasePhase : public ::System::Object
	{
	public:
		::RPG::Client::BasePhaseContext* mcontext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASE__CTOR_OFFSET))(this);
		}

		::System::Void SetContext(::RPG::Client::BasePhaseContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BasePhaseContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASE_SETCONTEXT_OFFSET))(this, context);
		}

		::RPG::Client::BasePhaseContext* GetContext()
		{
			return ((::RPG::Client::BasePhaseContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPHASE_GETCONTEXT_OFFSET))(this);
		}
	};
}
