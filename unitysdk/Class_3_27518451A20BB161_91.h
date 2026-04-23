#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1F2DB301ED9D3F9B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129473B0)
#define CLASS_3_27518451A20BB161_91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x129473F0)
#define CLASS_3_27518451A20BB161_91__CTOR_OFFSET UNITYSDK_OFFSET(0x12947380)
#define CLASS_3_27518451A20BB161_91___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12947690)

inline static constexpr unsigned int Class_3_27518451A20BB161_91_TypeDefinitionIndex = 49687;

class Class_3_27518451A20BB161_91 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1F2DB301ED9D3F9B*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1F2DB301ED9D3F9B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1F2DB301ED9D3F9B*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_91___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
