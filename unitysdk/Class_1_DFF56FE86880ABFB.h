#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class ScrTrfActPerformance; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DFF56FE86880ABFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14188B20)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x14189A60)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_257BFAD4C4600BB3_OFFSET UNITYSDK_OFFSET(0x14189B80)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x14189080)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14188C60)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_44950E14D07C51F9_OFFSET UNITYSDK_OFFSET(0x14189040)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x14189520)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x14188D60)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14188CE0)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x141891D0)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_C3C846853E2FA25F_OFFSET UNITYSDK_OFFSET(0x14189D20)
#define CLASS_1_DFF56FE86880ABFB_METHOD_1_DF9BC33850128E67_OFFSET UNITYSDK_OFFSET(0x14189B20)
#define CLASS_1_DFF56FE86880ABFB_TICK_OFFSET UNITYSDK_OFFSET(0x14188E60)
#define CLASS_1_DFF56FE86880ABFB__CTOR_OFFSET UNITYSDK_OFFSET(0x14188AB0)

inline static constexpr unsigned int Class_1_DFF56FE86880ABFB_TypeDefinitionIndex = 50012;

class Class_1_DFF56FE86880ABFB : public ::System::Object
{
public:
	::Class_3_07C3C4D2990C49EE* Field_1_0; // 0x10
	::RPG::GameCore::WaitFrame* Field_1_1; // 0x18
	::RPG::GameCore::TaskContext* Field_1_2; // 0x20
	::RPG::Client::Stage* Field_1_3; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_1_4; // 0x30
	::RPG::GameCore::ScrTrfActPerformance* Field_1_5; // 0x38
	::RPG::GameCore::ScreenTransferActionState Field_1_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferActionState Method_1_44950E14D07C51F9()
	{
		return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_44950E14D07C51F9_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_1_DF9BC33850128E67(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_DF9BC33850128E67_OFFSET))(this, a1);
	}

	::System::Void Method_1_257BFAD4C4600BB3(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_257BFAD4C4600BB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C3C846853E2FA25F(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_C3C846853E2FA25F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFF56FE86880ABFB_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
