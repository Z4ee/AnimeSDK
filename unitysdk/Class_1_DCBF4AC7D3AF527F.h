#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_DCBF4AC7D3AF527F_METHOD_1_03C8F4E30F9931EB_OFFSET UNITYSDK_OFFSET(0x12A607D0)
#define CLASS_1_DCBF4AC7D3AF527F_METHOD_1_CB75AEA56BD834A6_OFFSET UNITYSDK_OFFSET(0x12A60820)
#define CLASS_1_DCBF4AC7D3AF527F__CTOR_OFFSET UNITYSDK_OFFSET(0x12A609C0)

inline static constexpr unsigned int Class_1_DCBF4AC7D3AF527F_TypeDefinitionIndex = 60374;

class Class_1_DCBF4AC7D3AF527F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCBF4AC7D3AF527F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C8F4E30F9931EB(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_DCBF4AC7D3AF527F_METHOD_1_03C8F4E30F9931EB_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_747* Method_1_CB75AEA56BD834A6(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::Class_0_16E4307DCC419505_747*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_DCBF4AC7D3AF527F_METHOD_1_CB75AEA56BD834A6_OFFSET))(this, a1);
	}
};
