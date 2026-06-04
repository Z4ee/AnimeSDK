#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOFinishReason.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_9A097580DF02CED3;
namespace RPG::GameCore { class ST_Main_PlaySmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_04400569E0B2DD76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14198730)
#define CLASS_3_04400569E0B2DD76_METHOD_3_F3174D4B80842EAE_OFFSET UNITYSDK_OFFSET(0x14198790)
#define CLASS_3_04400569E0B2DD76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141981B0)
#define CLASS_3_04400569E0B2DD76_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14198670)
#define CLASS_3_04400569E0B2DD76__CTOR_OFFSET UNITYSDK_OFFSET(0x14198150)
#define CLASS_3_04400569E0B2DD76___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141987E0)

inline static constexpr unsigned int Class_3_04400569E0B2DD76_TypeDefinitionIndex = 48828;

class Class_3_04400569E0B2DD76 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_PlaySmartObject*>
{
public:
	::Class_2_9A097580DF02CED3* Field_3_0; // 0x28
	::System::UInt32 Field_3_1; // 0x30
	::System::UInt32 Field_3_2; // 0x34
	::System::UInt64 Field_3_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlaySmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlaySmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_04400569E0B2DD76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04400569E0B2DD76_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04400569E0B2DD76_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04400569E0B2DD76_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_F3174D4B80842EAE(::RPG::GameCore::SOFinishReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOFinishReason))((::PBYTE)hIl2Cpp + CLASS_3_04400569E0B2DD76_METHOD_3_F3174D4B80842EAE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04400569E0B2DD76___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
