#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ForceAutoBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5E0399F0CDC350B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139C94F0)
#define CLASS_3_5E0399F0CDC350B7_METHOD_3_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x139C9480)
#define CLASS_3_5E0399F0CDC350B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139C92B0)
#define CLASS_3_5E0399F0CDC350B7__CTOR_OFFSET UNITYSDK_OFFSET(0x139C9210)
#define CLASS_3_5E0399F0CDC350B7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139C9560)

inline static constexpr unsigned int Class_3_5E0399F0CDC350B7_TypeDefinitionIndex = 51437;

class Class_3_5E0399F0CDC350B7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForceAutoBattle*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceAutoBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceAutoBattle*))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7_METHOD_3_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
