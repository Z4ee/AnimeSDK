#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_C7EEDB5FF998BD38_DiffState.h"

namespace RPG::Client { class ActivityElationAvatarData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_C7EEDB5FF998BD38_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x16C1D630)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x16C1D550)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16C1D330)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16C1D0A0)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_6DE1435CFA287E1E_OFFSET UNITYSDK_OFFSET(0x16C1CB90)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x16C1D000)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x16C1D450)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x16C1CF90)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C1CF30)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16C1D110)
#define CLASS_2_C7EEDB5FF998BD38_SET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x16C1D640)
#define CLASS_2_C7EEDB5FF998BD38__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1D650)
#define CLASS_2_C7EEDB5FF998BD38__ONBIND_OFFSET UNITYSDK_OFFSET(0x16C1CAF0)
#define CLASS_2_C7EEDB5FF998BD38__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16C1D500)
#define CLASS_2_C7EEDB5FF998BD38__ONTICK_OFFSET UNITYSDK_OFFSET(0x16C1D380)

inline static constexpr unsigned int Class_2_C7EEDB5FF998BD38_TypeDefinitionIndex = 71331;

class Class_2_C7EEDB5FF998BD38 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Single FIBPFFLOLFE; // 0x0
	// static const ::System::String* OHHFEDFJJNO; // 0x0
	// static const ::System::String* MLIGEPPKHNN; // 0x0
	::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x60
	::UnityEngine::UI::Text* CPCCPIKCBAP; // 0x68
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
	::System::Action_1<::System::UInt32>* APCDJBLBEAF; // 0x78
	::System::UInt32 DFOMMCJLMMO; // 0x80
	::System::Boolean _IsDisabled_k__BackingField; // 0x84
	::Class_2_C7EEDB5FF998BD38_DiffState IBPABMILPAC; // 0x88
	::System::Single HIIGOGNOKGD; // 0x8C
	::System::UInt32 OFEEMOCGHCA; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6DE1435CFA287E1E(::RPG::Client::ActivityElationAvatarData* a1, ::System::UInt32 a2, ::System::Action_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityElationAvatarData*, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_METHOD_2_6DE1435CFA287E1E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_METHOD_2_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Boolean get_IsDisabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_GET_ISDISABLED_OFFSET))(this);
	}

	::System::Void set_IsDisabled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7EEDB5FF998BD38_SET_ISDISABLED_OFFSET))(this, a1);
	}
};
