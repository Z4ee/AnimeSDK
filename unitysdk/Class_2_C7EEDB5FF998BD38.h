#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_C7EEDB5FF998BD38_DiffState.h"

namespace RPG::Client { class ActivityElationAvatarData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_C7EEDB5FF998BD38_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x14CFEDB0)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x14CFECD0)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14CFEAB0)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14CFE820)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_6DE1435CFA287E1E_OFFSET UNITYSDK_OFFSET(0x14CFE310)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x14CFE780)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x14CFEBD0)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x14CFE710)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14CFE6B0)
#define CLASS_2_C7EEDB5FF998BD38_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14CFE890)
#define CLASS_2_C7EEDB5FF998BD38_SET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x14CFEDC0)
#define CLASS_2_C7EEDB5FF998BD38__CTOR_OFFSET UNITYSDK_OFFSET(0x14CFEDD0)
#define CLASS_2_C7EEDB5FF998BD38__ONBIND_OFFSET UNITYSDK_OFFSET(0x14CFE270)
#define CLASS_2_C7EEDB5FF998BD38__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x14CFEC80)
#define CLASS_2_C7EEDB5FF998BD38__ONTICK_OFFSET UNITYSDK_OFFSET(0x14CFEB00)

inline static constexpr unsigned int Class_2_C7EEDB5FF998BD38_TypeDefinitionIndex = 68153;

class Class_2_C7EEDB5FF998BD38 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::System::Action_1<::System::UInt32>* Field_2_3; // 0x60
	::UnityEngine::UI::Text* Field_2_4; // 0x68
	::UnityEngine::UI::Image* Field_2_5; // 0x70
	::UnityEngine::Animation* Field_2_6; // 0x78
	::System::UInt32 Field_2_7; // 0x80
	::System::UInt32 Field_2_8; // 0x84
	::System::Boolean _IsDisabled_k__BackingField; // 0x88
	::Class_2_C7EEDB5FF998BD38_DiffState Field_2_10; // 0x8C
	::System::Single Field_2_11; // 0x90

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
