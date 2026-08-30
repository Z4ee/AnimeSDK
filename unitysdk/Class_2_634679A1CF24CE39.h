#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_634679A1CF24CE39_Struct_2_A4F4CF3FB17B10A3.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class AnimatorOverrideManager; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define CLASS_2_634679A1CF24CE39_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F2FAF0)
#define CLASS_2_634679A1CF24CE39_METHOD_2_04916094C1AD05A6_OFFSET UNITYSDK_OFFSET(0x17F30300)
#define CLASS_2_634679A1CF24CE39_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x17F30AE0)
#define CLASS_2_634679A1CF24CE39_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17F30A80)
#define CLASS_2_634679A1CF24CE39_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x17F309C0)
#define CLASS_2_634679A1CF24CE39_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17F304E0)
#define CLASS_2_634679A1CF24CE39_METHOD_2_C46ACA7933055BBF_OFFSET UNITYSDK_OFFSET(0x17F30620)
#define CLASS_2_634679A1CF24CE39_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x17F2FFA0)
#define CLASS_2_634679A1CF24CE39_METHOD_2_CE04765B59706BB1_OFFSET UNITYSDK_OFFSET(0x17F30420)
#define CLASS_2_634679A1CF24CE39_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x17F30570)
#define CLASS_2_634679A1CF24CE39_METHOD_2_E968CB1D462997C6_OFFSET UNITYSDK_OFFSET(0x17F2FA30)
#define CLASS_2_634679A1CF24CE39_METHOD_2_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x17F2FD10)
#define CLASS_2_634679A1CF24CE39__CTOR_OFFSET UNITYSDK_OFFSET(0x17F30B40)
#define CLASS_2_634679A1CF24CE39__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x17F2F970)

inline static constexpr unsigned int Class_2_634679A1CF24CE39_TypeDefinitionIndex = 57337;

class Class_2_634679A1CF24CE39 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* NMCHKGLPNFL; // 0x0
	::System::String* FOMAKMJEAEN; // 0x18
	::UnityEngine::Animator* NGLDNIENHLJ; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_634679A1CF24CE39_Struct_2_A4F4CF3FB17B10A3>* DEFLKIEBJKI; // 0x28
	::RPG::Client::AnimatorOverrideManager* EOJOJPEPCPN; // 0x30
	::UnityEngine::RuntimeAnimatorController* JKAKLFJIBKN; // 0x38
	::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E968CB1D462997C6(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_E968CB1D462997C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_04916094C1AD05A6(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_04916094C1AD05A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_C46ACA7933055BBF(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_C46ACA7933055BBF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::RPG::Client::AnimatorOverrideManager* Method_2_CE04765B59706BB1()
	{
		return ((::RPG::Client::AnimatorOverrideManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_CE04765B59706BB1_OFFSET))(this);
	}
};
