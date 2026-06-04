#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvRecoverTickValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DF09794FB35EB98B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA72D5D0)
#define CLASS_3_DF09794FB35EB98B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA72D650)
#define CLASS_3_DF09794FB35EB98B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA72D610)
#define CLASS_3_DF09794FB35EB98B__CTOR_OFFSET UNITYSDK_OFFSET(0xA72D5A0)
#define CLASS_3_DF09794FB35EB98B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA72D7F0)
#define CLASS_3_DF09794FB35EB98B___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA72D830)

inline static constexpr unsigned int Class_3_DF09794FB35EB98B_TypeDefinitionIndex = 54088;

class Class_3_DF09794FB35EB98B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvRecoverTickValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvRecoverTickValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvRecoverTickValue*))((::PBYTE)hIl2Cpp + CLASS_3_DF09794FB35EB98B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF09794FB35EB98B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF09794FB35EB98B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF09794FB35EB98B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF09794FB35EB98B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF09794FB35EB98B___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
