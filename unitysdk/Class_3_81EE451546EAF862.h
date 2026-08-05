#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_81EE451546EAF862_Struct_2_31E5ECB6E0E8EB54.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_0B27C44B4222024F;
class Class_2_A2809E685EB92269;
class Class_3_7BF98046FA3EA064;
namespace MoleMole { class InteractEntryModeBuddy; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_81EE451546EAF862_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15FA5DD0)
#define CLASS_3_81EE451546EAF862_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FA64C0)
#define CLASS_3_81EE451546EAF862_METHOD_3_0A1085422AA0A0FB_OFFSET UNITYSDK_OFFSET(0x15FA89E0)
#define CLASS_3_81EE451546EAF862_METHOD_3_137632EB719C01F4_OFFSET UNITYSDK_OFFSET(0x15FA69F0)
#define CLASS_3_81EE451546EAF862_METHOD_3_271B07329D3158C3_OFFSET UNITYSDK_OFFSET(0x15FA80D0)
#define CLASS_3_81EE451546EAF862_METHOD_3_3D9CCEF44DA7F15E_OFFSET UNITYSDK_OFFSET(0x15FA76B0)
#define CLASS_3_81EE451546EAF862_METHOD_3_3EEC78C50FD8C296_OFFSET UNITYSDK_OFFSET(0x15FAA060)
#define CLASS_3_81EE451546EAF862_METHOD_3_4543C72191C0EF55_OFFSET UNITYSDK_OFFSET(0x15FA83D0)
#define CLASS_3_81EE451546EAF862_METHOD_3_56E3C405FE720F93_OFFSET UNITYSDK_OFFSET(0x15FA8FF0)
#define CLASS_3_81EE451546EAF862_METHOD_3_6956CF287C5481CB_OFFSET UNITYSDK_OFFSET(0x15FA9CF0)
#define CLASS_3_81EE451546EAF862_METHOD_3_69F9975CDFA0163D_OFFSET UNITYSDK_OFFSET(0x15FA8B90)
#define CLASS_3_81EE451546EAF862_METHOD_3_741C644F7BDA6CC5_OFFSET UNITYSDK_OFFSET(0x15FA7190)
#define CLASS_3_81EE451546EAF862_METHOD_3_76DF95DCF820360A_OFFSET UNITYSDK_OFFSET(0x15FA7470)
#define CLASS_3_81EE451546EAF862_METHOD_3_7C37160BCCE68784_OFFSET UNITYSDK_OFFSET(0x15FA8510)
#define CLASS_3_81EE451546EAF862_METHOD_3_8845600F915DC6BF_OFFSET UNITYSDK_OFFSET(0x15FA9F30)
#define CLASS_3_81EE451546EAF862_METHOD_3_91EE25AF2288E449_OFFSET UNITYSDK_OFFSET(0x15FAA390)
#define CLASS_3_81EE451546EAF862_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0x15FA6FC0)
#define CLASS_3_81EE451546EAF862_METHOD_3_AE1A1C9B15A2222F_OFFSET UNITYSDK_OFFSET(0x15FA87C0)
#define CLASS_3_81EE451546EAF862_METHOD_3_B1036099F932819B_OFFSET UNITYSDK_OFFSET(0x15FA7F50)
#define CLASS_3_81EE451546EAF862_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x15FA9FD0)
#define CLASS_3_81EE451546EAF862_METHOD_3_BBCC95CFE1A67176_OFFSET UNITYSDK_OFFSET(0x15FA7260)
#define CLASS_3_81EE451546EAF862_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15FA6D60)
#define CLASS_3_81EE451546EAF862_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15FA6CD0)
#define CLASS_3_81EE451546EAF862_METHOD_3_CF5CACF693399788_OFFSET UNITYSDK_OFFSET(0x15FA7000)
#define CLASS_3_81EE451546EAF862_METHOD_3_D93D936FA4AF7C93_OFFSET UNITYSDK_OFFSET(0x15FA75A0)
#define CLASS_3_81EE451546EAF862_METHOD_3_FE275294F69C24FC_OFFSET UNITYSDK_OFFSET(0x15FA6DF0)
#define CLASS_3_81EE451546EAF862_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x15FA6670)
#define CLASS_3_81EE451546EAF862_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x15FA6890)
#define CLASS_3_81EE451546EAF862_UPDATE_OFFSET UNITYSDK_OFFSET(0x15FA6310)
#define CLASS_3_81EE451546EAF862__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA6C80)

