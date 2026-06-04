#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialLockControl; }

#define CLASS_3_8C5A1471D44D1460_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142092E0)
#define CLASS_3_8C5A1471D44D1460_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14209320)
#define CLASS_3_8C5A1471D44D1460__CTOR_OFFSET UNITYSDK_OFFSET(0x142092B0)
#define CLASS_3_8C5A1471D44D1460___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14209450)

inline static constexpr unsigned int Class_3_8C5A1471D44D1460_TypeDefinitionIndex = 49952;

class Class_3_8C5A1471D44D1460 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialLockControl*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialLockControl* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialLockControl*))((::PBYTE)hIl2Cpp + CLASS_3_8C5A1471D44D1460__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C5A1471D44D1460_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C5A1471D44D1460_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C5A1471D44D1460___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
