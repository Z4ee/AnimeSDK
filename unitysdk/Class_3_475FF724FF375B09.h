#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_FF65FA96463E7784;
class Class_3_01FB158BC8A8CDA0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_475FF724FF375B09_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB70930)
#define CLASS_3_475FF724FF375B09_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB70970)
#define CLASS_3_475FF724FF375B09__CTOR_OFFSET UNITYSDK_OFFSET(0xAB70900)
#define CLASS_3_475FF724FF375B09___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB70A50)

inline static constexpr unsigned int Class_3_475FF724FF375B09_TypeDefinitionIndex = 50269;

class Class_3_475FF724FF375B09 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_01FB158BC8A8CDA0*>
{
public:
	::Class_1_FF65FA96463E7784* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_01FB158BC8A8CDA0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_01FB158BC8A8CDA0*))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_475FF724FF375B09___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
