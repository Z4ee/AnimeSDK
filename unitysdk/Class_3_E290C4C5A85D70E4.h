#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwitchCaseByTeammateCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E290C4C5A85D70E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFB9280)
#define CLASS_3_E290C4C5A85D70E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFFB8E10)
#define CLASS_3_E290C4C5A85D70E4__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB8C20)
#define CLASS_3_E290C4C5A85D70E4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFB9360)

inline static constexpr unsigned int Class_3_E290C4C5A85D70E4_TypeDefinitionIndex = 52002;

class Class_3_E290C4C5A85D70E4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchCaseByTeammateCount*>
{
public:
	::Il2CppArray<::Class_3_07C3C4D2990C49EE*>* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByTeammateCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByTeammateCount*))((::PBYTE)hIl2Cpp + CLASS_3_E290C4C5A85D70E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E290C4C5A85D70E4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E290C4C5A85D70E4_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E290C4C5A85D70E4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
