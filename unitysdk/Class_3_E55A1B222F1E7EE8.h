#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class SwitchCaseByTeammateCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E55A1B222F1E7EE8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC708D70)
#define CLASS_3_E55A1B222F1E7EE8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC708A40)
#define CLASS_3_E55A1B222F1E7EE8__CTOR_OFFSET UNITYSDK_OFFSET(0xC708830)
#define CLASS_3_E55A1B222F1E7EE8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC708E50)

inline static constexpr unsigned int Class_3_E55A1B222F1E7EE8_TypeDefinitionIndex = 51334;

class Class_3_E55A1B222F1E7EE8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchCaseByTeammateCount*>
{
public:
	::Il2CppArray<::Class_3_E21F6DE9B7FA4D05*>* Field_3_0; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByTeammateCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByTeammateCount*))((::PBYTE)hIl2Cpp + CLASS_3_E55A1B222F1E7EE8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E55A1B222F1E7EE8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E55A1B222F1E7EE8_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E55A1B222F1E7EE8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
