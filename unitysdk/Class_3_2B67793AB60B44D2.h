#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChimeraArrangementDisableDragging; }

#define CLASS_3_2B67793AB60B44D2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C77D90)
#define CLASS_3_2B67793AB60B44D2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C77D10)
#define CLASS_3_2B67793AB60B44D2__CTOR_OFFSET UNITYSDK_OFFSET(0x10C77CE0)
#define CLASS_3_2B67793AB60B44D2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C77E00)

inline static constexpr unsigned int Class_3_2B67793AB60B44D2_TypeDefinitionIndex = 54949;

class Class_3_2B67793AB60B44D2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TutorialChimeraArrangementDisableDragging*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialChimeraArrangementDisableDragging*))((::PBYTE)hIl2Cpp + CLASS_3_2B67793AB60B44D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B67793AB60B44D2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B67793AB60B44D2_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B67793AB60B44D2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
