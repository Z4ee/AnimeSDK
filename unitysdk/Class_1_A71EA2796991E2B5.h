#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1215;
class Class_1_9AB04B99F71DD4D3;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_A71EA2796991E2B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D590A0)
#define CLASS_1_A71EA2796991E2B5_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x15D59420)
#define CLASS_1_A71EA2796991E2B5_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x15D59440)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15D59290)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x15D593C0)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x15D591D0)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15D59170)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_C833F98B2F17D2AD_OFFSET UNITYSDK_OFFSET(0x15D58FC0)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x15D59230)
#define CLASS_1_A71EA2796991E2B5_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x15D59430)
#define CLASS_1_A71EA2796991E2B5_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x15D59450)
#define CLASS_1_A71EA2796991E2B5__CTOR_OFFSET UNITYSDK_OFFSET(0x15D59090)

inline static constexpr unsigned int Class_1_A71EA2796991E2B5_TypeDefinitionIndex = 71697;

class Class_1_A71EA2796991E2B5 : public ::System::Object
{
public:
	// static const ::System::Single FOPMNAAAIDC; // 0x0
	::System::Action_1<::System::String*>* JFKMKCIPIGI; // 0x10
	::UnityEngine::Coroutine* CGAEACAKGMP; // 0x18
	::System::String* _UniqueName_k__BackingField; // 0x20
	::System::Action_1<::Class_0_16E4307DCC419505_1215*>* OPHEBAAKIHB; // 0x28
	::System::Action_1<::Class_0_16E4307DCC419505_1215*>* JLBLEBFNIIM; // 0x30
	::RPG::Client::BattleShowUIPageParam* _Param_k__BackingField; // 0x38
	::System::Single HIMIAAEICFA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5__CTOR_OFFSET))(this);
	}

	static ::Class_1_A71EA2796991E2B5* Method_1_C833F98B2F17D2AD(::Class_1_9AB04B99F71DD4D3* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1215*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_1215*>* a3, ::System::Action_1<::System::String*>* a4)
	{
		return ((::Class_1_A71EA2796991E2B5*(*)(::Class_1_9AB04B99F71DD4D3*, ::System::Action_1<::Class_0_16E4307DCC419505_1215*>*, ::System::Action_1<::Class_0_16E4307DCC419505_1215*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_C833F98B2F17D2AD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
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
