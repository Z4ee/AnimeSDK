#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropFastDeliverSetSimplifiedMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DBAE6B31A3EE0052_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144FCD60)
#define CLASS_3_DBAE6B31A3EE0052_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144FCC60)
#define CLASS_3_DBAE6B31A3EE0052_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x144FCD10)
#define CLASS_3_DBAE6B31A3EE0052__CTOR_OFFSET UNITYSDK_OFFSET(0x144FCC30)
#define CLASS_3_DBAE6B31A3EE0052___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144FCE10)
#define CLASS_3_DBAE6B31A3EE0052___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x144FCDC0)

inline static constexpr unsigned int Class_3_DBAE6B31A3EE0052_TypeDefinitionIndex = 54519;

class Class_3_DBAE6B31A3EE0052 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropFastDeliverSetSimplifiedMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode*))((::PBYTE)hIl2Cpp + CLASS_3_DBAE6B31A3EE0052__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBAE6B31A3EE0052_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBAE6B31A3EE0052_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBAE6B31A3EE0052_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBAE6B31A3EE0052___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBAE6B31A3EE0052___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
