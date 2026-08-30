#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ScrTrfActTaskList; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D8733BA049AFFEB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC466F80)
#define CLASS_1_8D8733BA049AFFEB_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xC4672C0)
#define CLASS_1_8D8733BA049AFFEB_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xC4674D0)
#define CLASS_1_8D8733BA049AFFEB_METHOD_1_257BFAD4C4600BB3_OFFSET UNITYSDK_OFFSET(0xC4675F0)
#define CLASS_1_8D8733BA049AFFEB_METHOD_1_44950E14D07C51F9_OFFSET UNITYSDK_OFFSET(0xC467280)
#define CLASS_1_8D8733BA049AFFEB_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xC466FD0)
#define CLASS_1_8D8733BA049AFFEB_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xC4673B0)
#define CLASS_1_8D8733BA049AFFEB_METHOD_1_DF9BC33850128E67_OFFSET UNITYSDK_OFFSET(0xC467590)
#define CLASS_1_8D8733BA049AFFEB_TICK_OFFSET UNITYSDK_OFFSET(0xC4670B0)
#define CLASS_1_8D8733BA049AFFEB__CTOR_OFFSET UNITYSDK_OFFSET(0xC466F30)

inline static constexpr unsigned int Class_1_8D8733BA049AFFEB_TypeDefinitionIndex = 53779;

class Class_1_8D8733BA049AFFEB : public ::System::Object
{
public:
	::RPG::GameCore::ScrTrfActTaskList* IGHAHBNLIJA; // 0x10
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::Class_3_07C3C4D2990C49EE* LPGMOLOFLOP; // 0x20
	::RPG::GameCore::WaitFrame* FLCFNDDCKOC; // 0x28
	::RPG::GameCore::ScreenTransferActionState NJJCEADBFOH; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActTaskList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActTaskList*))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferActionState Method_1_44950E14D07C51F9()
	{
		return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB_METHOD_1_44950E14D07C51F9_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_1_DF9BC33850128E67(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB_METHOD_1_DF9BC33850128E67_OFFSET))(this, a1);
	}

	::System::Void Method_1_257BFAD4C4600BB3(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB_METHOD_1_257BFAD4C4600BB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D8733BA049AFFEB_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}
};
