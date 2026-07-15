#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1046;
class Class_1_4DF1A3BD91ECD091;
namespace RPG::Client { class BattleShowUIPageParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_A71EA2796991E2B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157EE8C0)
#define CLASS_1_A71EA2796991E2B5_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x157EEDE0)
#define CLASS_1_A71EA2796991E2B5_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x157EEE00)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x157EEAB0)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x157EED80)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x157EEB70)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x157EEB10)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x157EE9F0)
#define CLASS_1_A71EA2796991E2B5_METHOD_1_C833F98B2F17D2AD_OFFSET UNITYSDK_OFFSET(0x157EE7E0)
#define CLASS_1_A71EA2796991E2B5_SET_PARAM_OFFSET UNITYSDK_OFFSET(0x157EEDF0)
#define CLASS_1_A71EA2796991E2B5_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x157EEE10)
#define CLASS_1_A71EA2796991E2B5__CTOR_OFFSET UNITYSDK_OFFSET(0x157EE8B0)

inline static constexpr unsigned int Class_1_A71EA2796991E2B5_TypeDefinitionIndex = 68451;

class Class_1_A71EA2796991E2B5 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::RPG::Client::BattleShowUIPageParam* _Param_k__BackingField; // 0x10
	::System::Action_1<::Class_0_16E4307DCC419505_1046*>* Field_1_2; // 0x18
	::System::Action_1<::System::String*>* Field_1_3; // 0x20
	::System::String* _UniqueName_k__BackingField; // 0x28
	::System::Action_1<::Class_0_16E4307DCC419505_1046*>* Field_1_5; // 0x30
	::UnityEngine::Coroutine* Field_1_6; // 0x38
	::System::Single Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5__CTOR_OFFSET))(this);
	}

	static ::Class_1_A71EA2796991E2B5* Method_1_C833F98B2F17D2AD(::Class_1_4DF1A3BD91ECD091* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1046*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_1046*>* a3, ::System::Action_1<::System::String*>* a4)
	{
		return ((::Class_1_A71EA2796991E2B5*(*)(::Class_1_4DF1A3BD91ECD091*, ::System::Action_1<::Class_0_16E4307DCC419505_1046*>*, ::System::Action_1<::Class_0_16E4307DCC419505_1046*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_C833F98B2F17D2AD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71EA2796991E2B5_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
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
