#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1102;
class Class_1_4DF1A3BD91ECD091;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_A71EA2796991E2B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180AD760)
#define CLASS_1_A71EA2796991E2B5_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x180ADD10)
#define CLASS_1_A71EA2796991E2B5_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x180ADD30)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x180ADA10)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x180AD9B0)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x180ADCB0)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x180ADA70)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_C833F98B2F17D2AD_OFFSET UNITYSDK_OFFSET(0x180AD680)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x180AD8D0)
#define CLASS_1_A71EA2796991E2B5_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x180ADD20)
#define CLASS_1_A71EA2796991E2B5_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x180ADD40)
#define CLASS_1_A71EA2796991E2B5__CTOR_OFFSET UNITYSDK_OFFSET(0x180AD750)

inline static constexpr unsigned int Class_1_A71EA2796991E2B5_TypeDefinitionIndex = 71644;

class Class_1_A71EA2796991E2B5 : public ::System::Object
{
public:
	// static const ::System::Single FOPMNAAAIDC; // 0x0
	::System::String* _UniqueName_k__BackingField; // 0x10
	::System::Action_1<::Class_0_16E4307DCC419505_1102*>* JLBLEBFNIIM; // 0x18
	::RPG::Client::BattleShowUIPageParam* _Param_k__BackingField; // 0x20
	::System::Action_1<::System::String*>* JFKMKCIPIGI; // 0x28
	::UnityEngine::Coroutine* CGAEACAKGMP; // 0x30
	::System::Action_1<::Class_0_16E4307DCC419505_1102*>* OPHEBAAKIHB; // 0x38
	::System::Single HIMIAAEICFA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5__CTOR_OFFSET))(this);
	}

	static ::Class_1_A71EA2796991E2B5* Method_1_C833F98B2F17D2AD(::Class_1_4DF1A3BD91ECD091* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1102*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_1102*>* a3, ::System::Action_1<::System::String*>* a4)
	{
		return ((::Class_1_A71EA2796991E2B5*(*)(::Class_1_4DF1A3BD91ECD091*, ::System::Action_1<::Class_0_16E4307DCC419505_1102*>*, ::System::Action_1<::Class_0_16E4307DCC419505_1102*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_C833F98B2F17D2AD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::RPG::Client::BattleShowUIPageParam* get_Param()
	{
		return ((::RPG::Client::BattleShowUIPageParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_GET_PARAM_OFFSET))(this);
	}

	::System::Void set_Param(::RPG::Client::BattleShowUIPageParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowUIPageParam*))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_SET_PARAM_OFFSET))(this, a1);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_SET_UNIQUENAME_OFFSET))(this, a1);
	}
};