inline static constexpr unsigned int Class_3_81EE451546EAF862_TypeDefinitionIndex = 64253;

class Class_3_81EE451546EAF862 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void OnTriggerEnter(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_ONTRIGGERENTER_OFFSET))(a1, a2);
	}

	static ::System::Void OnTriggerExit(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_ONTRIGGEREXIT_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_FE275294F69C24FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_FE275294F69C24FC_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_CF5CACF693399788(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_CF5CACF693399788_OFFSET))(a1, a2);
	}

	::System::Void Method_3_741C644F7BDA6CC5(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_741C644F7BDA6CC5_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_76DF95DCF820360A(::MoleMole::Battle::Entity* a1, ::MoleMole::InteractEntryModeBuddy* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::InteractEntryModeBuddy*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_76DF95DCF820360A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_D93D936FA4AF7C93(::MoleMole::Battle::Entity*& a1, ::Class_3_7BF98046FA3EA064*& a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*&, ::Class_3_7BF98046FA3EA064*&))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_D93D936FA4AF7C93_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_B1036099F932819B(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_B1036099F932819B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_271B07329D3158C3(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_271B07329D3158C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7C37160BCCE68784(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_7C37160BCCE68784_OFFSET))(a1);
	}

	static ::System::Void Method_3_AE1A1C9B15A2222F(::MoleMole::Battle::Entity* a1, ::Class_3_7BF98046FA3EA064* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_3_7BF98046FA3EA064*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_AE1A1C9B15A2222F_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BBCC95CFE1A67176(::Class_2_0B27C44B4222024F* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0B27C44B4222024F*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_BBCC95CFE1A67176_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_69F9975CDFA0163D(::Class_3_7BF98046FA3EA064* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::Class_3_7BF98046FA3EA064*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_69F9975CDFA0163D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	static ::System::Void Method_3_3D9CCEF44DA7F15E(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_3D9CCEF44DA7F15E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_56E3C405FE720F93(::Class_3_7BF98046FA3EA064* a1, ::Class_2_A2809E685EB92269* a2)
	{
		return ((::System::Void(*)(::Class_3_7BF98046FA3EA064*, ::Class_2_A2809E685EB92269*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_56E3C405FE720F93_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_137632EB719C01F4(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_137632EB719C01F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6956CF287C5481CB(::Class_3_7BF98046FA3EA064* a1, ::System::Int32 a2, ::System::Func_1<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::Class_3_7BF98046FA3EA064*, ::System::Int32, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_6956CF287C5481CB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_8845600F915DC6BF(::MoleMole::Battle::Entity*& a1, ::Class_3_7BF98046FA3EA064*& a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*&, ::Class_3_7BF98046FA3EA064*&))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_8845600F915DC6BF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4543C72191C0EF55(::Class_3_81EE451546EAF862_Struct_2_31E5ECB6E0E8EB54& a1)
	{
		return ((::System::Void(*)(::Class_3_81EE451546EAF862_Struct_2_31E5ECB6E0E8EB54&))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_4543C72191C0EF55_OFFSET))(a1);
	}

	static ::System::String* Method_3_0A1085422AA0A0FB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_0A1085422AA0A0FB_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_3EEC78C50FD8C296(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_3EEC78C50FD8C296_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_91EE25AF2288E449(::MoleMole::Battle::Entity* a1, ::Class_2_A2809E685EB92269* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::Class_2_A2809E685EB92269*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862_METHOD_3_91EE25AF2288E449_OFFSET))(a1, a2);
	}
};
