#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetAdvLockDistance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_05E0A76D87E274D1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFB8630)
#define CLASS_3_05E0A76D87E274D1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFFB8670)
#define CLASS_3_05E0A76D87E274D1__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB8600)
#define CLASS_3_05E0A76D87E274D1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFB8780)

inline static constexpr unsigned int Class_3_05E0A76D87E274D1_TypeDefinitionIndex = 51698;

class Class_3_05E0A76D87E274D1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetAdvLockDistance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvLockDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvLockDistance*))((::PBYTE)hIl2Cpp + CLASS_3_05E0A76D87E274D1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05E0A76D87E274D1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05E0A76D87E274D1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05E0A76D87E274D1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
