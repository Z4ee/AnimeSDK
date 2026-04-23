#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0932F0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_0___GETSERVERPINGS_B__0_OFFSET UNITYSDK_OFFSET(0xA0938B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClientStartupPhase___c__DisplayClass17_0_TypeDefinitionIndex = 56386;

	class ClientStartupPhase___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Boolean succeed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void __GetServerPings_b__0(::System::Action_1<::System::Boolean>* resolve, ::System::Action_1<::System::Exception*>* reject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___C__DISPLAYCLASS17_0___GETSERVERPINGS_B__0_OFFSET))(this, resolve, reject);
		}
	};
}
