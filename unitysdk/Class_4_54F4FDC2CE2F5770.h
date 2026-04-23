#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_77CF7DC62C1C1163.h"

namespace RPG::GameCore { class ChangeCharacterConfigParamClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_54F4FDC2CE2F5770_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C08410)
#define CLASS_4_54F4FDC2CE2F5770__CTOR_OFFSET UNITYSDK_OFFSET(0x11C083E0)
#define CLASS_4_54F4FDC2CE2F5770___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C08590)

inline static constexpr unsigned int Class_4_54F4FDC2CE2F5770_TypeDefinitionIndex = 50652;

class Class_4_54F4FDC2CE2F5770 : public ::Class_3_77CF7DC62C1C1163
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*))((::PBYTE)hIl2Cpp + CLASS_4_54F4FDC2CE2F5770__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_54F4FDC2CE2F5770_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_54F4FDC2CE2F5770___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
