#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class ScrTrfActPerformance; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_487E851286E5F151_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95C64E0)
#define CLASS_1_487E851286E5F151_METHOD_1_132480CA5B9157C1_OFFSET UNITYSDK_OFFSET(0x95C7340)
#define CLASS_1_487E851286E5F151_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x95C7220)
#define CLASS_1_487E851286E5F151_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x95C6B90)
#define CLASS_1_487E851286E5F151_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x95C6A40)
#define CLASS_1_487E851286E5F151_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x95C6620)
#define CLASS_1_487E851286E5F151_METHOD_1_44950E14D07C51F9_OFFSET UNITYSDK_OFFSET(0x95C6A00)
#define CLASS_1_487E851286E5F151_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x95C6E10)
#define CLASS_1_487E851286E5F151_METHOD_1_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x95C6720)
#define CLASS_1_487E851286E5F151_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x95C66A0)
#define CLASS_1_487E851286E5F151_METHOD_1_DF9BC33850128E67_OFFSET UNITYSDK_OFFSET(0x95C72E0)
#define CLASS_1_487E851286E5F151_METHOD_1_F6A580AAC30D7764_OFFSET UNITYSDK_OFFSET(0x95C7400)
#define CLASS_1_487E851286E5F151_TICK_OFFSET UNITYSDK_OFFSET(0x95C6820)
#define CLASS_1_487E851286E5F151__CTOR_OFFSET UNITYSDK_OFFSET(0x95C6470)

inline static constexpr unsigned int Class_1_487E851286E5F151_TypeDefinitionIndex = 49345;

class Class_1_487E851286E5F151 : public ::System::Object
{
public:
	::RPG::Client::Stage* Field_1_6; // 0x10
	::RPG::GameCore::WaitFrame* Field_1_2; // 0x18
	::RPG::GameCore::ScrTrfActPerformance* Field_1_1; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_1_5; // 0x28
	::RPG::GameCore::TaskContext* Field_1_0; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_1_4; // 0x38
	::RPG::GameCore::ScreenTransferActionState Field_1_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScrTrfActPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScrTrfActPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferActionState Method_1_44950E14D07C51F9()
	{
		return ((::RPG::GameCore::ScreenTransferActionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_44950E14D07C51F9_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_1_DF9BC33850128E67(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_DF9BC33850128E67_OFFSET))(this, a1);
	}

	::System::Void Method_1_132480CA5B9157C1(::RPG::GameCore::TaskConfig* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_132480CA5B9157C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6A580AAC30D7764(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_F6A580AAC30D7764_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_487E851286E5F151_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
