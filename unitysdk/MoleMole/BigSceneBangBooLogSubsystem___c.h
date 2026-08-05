#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;

#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A17570)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A175B0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCCALLBACK_18_0_OFFSET UNITYSDK_OFFSET(0x12A175C0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCERROR_18_1_OFFSET UNITYSDK_OFFSET(0x12A175D0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBangBooLogSubsystem___c_TypeDefinitionIndex = 86324;

	class BigSceneBangBooLogSubsystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::BigSceneBangBooLogSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BigSceneBangBooLogSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneBangBooLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x485C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _SendRequest_g__RpcCallback_18_0(::Class_0_16E4307DCC419505_36* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCCALLBACK_18_0_OFFSET))(this, rcvMessage);
		}

		::System::Void _SendRequest_g__RpcError_18_1(::Class_0_16E4307DCC419505_36* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCERROR_18_1_OFFSET))(this, rcvMessage);
		}
	};
}
