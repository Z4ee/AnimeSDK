#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class ST_Side_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8B94ADF6078C781C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE2B9A0)
#define CLASS_3_8B94ADF6078C781C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE2B9F0)
#define CLASS_3_8B94ADF6078C781C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE2BD90)
#define CLASS_3_8B94ADF6078C781C_TICK_OFFSET UNITYSDK_OFFSET(0xBE2BF20)
#define CLASS_3_8B94ADF6078C781C__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2B8E0)

inline static constexpr unsigned int Class_3_8B94ADF6078C781C_TypeDefinitionIndex = 52245;

class Class_3_8B94ADF6078C781C : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_PlayFreeStyle*>
{
public:
	::RPG::GameCore::FreeStyleComponent* ECLBHCIOKHB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_PlayFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_PlayFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_3_8B94ADF6078C781C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B94ADF6078C781C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B94ADF6078C781C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B94ADF6078C781C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8B94ADF6078C781C_TICK_OFFSET))(this, a1);
	}
};
