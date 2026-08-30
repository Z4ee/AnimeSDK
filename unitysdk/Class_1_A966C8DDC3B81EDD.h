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

#define CLASS_1_A966C8DDC3B81EDD_GET_CURRENTSETTINGCULLINGMODE_OFFSET UNITYSDK_OFFSET(0x15251F40)
#define CLASS_1_A966C8DDC3B81EDD_GET_INITED_OFFSET UNITYSDK_OFFSET(0x15251F10)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_15C7236D01DD91AB_OFFSET UNITYSDK_OFFSET(0x15251470)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_19BB37CB3BF5919B_OFFSET UNITYSDK_OFFSET(0x15251300)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_2746E90F93D616D2_OFFSET UNITYSDK_OFFSET(0x152518F0)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x15251760)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x152518A0)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x15251240)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x15251530)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_C9F62A8213D2F476_OFFSET UNITYSDK_OFFSET(0x15251F30)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_CBB7D170F77C0921_OFFSET UNITYSDK_OFFSET(0x152508C0)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15251160)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x15251050)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_E13B8CE7CCBC009A_OFFSET UNITYSDK_OFFSET(0x15250F80)
#define CLASS_1_A966C8DDC3B81EDD_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x15251DD0)
#define CLASS_1_A966C8DDC3B81EDD_SET_CURRENTSETTINGCULLINGMODE_OFFSET UNITYSDK_OFFSET(0x15251F50)
#define CLASS_1_A966C8DDC3B81EDD_SET_INITED_OFFSET UNITYSDK_OFFSET(0x15251F20)
#define CLASS_1_A966C8DDC3B81EDD__CTOR_OFFSET UNITYSDK_OFFSET(0x152507E0)

inline static constexpr unsigned int Class_1_A966C8DDC3B81EDD_TypeDefinitionIndex = 57407;

class Class_1_A966C8DDC3B81EDD : public ::System::Object
{
public:
	::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0x10
	::Class_2_01F4079471966D8C* KBLNOFHLAMD; // 0x18
	::RPG::Client::CharacterMonoAvatar* AODIIHBCFIA; // 0x20
	::System::Collections::Generic::List_1<::System::Single>* NFIFAIKBAJO; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* FECDMJBGMOP; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* CGAHJODFDEC; // 0x38
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x40
	::UnityEngine::AnimatorCullingMode OPMPPFJLDJO; // 0x48
	::System::Single GKMEAFNKIGB; // 0x4C
	::UnityEngine::AnimatorCullingMode _CurrentSettingCullingMode_k__BackingField; // 0x50
	::System::Single EKLIECPPIPD; // 0x54
	::System::Boolean KPDIEBKFDID; // 0x58
	::System::Boolean LHMCEPHJMHD; // 0x59
	::System::Boolean _Inited_k__BackingField; // 0x5A
	::System::Boolean OIHMEIBDAKJ; // 0x5B
	::System::Boolean CJOMCONKCFE; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBB7D170F77C0921(::UnityEngine::GameObject* a1, ::RPG::GameCore::PropComponent* a2, ::RPG::GameCore::AdventureCharacterController* a3, ::Class_2_01F4079471966D8C* a4, ::RPG::GameCore::GameEntity* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::AdventureCharacterController*, ::Class_2_01F4079471966D8C*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_CBB7D170F77C0921_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_19BB37CB3BF5919B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_19BB37CB3BF5919B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E13B8CE7CCBC009A(::UnityEngine::AnimatorCullingMode a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorCullingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_E13B8CE7CCBC009A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15C7236D01DD91AB(::UnityEngine::AnimatorCullingMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorCullingMode))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_15C7236D01DD91AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_1_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_2746E90F93D616D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_2746E90F93D616D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Boolean get_Inited()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_GET_INITED_OFFSET))(this);
	}

	::System::Void set_Inited(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_SET_INITED_OFFSET))(this, a1);
	}

	::UnityEngine::AnimatorCullingMode Method_1_C9F62A8213D2F476()
	{
		return ((::UnityEngine::AnimatorCullingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_METHOD_1_C9F62A8213D2F476_OFFSET))(this);
	}

	::UnityEngine::AnimatorCullingMode get_CurrentSettingCullingMode()
	{
		return ((::UnityEngine::AnimatorCullingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_GET_CURRENTSETTINGCULLINGMODE_OFFSET))(this);
	}

	::System::Void set_CurrentSettingCullingMode(::UnityEngine::AnimatorCullingMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorCullingMode))((::PBYTE)hIl2Cpp + CLASS_1_A966C8DDC3B81EDD_SET_CURRENTSETTINGCULLINGMODE_OFFSET))(this, a1);
	}
};
