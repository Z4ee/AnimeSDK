#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_C75DDA89CCB3A76B;
class Class_3_C83D8EDE8C2D61C1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_720D1C05AB98C49B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4870D0)
#define CLASS_3_720D1C05AB98C49B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB487170)
#define CLASS_3_720D1C05AB98C49B__CTOR_OFFSET UNITYSDK_OFFSET(0xB4870A0)
#define CLASS_3_720D1C05AB98C49B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB487460)

inline static constexpr unsigned int Class_3_720D1C05AB98C49B_TypeDefinitionIndex = 49685;

class Class_3_720D1C05AB98C49B : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C83D8EDE8C2D61C1*>
{
public:
	::Il2CppArray<::Class_1_C75DDA89CCB3A76B*>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C83D8EDE8C2D61C1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C83D8EDE8C2D61C1*))((::PBYTE)hIl2Cpp + CLASS_3_720D1C05AB98C49B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_720D1C05AB98C49B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_720D1C05AB98C49B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_720D1C05AB98C49B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
