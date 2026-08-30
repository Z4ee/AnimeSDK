#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class ST_Main_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6C89322EF0B3A45E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13F1CAC0)
#define CLASS_3_6C89322EF0B3A45E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13F1CB10)
#define CLASS_3_6C89322EF0B3A45E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13F1CEB0)
#define CLASS_3_6C89322EF0B3A45E_TICK_OFFSET UNITYSDK_OFFSET(0x13F1CF00)
#define CLASS_3_6C89322EF0B3A45E__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1CA00)

inline static constexpr unsigned int Class_3_6C89322EF0B3A45E_TypeDefinitionIndex = 52500;

class Class_3_6C89322EF0B3A45E : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_PlayFreeStyle*>
{
public:
	::RPG::GameCore::FreeStyleComponent* ECLBHCIOKHB; // 0x28
	::System::Single PGMIOKKLHIE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlayFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlayFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_3_6C89322EF0B3A45E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C89322EF0B3A45E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C89322EF0B3A45E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C89322EF0B3A45E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C89322EF0B3A45E_TICK_OFFSET))(this, a1);
	}
};
