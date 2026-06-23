#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FBFD6F7304B717CB.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_4266CA7D1A31BD8B.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_204C453CC79AE4E0_2;
class Class_1_6657081C8A94CA44;
class Class_2_208CC9941471731A_945;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0651AA5046861BAB_OFFSET UNITYSDK_OFFSET(0x11DB2500)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0A1ADB3AD4679D40_OFFSET UNITYSDK_OFFSET(0x11DB1040)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0F42923FC2842D5B_OFFSET UNITYSDK_OFFSET(0x11DB1C20)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_161804062D142275_OFFSET UNITYSDK_OFFSET(0x11DB1E00)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_1742CC6082AF8D7B_OFFSET UNITYSDK_OFFSET(0x11DAFEE0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_22F782D71D97E614_OFFSET UNITYSDK_OFFSET(0x11DB2C20)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_25235041EF301825_OFFSET UNITYSDK_OFFSET(0x11DB0A70)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_285A985B7FCC813A_OFFSET UNITYSDK_OFFSET(0x11DB2360)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_3D2905F5BCAF31A1_OFFSET UNITYSDK_OFFSET(0x11DB09D0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_4160A4E27D8F4BEA_OFFSET UNITYSDK_OFFSET(0x11DB20A0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_58D409B3F1EEB758_OFFSET UNITYSDK_OFFSET(0x11DB2430)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_5B79F71C67C49000_OFFSET UNITYSDK_OFFSET(0x11DAFFE0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_5CAFC7F339044F14_OFFSET UNITYSDK_OFFSET(0x11DB2820)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_7642E9CE17CC35E4_OFFSET UNITYSDK_OFFSET(0x11DB1690)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_860CA5F408151004_OFFSET UNITYSDK_OFFSET(0x11DB2300)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_87388A1C5AF6EB54_OFFSET UNITYSDK_OFFSET(0x11DB17C0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_956C7A6E2D0F82A1_OFFSET UNITYSDK_OFFSET(0x11DB1B20)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_A8B30F4FB05440AA_OFFSET UNITYSDK_OFFSET(0x11DB32E0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_B1F8B1D2259D2BCF_OFFSET UNITYSDK_OFFSET(0x11DB3390)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_BDFE81FEA9BC8C74_OFFSET UNITYSDK_OFFSET(0x11DB2CA0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C439867C0DDBD4D9_OFFSET UNITYSDK_OFFSET(0x11DB0670)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C4DEAEE83B3E8BE5_OFFSET UNITYSDK_OFFSET(0x11DB2B10)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C51B46B0F67239A5_OFFSET UNITYSDK_OFFSET(0x11DB29C0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_CEC4E639DE40C8C4_OFFSET UNITYSDK_OFFSET(0x11DB2250)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x11DAFF90)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_EE1C6F697A4919D7_OFFSET UNITYSDK_OFFSET(0x11DB0870)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_F485487359D38A65_OFFSET UNITYSDK_OFFSET(0x11DB0520)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FD947098326DD009_OFFSET UNITYSDK_OFFSET(0x11DAFD90)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FE79E9ECE1F0E214_OFFSET UNITYSDK_OFFSET(0x11DAFCE0)
#define CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FFBBE4A6EC365E53_OFFSET UNITYSDK_OFFSET(0x11DB07F0)

inline static constexpr unsigned int Class_1_011AF2E14064C658_Class_1_E2C115A3940BD40A_TypeDefinitionIndex = 70815;

class Class_1_011AF2E14064C658_Class_1_E2C115A3940BD40A : public ::System::Object
{
public:
	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FE79E9ECE1F0E214(::System::String* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FE79E9ECE1F0E214_OFFSET))(a1);
	}

	static ::Class_2_208CC9941471731A_945* Method_1_1742CC6082AF8D7B(::UnityEngine::Vector3 a1)
	{
		return ((::Class_2_208CC9941471731A_945*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_1742CC6082AF8D7B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F485487359D38A65(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_F485487359D38A65_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>* Method_1_C439867C0DDBD4D9(::FluffyUnderware::Curvy::CurvySpline* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>*(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C439867C0DDBD4D9_OFFSET))(a1);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FFBBE4A6EC365E53(::Struct_2_76CCAEE20B3AE57C a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Struct_2_76CCAEE20B3AE57C))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FFBBE4A6EC365E53_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_EE1C6F697A4919D7(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_EE1C6F697A4919D7_OFFSET))(a1);
	}

	static ::System::Void Method_1_3D2905F5BCAF31A1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_3D2905F5BCAF31A1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_0A1ADB3AD4679D40(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0A1ADB3AD4679D40_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_7642E9CE17CC35E4()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_7642E9CE17CC35E4_OFFSET))();
	}

	static ::Struct_2_4266CA7D1A31BD8B Method_1_87388A1C5AF6EB54(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_4266CA7D1A31BD8B(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_87388A1C5AF6EB54_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::EntityHandle Method_1_956C7A6E2D0F82A1(::System::UInt32 a1, ::System::UInt32 a2, ::Foundation::ViewObject::ViewObjectHandle& a3)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_956C7A6E2D0F82A1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_161804062D142275(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_6657081C8A94CA44*>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::Class_1_6657081C8A94CA44*>*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_161804062D142275_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_25235041EF301825(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_25235041EF301825_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4160A4E27D8F4BEA(::Enum_3_FBFD6F7304B717CB a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Enum_3_FBFD6F7304B717CB, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_4160A4E27D8F4BEA_OFFSET))(a1, a2);
	}

	static ::Class_1_204C453CC79AE4E0_2* Method_1_860CA5F408151004(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::Class_1_204C453CC79AE4E0_2*(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_860CA5F408151004_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::EntityHandle Method_1_58D409B3F1EEB758(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_58D409B3F1EEB758_OFFSET))(a1);
	}

	static ::System::Void Method_1_0651AA5046861BAB(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_204C453CC79AE4E0_2*>*& a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_204C453CC79AE4E0_2*>*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0651AA5046861BAB_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::EntityHandle Method_1_0F42923FC2842D5B(::Foundation::ViewObject::GroupMemberIdentifier a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_0F42923FC2842D5B_OFFSET))(a1, a2);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_FD947098326DD009(::Foundation::ViewObject::GroupMemberIdentifier a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_FD947098326DD009_OFFSET))(a1);
	}

	static ::Class_1_204C453CC79AE4E0_2* Method_1_5CAFC7F339044F14(::System::Int32 a1, ::System::String* a2)
	{
		return ((::Class_1_204C453CC79AE4E0_2*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_5CAFC7F339044F14_OFFSET))(a1, a2);
	}

	static ::Foundation::ViewObject::ViewObjectHandle Method_1_CEC4E639DE40C8C4(::MoleMole::Battle::Entity* a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_CEC4E639DE40C8C4_OFFSET))(a1);
	}

	static ::Class_2_208CC9941471731A_945* Method_1_5B79F71C67C49000(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_2_208CC9941471731A_945*(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_5B79F71C67C49000_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C51B46B0F67239A5(::Foundation::ViewObject::ViewObjectHandle a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C51B46B0F67239A5_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C4DEAEE83B3E8BE5(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_C4DEAEE83B3E8BE5_OFFSET))(a1, a2);
	}

	static ::Class_1_204C453CC79AE4E0_2* Method_1_285A985B7FCC813A(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
	{
		return ((::Class_1_204C453CC79AE4E0_2*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_285A985B7FCC813A_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::System::Boolean Method_1_22F782D71D97E614(::System::Collections::Generic::List_1<::System::Int32>*& a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_22F782D71D97E614_OFFSET))(a1);
	}

	static ::System::Void Method_1_BDFE81FEA9BC8C74(::Foundation::ViewObject::ViewObjectHandle a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_BDFE81FEA9BC8C74_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::EntityHandle Method_1_A8B30F4FB05440AA(::System::String* a1, ::Foundation::ViewObject::ViewObjectHandle& a2)
	{
		return ((::MoleMole::EntityHandle(*)(::System::String*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_A8B30F4FB05440AA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B1F8B1D2259D2BCF(::System::Action* a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658_CLASS_1_E2C115A3940BD40A_METHOD_1_B1F8B1D2259D2BCF_OFFSET))(a1, a2);
	}
};
