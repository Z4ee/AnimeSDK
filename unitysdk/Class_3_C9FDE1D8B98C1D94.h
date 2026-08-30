#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
class Class_3_954FA5B15CD7185B;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C9FDE1D8B98C1D94_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE81BE0)
#define CLASS_3_C9FDE1D8B98C1D94_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE81870)
#define CLASS_3_C9FDE1D8B98C1D94__CTOR_OFFSET UNITYSDK_OFFSET(0xBE81710)

inline static constexpr unsigned int Class_3_C9FDE1D8B98C1D94_TypeDefinitionIndex = 55262;

class Class_3_C9FDE1D8B98C1D94 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_954FA5B15CD7185B*>
{
public:
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x28
	::Class_3_07C3C4D2990C49EE* ECMFFNPIHGD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_954FA5B15CD7185B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_954FA5B15CD7185B*))((::PBYTE)hIl2Cpp + CLASS_3_C9FDE1D8B98C1D94__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9FDE1D8B98C1D94_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9FDE1D8B98C1D94_DISPOSE_OFFSET))(this);
	}
};
