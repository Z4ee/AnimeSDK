#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_34;
namespace RPG::Client { class AnnounceData; }

#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1829DAC0)
#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS40_0___ONSERVERANNOUNCENOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0x1829ED30)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule___c__DisplayClass40_0_TypeDefinitionIndex = 63465;

	class OperationModule___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::Class_1_21DCD4640D389503_34* proto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnServerAnnounceNotify_b__0(::RPG::Client::AnnounceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnnounceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS40_0___ONSERVERANNOUNCENOTIFY_B__0_OFFSET))(this, a1);
		}
	};
}
