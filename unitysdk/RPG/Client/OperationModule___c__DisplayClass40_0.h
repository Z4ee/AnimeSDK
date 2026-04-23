#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_27;
namespace RPG::Client { class AnnounceData; }

#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC0C7A0)
#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS40_0___ONSERVERANNOUNCENOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0xAC0D990)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule___c__DisplayClass40_0_TypeDefinitionIndex = 61176;

	class OperationModule___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::Class_1_EBB10EC01CCC4716_27* proto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnServerAnnounceNotify_b__0(::RPG::Client::AnnounceData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnnounceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS40_0___ONSERVERANNOUNCENOTIFY_B__0_OFFSET))(this, x);
		}
	};
}
