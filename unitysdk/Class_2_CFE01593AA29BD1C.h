#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
class Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMiniGameManager; }
namespace RPG::GameCore { class HipplenGameWaitEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CFE01593AA29BD1C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13975BA0)
#define CLASS_2_CFE01593AA29BD1C_METHOD_2_D3314DFA55F6676E_OFFSET UNITYSDK_OFFSET(0x13975D30)
#define CLASS_2_CFE01593AA29BD1C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139758A0)
#define CLASS_2_CFE01593AA29BD1C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13975B50)
#define CLASS_2_CFE01593AA29BD1C_TICK_OFFSET UNITYSDK_OFFSET(0x13975AA0)
#define CLASS_2_CFE01593AA29BD1C__CTOR_OFFSET UNITYSDK_OFFSET(0x13975890)

inline static constexpr unsigned int Class_2_CFE01593AA29BD1C_TypeDefinitionIndex = 48885;

class Class_2_CFE01593AA29BD1C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_F3391C70DC37088D* Field_2_0; // 0x18
	::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53* Field_2_1; // 0x20
	::RPG::GameCore::HipplenGameWaitEvent* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameManager* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameWaitEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameWaitEvent*))((::PBYTE)hIl2Cpp + CLASS_2_CFE01593AA29BD1C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFE01593AA29BD1C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CFE01593AA29BD1C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFE01593AA29BD1C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFE01593AA29BD1C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D3314DFA55F6676E(::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53*))((::PBYTE)hIl2Cpp + CLASS_2_CFE01593AA29BD1C_METHOD_2_D3314DFA55F6676E_OFFSET))(this, a1);
	}
};
