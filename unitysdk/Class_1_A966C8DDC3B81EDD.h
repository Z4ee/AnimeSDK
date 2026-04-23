#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"

class Class_2_01F4079471966D8C;
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A966C8DDC3B81EDD_GET_CURRENTSETTINGCULLINGMODE_OFFSET UNITYSDK_OFFSET(0x1198EF00)
#define CLASS_1_A966C8DDC3B81EDD_GET_INITED_OFFSET UNITYSDK_OFFSET(0x1198EED0)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1198E110)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x1198E740)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_272068886DA88B16_OFFSET UNITYSDK_OFFSET(0x1198DFE0)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_2746E90F93D616D2_OFFSET UNITYSDK_OFFSET(0x1198E8D0)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1198E880)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x1198E210)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_6E4DDEEF0B5C577A_OFFSET UNITYSDK_OFFSET(0x1198E440)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_9241AFBCB33227AA_OFFSET UNITYSDK_OFFSET(0x1198E2D0)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x1198E4F0)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_C9F62A8213D2F476_OFFSET UNITYSDK_OFFSET(0x1198EEF0)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_CBB7D170F77C0921_OFFSET UNITYSDK_OFFSET(0x1198D890)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_E13B8CE7CCBC009A_OFFSET UNITYSDK_OFFSET(0x1198DF10)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x1198ED90)
#define CLASS_1_A966C8DDC3B81EDD_SET_CURRENTSETTINGCULLINGMODE_OFFSET UNITYSDK_OFFSET(0x1198EF10)
#define CLASS_1_A966C8DDC3B81EDD_SET_INITED_OFFSET UNITYSDK_OFFSET(0x1198EEE0)
#define CLASS_1_A966C8DDC3B81EDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1198D7B0)

inline static constexpr unsigned int Class_1_A966C8DDC3B81EDD_TypeDefinitionIndex = 52764;

class Class_1_A966C8DDC3B81EDD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_1_5; // 0x18
	::RPG::GameCore::GameEntity* Field_1_8; // 0x20
	::System::Collections::Generic::List_1<::System::Single>* Field_1_6; // 0x28
	::RPG::Client::CharacterMonoAvatar* Field_1_11; // 0x30
	::RPG::GameCore::PropComponent* Field_1_9; // 0x38
	::Class_2_01F4079471966D8C* Field_1_10; // 0x40
	::System::Single Field_1_13; // 0x48
	::System::Single Field_1_12; // 0x4C
	::UnityEngine::AnimatorCullingMode _CurrentSettingCullingMode_k__BackingField; // 0x50
	::UnityEngine::AnimatorCullingMode Field_1_3; // 0x54
	::System::Boolean Field_1_15; // 0x58
	::System::Boolean Field_1_0; // 0x59
	::System::Boolean _Inited_k__BackingField; // 0x5A
	::System::Boolean Field_1_14; // 0x5B
	::System::Boolean Field_1_1; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBB7D170F77C0921(::UnityEngine::GameObject* a1, ::RPG::GameCore::PropComponent* a2, ::RPG::GameCore::AdventureCharacterController* a3, ::Class_2_01F4079471966D8C* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::AdventureCharacterController*, ::Class_2_01F4079471966D8C*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_CBB7D170F77C0921_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_9241AFBCB33227AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_9241AFBCB33227AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_E13B8CE7CCBC009A(::UnityEngine::AnimatorCullingMode a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorCullingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_E13B8CE7CCBC009A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E4DDEEF0B5C577A(::UnityEngine::AnimatorCullingMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorCullingMode))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_6E4DDEEF0B5C577A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_1_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_2746E90F93D616D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_2746E90F93D616D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_272068886DA88B16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_272068886DA88B16_OFFSET))(this);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Boolean get_Inited()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_GET_INITED_OFFSET))(this);
	}

	::System::Void set_Inited(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_SET_INITED_OFFSET))(this, value);
	}

	::UnityEngine::AnimatorCullingMode Method_1_C9F62A8213D2F476()
	{
		return ((::UnityEngine::AnimatorCullingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_C9F62A8213D2F476_OFFSET))(this);
	}

	::UnityEngine::AnimatorCullingMode get_CurrentSettingCullingMode()
	{
		return ((::UnityEngine::AnimatorCullingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_GET_CURRENTSETTINGCULLINGMODE_OFFSET))(this);
	}

	::System::Void set_CurrentSettingCullingMode(::UnityEngine::AnimatorCullingMode value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorCullingMode))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_SET_CURRENTSETTINGCULLINGMODE_OFFSET))(this, value);
	}
};
