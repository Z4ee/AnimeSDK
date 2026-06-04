#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNode_1.h"

class Class_1_9E350A19BBA25CA5;

#define CLASS_3_8C3755F0AD94625A_METHOD_3_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13B4E500)
#define CLASS_3_8C3755F0AD94625A_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x13B4E400)
#define CLASS_3_8C3755F0AD94625A__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4E550)
#define CLASS_3_8C3755F0AD94625A___IFIXBASEPROXY_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x13B4E570)

inline static constexpr unsigned int Class_3_8C3755F0AD94625A_TypeDefinitionIndex = 57080;

class Class_3_8C3755F0AD94625A : public ::RPG::Client::WorkNode_1<::Class_1_9E350A19BBA25CA5*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C3755F0AD94625A__CTOR_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C3755F0AD94625A_ONSTARTLOADING_OFFSET))(this);
	}

	::System::Void Method_3_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C3755F0AD94625A_METHOD_3_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C3755F0AD94625A___IFIXBASEPROXY_ONSTARTLOADING_OFFSET))(this);
	}
};
