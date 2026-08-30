#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ScrTrfActPerformanceGroup; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A7F98779FC8B8673_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15580D90)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x15580ED0)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15581380)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15581B50)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_257BFAD4C4600BB3_OFFSET UNITYSDK_OFFSET(0x15581C70)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_44950E14D07C51F9_OFFSET UNITYSDK_OFFSET(0x15581340)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x15581780)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15580DF0)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x15581480)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_C3C846853E2FA25F_OFFSET UNITYSDK_OFFSET(0x15581E10)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_DF9BC33850128E67_OFFSET UNITYSDK_OFFSET(0x15581C10)
#define CLASS_1_A7F98779FC8B8673_METHOD_1_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x15580FB0)
#define CLASS_1_A7F98779FC8B8673_TICK_OFFSET UNITYSDK_OFFSET(0x15581160)
#define CLASS_1_A7F98779FC8B8673__CTOR_OFFSET UNITYSDK_OFFSET(0x15580D40)

inline static constexpr unsigned int Class_1_A7F98779FC8B8673_TypeDefinitionIndex = 53777;

class Class_1_A7F98779FC8B8673 : public ::System::Object
{
public:
	::RPG::GameCore::WaitFrame* FLCFNDDCKOC; // 0x10
	::RPG::GameCore::ScrTrfActPerformanceGroup* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
	::Class_3_07C3C4D2990C49EE* DFPELEEAMOL; // 0x28
	::Class_3_07C3C4D2990C49EE* LPGMOLOFLOP; // 0x30
	::RPG::GameCore::ScreenTransferActionState NJJCEADBFOH; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActPerformanceGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActPerformanceGroup*))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferActionState Method_1_44950E14D07C51F9()
	{
		return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_44950E14D07C51F9_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_1_DF9BC33850128E67(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_DF9BC33850128E67_OFFSET))(this, a1);
	}

	::System::Void Method_1_257BFAD4C4600BB3(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_257BFAD4C4600BB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C3C846853E2FA25F(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_C3C846853E2FA25F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7F98779FC8B8673_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
