#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleVersusBarCountDownEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_97BFDE086287EB57_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4849F0)
#define CLASS_3_97BFDE086287EB57_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE484A30)
#define CLASS_3_97BFDE086287EB57__CTOR_OFFSET UNITYSDK_OFFSET(0xE4849C0)
#define CLASS_3_97BFDE086287EB57___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE484B40)

inline static constexpr unsigned int Class_3_97BFDE086287EB57_TypeDefinitionIndex = 52703;

class Class_3_97BFDE086287EB57 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleVersusBarCountDownEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleVersusBarCountDownEffect*))((::PBYTE)hIl2Cpp + CLASS_3_97BFDE086287EB57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97BFDE086287EB57_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97BFDE086287EB57_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97BFDE086287EB57___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
