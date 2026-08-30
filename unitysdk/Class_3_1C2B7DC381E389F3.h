#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOFinishReason.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_9A097580DF02CED3;
namespace RPG::GameCore { class ST_Main_PlaySmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1C2B7DC381E389F3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160B8780)
#define CLASS_3_1C2B7DC381E389F3_METHOD_3_F3174D4B80842EAE_OFFSET UNITYSDK_OFFSET(0x160B87E0)
#define CLASS_3_1C2B7DC381E389F3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160B8190)
#define CLASS_3_1C2B7DC381E389F3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x160B86C0)
#define CLASS_3_1C2B7DC381E389F3__CTOR_OFFSET UNITYSDK_OFFSET(0x160B80D0)

inline static constexpr unsigned int Class_3_1C2B7DC381E389F3_TypeDefinitionIndex = 52502;

class Class_3_1C2B7DC381E389F3 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_PlaySmartObject*>
{
public:
	::Class_2_9A097580DF02CED3* DFMOOFNKPOG; // 0x28
	::System::UInt64 OHICNFCJKCM; // 0x30
	::System::UInt32 LOFEALEJFPL; // 0x38
	::System::UInt32 LCJDAMMJLEI; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlaySmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlaySmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_1C2B7DC381E389F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C2B7DC381E389F3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C2B7DC381E389F3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C2B7DC381E389F3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_F3174D4B80842EAE(::RPG::GameCore::SOFinishReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOFinishReason))((::PBYTE)hIl2Cpp + CLASS_3_1C2B7DC381E389F3_METHOD_3_F3174D4B80842EAE_OFFSET))(this, a1);
	}
};
