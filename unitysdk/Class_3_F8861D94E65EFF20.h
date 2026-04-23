#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_F8861D94E65EFF20_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1289B750)
#define CLASS_3_F8861D94E65EFF20_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1289B7D0)
#define CLASS_3_F8861D94E65EFF20_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1289B820)
#define CLASS_3_F8861D94E65EFF20__CTOR_OFFSET UNITYSDK_OFFSET(0x1289B8C0)
#define CLASS_3_F8861D94E65EFF20___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1289B8D0)
#define CLASS_3_F8861D94E65EFF20___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1289B930)

inline static constexpr unsigned int Class_3_F8861D94E65EFF20_TypeDefinitionIndex = 60656;

class Class_3_F8861D94E65EFF20 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::System::UInt32 Field_3_0; // 0x28
	::System::Boolean Field_3_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20__CTOR_OFFSET))(this);
	}

	static ::Class_3_F8861D94E65EFF20* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_F8861D94E65EFF20*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
