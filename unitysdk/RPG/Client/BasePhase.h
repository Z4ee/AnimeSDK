#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BasePhaseContext; }

#define RPG_CLIENT_BASEPHASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x9177040)
#define RPG_CLIENT_BASEPHASE_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x9176FF0)
#define RPG_CLIENT_BASEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9177080)

namespace RPG::Client
{
	inline static constexpr unsigned int BasePhase_TypeDefinitionIndex = 49553;

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
