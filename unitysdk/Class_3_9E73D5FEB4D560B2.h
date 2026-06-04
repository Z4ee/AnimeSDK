#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class ST_Side_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E73D5FEB4D560B2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB75030)
#define CLASS_3_9E73D5FEB4D560B2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB75080)
#define CLASS_3_9E73D5FEB4D560B2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAB75420)
#define CLASS_3_9E73D5FEB4D560B2_TICK_OFFSET UNITYSDK_OFFSET(0xAB75620)
#define CLASS_3_9E73D5FEB4D560B2__CTOR_OFFSET UNITYSDK_OFFSET(0xAB74FD0)
#define CLASS_3_9E73D5FEB4D560B2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB75680)
#define CLASS_3_9E73D5FEB4D560B2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAB756D0)

inline static constexpr unsigned int Class_3_9E73D5FEB4D560B2_TypeDefinitionIndex = 48854;

class Class_3_9E73D5FEB4D560B2 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_PlayFreeStyle*>
{
public:
	::RPG::GameCore::FreeStyleComponent* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_PlayFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_PlayFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_3_9E73D5FEB4D560B2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E73D5FEB4D560B2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E73D5FEB4D560B2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E73D5FEB4D560B2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9E73D5FEB4D560B2_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E73D5FEB4D560B2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9E73D5FEB4D560B2___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
