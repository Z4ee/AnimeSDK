#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1F2DB301ED9D3F9B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_94_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA59AFA0)
#define CLASS_3_27518451A20BB161_94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA59AFE0)
#define CLASS_3_27518451A20BB161_94__CTOR_OFFSET UNITYSDK_OFFSET(0xA59AF70)
#define CLASS_3_27518451A20BB161_94___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA59B280)

inline static constexpr unsigned int Class_3_27518451A20BB161_94_TypeDefinitionIndex = 50354;

class Class_3_27518451A20BB161_94 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1F2DB301ED9D3F9B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1F2DB301ED9D3F9B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1F2DB301ED9D3F9B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_94_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_94_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_94___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
