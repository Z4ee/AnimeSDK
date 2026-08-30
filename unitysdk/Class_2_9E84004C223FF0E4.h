#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31;
class Class_3_07C3C4D2990C49EE;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9E84004C223FF0E4_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x19198690)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_1380ECF184CE3DF4_OFFSET UNITYSDK_OFFSET(0x1919A920)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_1B8A7D152370AD2C_OFFSET UNITYSDK_OFFSET(0x191994F0)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_1DE6E59E2CDB6056_OFFSET UNITYSDK_OFFSET(0x1919AAE0)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_43D4FBF0C820E579_OFFSET UNITYSDK_OFFSET(0x191988F0)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_4F7871DB44A26231_OFFSET UNITYSDK_OFFSET(0x19198780)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x19199670)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_50A47676C17B94C0_OFFSET UNITYSDK_OFFSET(0x191990A0)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_5A352D4F87774573_OFFSET UNITYSDK_OFFSET(0x1919AC00)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_A0FB414665BFE43F_OFFSET UNITYSDK_OFFSET(0x19199290)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_A1A716CC5FCEE1D5_OFFSET UNITYSDK_OFFSET(0x1919A660)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_AA1017631949E826_OFFSET UNITYSDK_OFFSET(0x1919A390)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_B17FC910352C733B_OFFSET UNITYSDK_OFFSET(0x19199CE0)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_BE7891790CA2F06A_OFFSET UNITYSDK_OFFSET(0x19198A10)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_CBEC202C15695D7C_OFFSET UNITYSDK_OFFSET(0x1919A230)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x19199910)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x19199780)
#define CLASS_2_9E84004C223FF0E4_METHOD_2_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0x191999B0)
#define CLASS_2_9E84004C223FF0E4_ONINIT_OFFSET UNITYSDK_OFFSET(0x191986A0)
#define CLASS_2_9E84004C223FF0E4_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x19198730)
#define CLASS_2_9E84004C223FF0E4_TICK_OFFSET UNITYSDK_OFFSET(0x191995B0)
#define CLASS_2_9E84004C223FF0E4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1919AD30)
#define CLASS_2_9E84004C223FF0E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1919AC10)

inline static constexpr unsigned int Class_2_9E84004C223FF0E4_TypeDefinitionIndex = 60363;

class Class_2_9E84004C223FF0E4 : public ::Class_1_5BBB2050B3F3F683
{
public:
	static ::System::Single* StaticGet_DKMOBOAMDMP()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9E84004C223FF0E4_TypeDefinitionIndex)->GetStaticField(0xAB00);
	}
	::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31* MDFJFOKLHIO; // 0x20
	::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31* LIFIMJBBGBN; // 0x28
	::InControl::PlayerAction* PFNEJIOLGDB; // 0x30
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* LKGLIGEAFFN; // 0x38
	::System::Collections::Generic::List_1<::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31*>* CFHCMFEAIOA; // 0x40
	::System::Collections::Generic::HashSet_1<::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31*>* EACKJNNAHEO; // 0x48
	::System::Boolean JJNCFGIJFAO; // 0x50
	::System::Boolean MALKMAOMAID; // 0x51
	::System::Single INJFEHGFECL; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4__CCTOR_OFFSET))();
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean Method_2_43D4FBF0C820E579(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_43D4FBF0C820E579_OFFSET))(this, a1);
	}

	::System::Void Method_2_BE7891790CA2F06A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a5, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a6, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a7, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a8, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_BE7891790CA2F06A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_50A47676C17B94C0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_50A47676C17B94C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0FB414665BFE43F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_A0FB414665BFE43F_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B8A7D152370AD2C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_1B8A7D152370AD2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4F7871DB44A26231()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_4F7871DB44A26231_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_FD6AF0F9AA9298B1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_FD6AF0F9AA9298B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CBEC202C15695D7C(::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31*))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_CBEC202C15695D7C_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA1017631949E826(::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31*))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_AA1017631949E826_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A1A716CC5FCEE1D5(::UnityEngine::Vector2 a1, ::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31*))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_A1A716CC5FCEE1D5_OFFSET))(this, a1, a2);
	}

	::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31* Method_2_B17FC910352C733B(::UnityEngine::Vector2 a1)
	{
		return ((::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_B17FC910352C733B_OFFSET))(this, a1);
	}

	::System::Void Method_2_1380ECF184CE3DF4(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_1380ECF184CE3DF4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1DE6E59E2CDB6056(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_1DE6E59E2CDB6056_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31*>* Method_2_5A352D4F87774573()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_9E84004C223FF0E4_Class_1_BA5CC5AFE5A49C31*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E84004C223FF0E4_METHOD_2_5A352D4F87774573_OFFSET))(this);
	}
};
