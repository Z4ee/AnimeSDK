#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B1E3F4D4C32B440D.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_4266CA7D1A31BD8B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_204C453CC79AE4E0;
class Class_1_6657081C8A94CA44;
class Class_2_208CC9941471731A_498;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0651AA5046861BAB_OFFSET UNITYSDK_OFFSET(0x16671330)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0F42923FC2842D5B_OFFSET UNITYSDK_OFFSET(0x16672E70)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_161804062D142275_OFFSET UNITYSDK_OFFSET(0x16674090)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_1742CC6082AF8D7B_OFFSET UNITYSDK_OFFSET(0x16671660)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_2354A0BA00BB210C_OFFSET UNITYSDK_OFFSET(0x16673990)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_285A985B7FCC813A_OFFSET UNITYSDK_OFFSET(0x16672440)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_3D2905F5BCAF31A1_OFFSET UNITYSDK_OFFSET(0x16672510)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_58D409B3F1EEB758_OFFSET UNITYSDK_OFFSET(0x16672700)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_5B79F71C67C49000_OFFSET UNITYSDK_OFFSET(0x16671720)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_5CAFC7F339044F14_OFFSET UNITYSDK_OFFSET(0x16674330)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_7642E9CE17CC35E4_OFFSET UNITYSDK_OFFSET(0x166732B0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_843BDD03AE28918C_OFFSET UNITYSDK_OFFSET(0x16672640)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_851E942665E34CC6_OFFSET UNITYSDK_OFFSET(0x166725B0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_860CA5F408151004_OFFSET UNITYSDK_OFFSET(0x166727D0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_87388A1C5AF6EB54_OFFSET UNITYSDK_OFFSET(0x16670FD0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_956C7A6E2D0F82A1_OFFSET UNITYSDK_OFFSET(0x16673100)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_9DE98A18613B53AB_OFFSET UNITYSDK_OFFSET(0x16670DE0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_A8B30F4FB05440AA_OFFSET UNITYSDK_OFFSET(0x16673FE0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_BDFE81FEA9BC8C74_OFFSET UNITYSDK_OFFSET(0x16672830)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C4DEAEE83B3E8BE5_OFFSET UNITYSDK_OFFSET(0x16670EC0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C8B3C6A282BD803B_OFFSET UNITYSDK_OFFSET(0x16673470)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_CEC4E639DE40C8C4_OFFSET UNITYSDK_OFFSET(0x16673200)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x16670E70)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_F2DE4246959DCEC8_OFFSET UNITYSDK_OFFSET(0x16671DB0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_F485487359D38A65_OFFSET UNITYSDK_OFFSET(0x166722F0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_F7E7A60997450764_OFFSET UNITYSDK_OFFSET(0x166733E0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FD947098326DD009_OFFSET UNITYSDK_OFFSET(0x16671C60)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FE79E9ECE1F0E214_OFFSET UNITYSDK_OFFSET(0x16673050)

inline static constexpr unsigned int Class_1_011AF2E14064C658_Class_1_E2C115A3940BD40A_TypeDefinitionIndex = 47048;

class Class_1_011AF2E14064C658_Class_1_E2C115A3940BD40A : public ::System::Object
{
public:
	static ::System::Boolean Method_1_9DE98A18613B53AB(::System::Collections::Generic::List_1<::System::Int32>*& a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_9DE98A18613B53AB_OFFSET))(a1);
	}

	static ::Struct_2_4266CA7D1A31BD8B Method_1_87388A1C5AF6EB54(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_4266CA7D1A31BD8B(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_87388A1C5AF6EB54_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0651AA5046861BAB(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_204C453CC79AE4E0*>*& a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_204C453CC79AE4E0*>*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0651AA5046861BAB_OFFSET))(a1, a2, a3);
	}

	static ::Class_2_208CC9941471731A_498* Method_1_1742CC6082AF8D7B(::UnityEngine::Vector3 a1)
	{
		return ((::Class_2_208CC9941471731A_498*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_1742CC6082AF8D7B_OFFSET))(a1);
	}

	static ::Class_2_208CC9941471731A_498* Method_1_5B79F71C67C49000(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_2_208CC9941471731A_498*(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_5B79F71C67C49000_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FD947098326DD009(::Foundation::ViewObject::GroupMemberIdentifier a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FD947098326DD009_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2DE4246959DCEC8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_F2DE4246959DCEC8_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F485487359D38A65(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_F485487359D38A65_OFFSET))(a1, a2);
	}

	static ::Class_1_204C453CC79AE4E0* Method_1_285A985B7FCC813A(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::Class_1_204C453CC79AE4E0*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_285A985B7FCC813A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3D2905F5BCAF31A1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_3D2905F5BCAF31A1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_851E942665E34CC6(::Foundation::ViewObject::ViewObjectHandle a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_851E942665E34CC6_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_843BDD03AE28918C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_843BDD03AE28918C_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_58D409B3F1EEB758(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_58D409B3F1EEB758_OFFSET))(a1);
	}

	static ::Class_1_204C453CC79AE4E0* Method_1_860CA5F408151004(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::Class_1_204C453CC79AE4E0*(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_860CA5F408151004_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BDFE81FEA9BC8C74(::Foundation::ViewObject::ViewObjectHandle a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_BDFE81FEA9BC8C74_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::EntityHandle Method_1_0F42923FC2842D5B(::Foundation::ViewObject::GroupMemberIdentifier a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0F42923FC2842D5B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C4DEAEE83B3E8BE5(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C4DEAEE83B3E8BE5_OFFSET))(a1, a2);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FE79E9ECE1F0E214(::System::String* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FE79E9ECE1F0E214_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_956C7A6E2D0F82A1(::System::UInt32 a1, ::System::UInt32 a2, ::Foundation::ViewObject::ViewObjectHandle& a3)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_956C7A6E2D0F82A1_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_CEC4E639DE40C8C4(::MoleMole::Battle::Entity* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_CEC4E639DE40C8C4_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_7642E9CE17CC35E4()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_7642E9CE17CC35E4_OFFSET))();
	}

	static ::System::Void Method_1_F7E7A60997450764(::Enum_3_B1E3F4D4C32B440D a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Enum_3_B1E3F4D4C32B440D, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_F7E7A60997450764_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C8B3C6A282BD803B(::System::Action* a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C8B3C6A282BD803B_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_2354A0BA00BB210C(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_2354A0BA00BB210C_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_A8B30F4FB05440AA(::System::String* a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::MoleMole::EntityHandle(*)(::System::String*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_A8B30F4FB05440AA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_161804062D142275(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_6657081C8A94CA44*>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::Class_1_6657081C8A94CA44*>*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_161804062D142275_OFFSET))(a1, a2);
	}

	static ::Class_1_204C453CC79AE4E0* Method_1_5CAFC7F339044F14(::System::Int32 a1, ::System::String* a2)
	{
		return ((::Class_1_204C453CC79AE4E0*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_5CAFC7F339044F14_OFFSET))(a1, a2);
	}
};
