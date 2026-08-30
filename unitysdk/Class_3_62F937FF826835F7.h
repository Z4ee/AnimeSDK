#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class SO_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_62F937FF826835F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A7F810)
#define CLASS_3_62F937FF826835F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A7F860)
#define CLASS_3_62F937FF826835F7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A7FBA0)
#define CLASS_3_62F937FF826835F7_TICK_OFFSET UNITYSDK_OFFSET(0x15A7FBF0)
#define CLASS_3_62F937FF826835F7__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7F7A0)

inline static constexpr unsigned int Class_3_62F937FF826835F7_TypeDefinitionIndex = 52408;

class Class_3_62F937FF826835F7 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_PlayFreeStyle*>
{
public:
	::RPG::GameCore::FreeStyleComponent* ECLBHCIOKHB; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_PlayFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_PlayFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_3_62F937FF826835F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62F937FF826835F7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62F937FF826835F7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62F937FF826835F7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_62F937FF826835F7_TICK_OFFSET))(this, a1);
	}
};
