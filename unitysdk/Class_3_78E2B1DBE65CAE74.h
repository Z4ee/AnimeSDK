#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class SwitchCaseByTeammateCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_78E2B1DBE65CAE74_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11057E70)
#define CLASS_3_78E2B1DBE65CAE74_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11057B40)
#define CLASS_3_78E2B1DBE65CAE74__CTOR_OFFSET UNITYSDK_OFFSET(0x11057930)
#define CLASS_3_78E2B1DBE65CAE74___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11057F50)

inline static constexpr unsigned int Class_3_78E2B1DBE65CAE74_TypeDefinitionIndex = 44600;

class Class_3_78E2B1DBE65CAE74 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchCaseByTeammateCount*>
{
public:
	::Il2CppArray<::Class_3_5775A4FEC79026BC*>* Field_3_0; // 0x28
	::Class_3_5775A4FEC79026BC* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByTeammateCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByTeammateCount*))((::PBYTE)hIl2Cpp + CLASS_3_78E2B1DBE65CAE74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78E2B1DBE65CAE74_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78E2B1DBE65CAE74_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_78E2B1DBE65CAE74___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
