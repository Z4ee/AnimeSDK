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

#define CLASS_2_634679A1CF24CE39_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9272120)
#define CLASS_2_634679A1CF24CE39_METHOD_2_04916094C1AD05A6_OFFSET UNITYSDK_OFFSET(0x9272980)
#define CLASS_2_634679A1CF24CE39_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x9273180)
#define CLASS_2_634679A1CF24CE39_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9273120)
#define CLASS_2_634679A1CF24CE39_METHOD_2_6747250BC2D13457_OFFSET UNITYSDK_OFFSET(0x9272360)
#define CLASS_2_634679A1CF24CE39_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x9272610)
#define CLASS_2_634679A1CF24CE39_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x9273060)
#define CLASS_2_634679A1CF24CE39_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9272B60)
#define CLASS_2_634679A1CF24CE39_METHOD_2_C46ACA7933055BBF_OFFSET UNITYSDK_OFFSET(0x9272CA0)
#define CLASS_2_634679A1CF24CE39_METHOD_2_CE04765B59706BB1_OFFSET UNITYSDK_OFFSET(0x9272AA0)
#define CLASS_2_634679A1CF24CE39_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9272BF0)
#define CLASS_2_634679A1CF24CE39_METHOD_2_E968CB1D462997C6_OFFSET UNITYSDK_OFFSET(0x9272060)
#define CLASS_2_634679A1CF24CE39__CTOR_OFFSET UNITYSDK_OFFSET(0x92731E0)
#define CLASS_2_634679A1CF24CE39__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x9271FA0)
#define CLASS_2_634679A1CF24CE39___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x92731F0)

inline static constexpr unsigned int Class_2_634679A1CF24CE39_TypeDefinitionIndex = 52700;

class Class_2_634679A1CF24CE39 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animator* Field_2_2; // 0x18
	::RPG::Client::AnimatorOverrideManager* Field_2_3; // 0x20
	::RPG::GameCore::CharacterModelComponent* Field_2_1; // 0x28
	::System::String* Field_2_4; // 0x30
	::UnityEngine::RuntimeAnimatorController* Field_2_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_634679A1CF24CE39_Struct_2_A4F4CF3FB17B10A3>* Field_2_6; // 0x40

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

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_6747250BC2D13457()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39_METHOD_2_6747250BC2D13457_OFFSET))(this);
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

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634679A1CF24CE39___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
