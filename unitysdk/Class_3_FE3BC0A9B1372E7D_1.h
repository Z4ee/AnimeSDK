#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_CFA21987E6EBF45D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14457CE0)
#define CLASS_3_FE3BC0A9B1372E7D_1_METHOD_3_DE2F25FD84F7D432_OFFSET UNITYSDK_OFFSET(0x14457A70)
#define CLASS_3_FE3BC0A9B1372E7D_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14457330)
#define CLASS_3_FE3BC0A9B1372E7D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x144572B0)
#define CLASS_3_FE3BC0A9B1372E7D_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14457D30)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_1_TypeDefinitionIndex = 49245;

class Class_3_FE3BC0A9B1372E7D_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CFA21987E6EBF45D*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CFA21987E6EBF45D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CFA21987E6EBF45D*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_DE2F25FD84F7D432(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1_METHOD_3_DE2F25FD84F7D432_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
