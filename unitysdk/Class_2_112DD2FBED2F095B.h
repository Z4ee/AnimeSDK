#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31;
class Class_3_5775A4FEC79026BC;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_112DD2FBED2F095B_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x8D696A0)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_115616AA48EF3B7D_OFFSET UNITYSDK_OFFSET(0x8D6ACA0)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_12DFF1348CBD739A_OFFSET UNITYSDK_OFFSET(0x8D6A2C0)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_1B8A7D152370AD2C_OFFSET UNITYSDK_OFFSET(0x8D6A510)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_1DE6E59E2CDB6056_OFFSET UNITYSDK_OFFSET(0x8D6BA70)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_5A352D4F87774573_OFFSET UNITYSDK_OFFSET(0x8D6BB90)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x8D6A950)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_A0EFDC02874C650B_OFFSET UNITYSDK_OFFSET(0x8D6A9F0)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_A1A716CC5FCEE1D5_OFFSET UNITYSDK_OFFSET(0x8D6B650)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x8D6A7C0)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_AA1017631949E826_OFFSET UNITYSDK_OFFSET(0x8D6B380)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_BB77ED51782813C9_OFFSET UNITYSDK_OFFSET(0x8D69AC0)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_BC7FF5ABD6485401_OFFSET UNITYSDK_OFFSET(0x8D6B910)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_CBEC202C15695D7C_OFFSET UNITYSDK_OFFSET(0x8D6B230)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_CCC9F6930B3A98EB_OFFSET UNITYSDK_OFFSET(0x8D6A0C0)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x8D6A6A0)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_EEA19DC0B5F519C5_OFFSET UNITYSDK_OFFSET(0x8D69970)
#define CLASS_2_112DD2FBED2F095B_METHOD_2_FD7428707172056C_OFFSET UNITYSDK_OFFSET(0x8D697D0)
#define CLASS_2_112DD2FBED2F095B_ONINIT_OFFSET UNITYSDK_OFFSET(0x8D696B0)
#define CLASS_2_112DD2FBED2F095B_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x8D69780)
#define CLASS_2_112DD2FBED2F095B_TICK_OFFSET UNITYSDK_OFFSET(0x8D6A5E0)
#define CLASS_2_112DD2FBED2F095B__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D6BCC0)
#define CLASS_2_112DD2FBED2F095B__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6BBA0)
#define CLASS_2_112DD2FBED2F095B___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x8D6BD00)
#define CLASS_2_112DD2FBED2F095B___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x8D6BD60)
#define CLASS_2_112DD2FBED2F095B___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8D6BDC0)

inline static constexpr unsigned int Class_2_112DD2FBED2F095B_TypeDefinitionIndex = 48792;

class Class_2_112DD2FBED2F095B : public ::Class_1_47C4886CB6C61234
{
public:
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_112DD2FBED2F095B_TypeDefinitionIndex)->GetStaticField(0x11050);
	}
	::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31* Field_2_3; // 0x20
	::InControl::PlayerAction* Field_2_8; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31*>* Field_2_5; // 0x30
	::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31*>* Field_2_6; // 0x40
	::System::Collections::Generic::List_1<::Class_3_5775A4FEC79026BC*>* Field_2_7; // 0x48
	::System::Single Field_2_2; // 0x50
	::System::Boolean Field_2_1; // 0x54
	::System::Boolean Field_2_0; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B__CCTOR_OFFSET))();
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean Method_2_EEA19DC0B5F519C5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_EEA19DC0B5F519C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB77ED51782813C9(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a5, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a6, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a7, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a8, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_BB77ED51782813C9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_CCC9F6930B3A98EB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_CCC9F6930B3A98EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_12DFF1348CBD739A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_12DFF1348CBD739A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B8A7D152370AD2C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_1B8A7D152370AD2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FD7428707172056C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_FD7428707172056C_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_A88B36294D55B85C_OFFSET))(this);
	}

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void Method_2_A0EFDC02874C650B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_A0EFDC02874C650B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CBEC202C15695D7C(::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31*))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_CBEC202C15695D7C_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA1017631949E826(::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31*))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_AA1017631949E826_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A1A716CC5FCEE1D5(::UnityEngine::Vector2 a1, ::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31*))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_A1A716CC5FCEE1D5_OFFSET))(this, a1, a2);
	}

	::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31* Method_2_115616AA48EF3B7D(::UnityEngine::Vector2 a1)
	{
		return ((::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_115616AA48EF3B7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC7FF5ABD6485401(::Class_3_5775A4FEC79026BC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_BC7FF5ABD6485401_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1DE6E59E2CDB6056(::Class_3_5775A4FEC79026BC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_1DE6E59E2CDB6056_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31*>* Method_2_5A352D4F87774573()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_112DD2FBED2F095B_Class_1_BA5CC5AFE5A49C31*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B_METHOD_2_5A352D4F87774573_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_112DD2FBED2F095B___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
