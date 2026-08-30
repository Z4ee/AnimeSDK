#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_A48F3719AA1CF200_4;
class Class_3_07C3C4D2990C49EE;
class Class_3_A8047719FD27C507;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardPerformViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowRewardParams; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_61C28F682349FF66_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181A4EC0)
#define CLASS_3_61C28F682349FF66_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x181A5340)
#define CLASS_3_61C28F682349FF66_METHOD_3_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x181A4DA0)
#define CLASS_3_61C28F682349FF66_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x181A5210)
#define CLASS_3_61C28F682349FF66_METHOD_3_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x181A50D0)
#define CLASS_3_61C28F682349FF66_METHOD_3_646B1E75E5DE3AE2_OFFSET UNITYSDK_OFFSET(0x181A5460)
#define CLASS_3_61C28F682349FF66_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x181A4CB0)
#define CLASS_3_61C28F682349FF66_METHOD_3_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x181A4990)
#define CLASS_3_61C28F682349FF66_METHOD_3_A503C24B763BFE00_OFFSET UNITYSDK_OFFSET(0x181A4FA0)
#define CLASS_3_61C28F682349FF66_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x181A5280)
#define CLASS_3_61C28F682349FF66_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181A49E0)
#define CLASS_3_61C28F682349FF66_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x181A4D00)
#define CLASS_3_61C28F682349FF66__CTOR_OFFSET UNITYSDK_OFFSET(0x181A4900)

inline static constexpr unsigned int Class_3_61C28F682349FF66_TypeDefinitionIndex = 53077;

class Class_3_61C28F682349FF66 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A8047719FD27C507*>
{
public:
	::Class_2_A48F3719AA1CF200_4* JLMAKNFAEBH; // 0x28
	::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* CNCHPOLEGAK; // 0x30
	::Class_3_07C3C4D2990C49EE* BPEFLFCKDNF; // 0x38
	::System::Boolean PJDHPGCCNIB; // 0x40
	::System::Boolean NOGJFLANINN; // 0x41

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A8047719FD27C507* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A8047719FD27C507*))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_METHOD_3_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_3_A503C24B763BFE00(::RPG::Client::LuaUIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_METHOD_3_A503C24B763BFE00_OFFSET))(this, a1);
	}

	::System::Void Method_3_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_METHOD_3_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_3_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_METHOD_3_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_3_646B1E75E5DE3AE2(::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_METHOD_3_646B1E75E5DE3AE2_OFFSET))(this, a1);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61C28F682349FF66_METHOD_3_1290EA767C459179_OFFSET))(this);
	}
};
