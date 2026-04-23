#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class ScrTrfActTaskList; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4146CA2A5025D1B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95969B0)
#define CLASS_1_4146CA2A5025D1B9_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9596CE0)
#define CLASS_1_4146CA2A5025D1B9_METHOD_1_132480CA5B9157C1_OFFSET UNITYSDK_OFFSET(0x9597020)
#define CLASS_1_4146CA2A5025D1B9_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9596F00)
#define CLASS_1_4146CA2A5025D1B9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9596A60)
#define CLASS_1_4146CA2A5025D1B9_METHOD_1_44950E14D07C51F9_OFFSET UNITYSDK_OFFSET(0x9596CA0)
#define CLASS_1_4146CA2A5025D1B9_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x9596DD0)
#define CLASS_1_4146CA2A5025D1B9_METHOD_1_DF9BC33850128E67_OFFSET UNITYSDK_OFFSET(0x9596FC0)
#define CLASS_1_4146CA2A5025D1B9_TICK_OFFSET UNITYSDK_OFFSET(0x9596AD0)
#define CLASS_1_4146CA2A5025D1B9__CTOR_OFFSET UNITYSDK_OFFSET(0x9596940)

inline static constexpr unsigned int Class_1_4146CA2A5025D1B9_TypeDefinitionIndex = 49346;

class Class_1_4146CA2A5025D1B9 : public ::System::Object
{
public:
	::RPG::GameCore::WaitFrame* Field_1_2; // 0x10
	::RPG::GameCore::TaskContext* Field_1_0; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_1_4; // 0x20
	::RPG::GameCore::ScrTrfActTaskList* Field_1_1; // 0x28
	::RPG::GameCore::ScreenTransferActionState Field_1_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActTaskList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActTaskList*))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferActionState Method_1_44950E14D07C51F9()
	{
		return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9_METHOD_1_44950E14D07C51F9_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_1_DF9BC33850128E67(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9_METHOD_1_DF9BC33850128E67_OFFSET))(this, a1);
	}

	::System::Void Method_1_132480CA5B9157C1(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9_METHOD_1_132480CA5B9157C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4146CA2A5025D1B9_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}
};
