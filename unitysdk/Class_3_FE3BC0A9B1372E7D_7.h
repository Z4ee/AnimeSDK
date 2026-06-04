#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_FABFFA2526A8A20F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE45B40)
#define CLASS_3_FE3BC0A9B1372E7D_7_METHOD_3_FFC734B023DE26D2_OFFSET UNITYSDK_OFFSET(0xDE45960)
#define CLASS_3_FE3BC0A9B1372E7D_7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE455A0)
#define CLASS_3_FE3BC0A9B1372E7D_7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDE45AF0)
#define CLASS_3_FE3BC0A9B1372E7D_7__CTOR_OFFSET UNITYSDK_OFFSET(0xDE45520)
#define CLASS_3_FE3BC0A9B1372E7D_7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE45BD0)
#define CLASS_3_FE3BC0A9B1372E7D_7___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDE45B80)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_7_TypeDefinitionIndex = 49266;

class Class_3_FE3BC0A9B1372E7D_7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FABFFA2526A8A20F*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FABFFA2526A8A20F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FABFFA2526A8A20F*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_3_FFC734B023DE26D2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7_METHOD_3_FFC734B023DE26D2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
