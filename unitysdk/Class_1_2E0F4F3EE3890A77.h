#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2E0F4F3EE3890A77_Enum_3_E97B70FCA25BE2EF.h"
#include "unitysdk/Enum_3_C94072881E4D8DDF.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/Struct_2_12AB628F8BCAA6DE.h"
#include "unitysdk/Struct_2_762745BB6079D620.h"
#include "unitysdk/Struct_2_A97D76DF7CC328CB.h"
#include "unitysdk/Struct_2_D1EFB72CF64C82FB.h"
#include "unitysdk/Struct_2_EB409772687773A2_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_279;
class Class_1_0E19106486AABDF9;
class Class_1_34FD3279A7CB3331;
class Class_1_7807B2B04302CD7B_39;
class Class_1_E3C308E90D1C5952;
class Class_2_208CC9941471731A_760;
class Class_2_360B5C80C04E3AB6;
class Class_2_D202B83AFEDC0267_1;
class Class_3_126510A8BEABCBD0;
class Class_3_F402EAE70F3E0E28_87;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class AbyssS2InteractionBuildData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x1714A3B0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_062C30C07BD5A31D_OFFSET UNITYSDK_OFFSET(0xF1EF7D0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_06A0C6BBC5D269B0_OFFSET UNITYSDK_OFFSET(0xF1EC800)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_0EBA4970CE1970A6_OFFSET UNITYSDK_OFFSET(0x1714A2D0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_0F8226F089EBF6F9_OFFSET UNITYSDK_OFFSET(0x17149D50)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_12E2584290784D11_OFFSET UNITYSDK_OFFSET(0xF1F0980)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_17864F9591822FEE_OFFSET UNITYSDK_OFFSET(0xF1F0CC0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_187B3E3B8611027E_OFFSET UNITYSDK_OFFSET(0xF1EE770)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_188D98AFDB04C63A_OFFSET UNITYSDK_OFFSET(0xF1F0550)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_1B079215490A16A1_OFFSET UNITYSDK_OFFSET(0xF1EFE70)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_1BFB922FA93BF5FA_OFFSET UNITYSDK_OFFSET(0xF1F1A70)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_2597E20A76D721ED_1_OFFSET UNITYSDK_OFFSET(0xF1F0610)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_2597E20A76D721ED_OFFSET UNITYSDK_OFFSET(0xF1EF110)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_263AAA2415453CAC_OFFSET UNITYSDK_OFFSET(0xF1F0A50)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_2D895548C61925B8_OFFSET UNITYSDK_OFFSET(0xF1EDDA0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_341698C29DA9690D_OFFSET UNITYSDK_OFFSET(0xF1ED160)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_37CFBDAE896650D5_OFFSET UNITYSDK_OFFSET(0xF1ECDA0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_3BC578EAB014DDA0_OFFSET UNITYSDK_OFFSET(0x1714A150)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_41D8D9609691BC68_OFFSET UNITYSDK_OFFSET(0xF1EE720)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_44AC943DFF18693F_OFFSET UNITYSDK_OFFSET(0x1714A460)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_49964A8388055B4B_OFFSET UNITYSDK_OFFSET(0xF1F1170)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4BC4C45D0317FC97_OFFSET UNITYSDK_OFFSET(0x1714A3F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C4CD42FE499726C_1_OFFSET UNITYSDK_OFFSET(0xF1EE8C0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C4CD42FE499726C_OFFSET UNITYSDK_OFFSET(0xF1EE020)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C633591FEC7DFE8_OFFSET UNITYSDK_OFFSET(0xF1EE7B0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_4CA94EEE67092683_OFFSET UNITYSDK_OFFSET(0xF1EF5F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_5034A05F39A54035_OFFSET UNITYSDK_OFFSET(0xF1F1560)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_50FA36BE07F14CC1_OFFSET UNITYSDK_OFFSET(0xF1EE220)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_5315FDB2373FA304_OFFSET UNITYSDK_OFFSET(0xF1F1E00)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF1F1DC0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_582A746C174B343F_OFFSET UNITYSDK_OFFSET(0x17149C10)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_583F5BF4187B6510_OFFSET UNITYSDK_OFFSET(0xF1EF970)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_585F516F2193A5F9_1_OFFSET UNITYSDK_OFFSET(0xF1EDA80)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_585F516F2193A5F9_OFFSET UNITYSDK_OFFSET(0x17149EB0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_5A219A4F5451E01D_OFFSET UNITYSDK_OFFSET(0xF1EDF10)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_637A915502BBAB58_OFFSET UNITYSDK_OFFSET(0xF1EDB10)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_6A0604423146B648_OFFSET UNITYSDK_OFFSET(0xF1ECF90)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_792DE10F6E501243_OFFSET UNITYSDK_OFFSET(0xF1EF900)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_7D1E3E3790B089E5_OFFSET UNITYSDK_OFFSET(0xF1EC4B0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_7D33C76814CBDF9C_OFFSET UNITYSDK_OFFSET(0xF1ED4E0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_7EB884ACE72E4228_OFFSET UNITYSDK_OFFSET(0xF1EFA00)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_8369C84CFD80B2FB_OFFSET UNITYSDK_OFFSET(0x17149A10)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_836D361992270D09_OFFSET UNITYSDK_OFFSET(0xF1EDCD0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_8666A4DCA4CBDD7A_OFFSET UNITYSDK_OFFSET(0xF1EDF90)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_86743E8E66B3D2C3_OFFSET UNITYSDK_OFFSET(0xF1EF4A0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_86B5E9A9F08192C9_OFFSET UNITYSDK_OFFSET(0xF1ECC40)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_8868ACA3AB5A7582_OFFSET UNITYSDK_OFFSET(0xF1EC560)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x17149870)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_B681D17F144F3FD0_OFFSET UNITYSDK_OFFSET(0xF1ED680)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_B89F04AB3A3E344B_OFFSET UNITYSDK_OFFSET(0xF1ED7F0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_C1F6299B871A3665_OFFSET UNITYSDK_OFFSET(0xF1F1360)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_C4586FF4C8A6406B_OFFSET UNITYSDK_OFFSET(0x17149F40)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_C66FD0CA776DA3CB_OFFSET UNITYSDK_OFFSET(0xF1EEFA0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_CB384C32289DEF52_OFFSET UNITYSDK_OFFSET(0xF1EF440)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_CF26B4AF287B12A0_OFFSET UNITYSDK_OFFSET(0xF1EEAC0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_D1D24AC21ACE0893_OFFSET UNITYSDK_OFFSET(0xF1F16B0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_DCB1C6CDC61D91E8_1_OFFSET UNITYSDK_OFFSET(0xF1F1BA0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_DCB1C6CDC61D91E8_OFFSET UNITYSDK_OFFSET(0xF1F0F50)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_DFF98536D8B4074F_1_OFFSET UNITYSDK_OFFSET(0xF1EF680)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xF1ED960)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_E0D427AC4C16DE46_OFFSET UNITYSDK_OFFSET(0xF1F1870)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_E573FA715715B52F_OFFSET UNITYSDK_OFFSET(0xF1F0D90)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_E712C48FF2FEC12C_OFFSET UNITYSDK_OFFSET(0xF1EFC70)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_1_OFFSET UNITYSDK_OFFSET(0xF1EC420)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_2_OFFSET UNITYSDK_OFFSET(0xF1F1620)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_OFFSET UNITYSDK_OFFSET(0x1714A240)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0xF1ED3E0)
#define CLASS_1_2E0F4F3EE3890A77_METHOD_1_F80EB96591751CA1_OFFSET UNITYSDK_OFFSET(0xF1EECF0)
#define CLASS_1_2E0F4F3EE3890A77__CCTOR_OFFSET UNITYSDK_OFFSET(0x17149800)

inline static constexpr unsigned int Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex = 66506;

class Class_1_2E0F4F3EE3890A77 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_11()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0x3DF30);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0x3DF38);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0x3DF40);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0xE8C0);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E0F4F3EE3890A77_TypeDefinitionIndex)->GetStaticField(0xE8C4);
	}
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77__CCTOR_OFFSET))();
	}

	static ::Class_1_E3C308E90D1C5952* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_E3C308E90D1C5952*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_995B4AEB9D9468D5_OFFSET))();
	}

	static ::System::Boolean Method_1_8369C84CFD80B2FB(::MoleMole::Battle::Entity*& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_8369C84CFD80B2FB_OFFSET))(a1, a2);
	}

	static ::MoleMole::EntityHandle Method_1_582A746C174B343F(::Class_0_16E4307DCC419505_279*& a1)
	{
		return ((::MoleMole::EntityHandle(*)(::Class_0_16E4307DCC419505_279*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_582A746C174B343F_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_0F8226F089EBF6F9(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_0F8226F089EBF6F9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_585F516F2193A5F9(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_585F516F2193A5F9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C4586FF4C8A6406B(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_C4586FF4C8A6406B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3BC578EAB014DDA0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_3BC578EAB014DDA0_OFFSET))();
	}

	static ::System::Int32 Method_1_EBA29CC3E5DF3810()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_OFFSET))();
	}

	static ::Struct_2_A97D76DF7CC328CB Method_1_0EBA4970CE1970A6(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single& a3, ::System::Single& a4, ::System::Int32& a5)
	{
		return ((::Struct_2_A97D76DF7CC328CB(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_0EBA4970CE1970A6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::Struct_2_12AB628F8BCAA6DE Method_1_4BC4C45D0317FC97(::Class_1_7807B2B04302CD7B_39* a1)
	{
		return ((::Struct_2_12AB628F8BCAA6DE(*)(::Class_1_7807B2B04302CD7B_39*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4BC4C45D0317FC97_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_44AC943DFF18693F(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_44AC943DFF18693F_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_EBA29CC3E5DF3810_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_1_OFFSET))();
	}

	static ::Class_2_208CC9941471731A_760* Method_1_8868ACA3AB5A7582(::MoleMole::Battle::Entity*& a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_760*>*& a2)
	{
		return ((::Class_2_208CC9941471731A_760*(*)(::MoleMole::Battle::Entity*&, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_760*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_8868ACA3AB5A7582_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_86B5E9A9F08192C9(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_86B5E9A9F08192C9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_F39234F2606D8D97_OFFSET))();
	}

	static ::System::Int32 Method_1_7D33C76814CBDF9C(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_7D33C76814CBDF9C_OFFSET))(a1);
	}

	static ::Class_2_D202B83AFEDC0267_1* Method_1_B89F04AB3A3E344B(::MoleMole::Battle::Entity*& a1)
	{
		return ((::Class_2_D202B83AFEDC0267_1*(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_B89F04AB3A3E344B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_DFF98536D8B4074F_OFFSET))();
	}

	static ::System::Boolean Method_1_585F516F2193A5F9_1(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_585F516F2193A5F9_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_836D361992270D09(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_836D361992270D09_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2D895548C61925B8(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_2D895548C61925B8_OFFSET))(a1);
	}

	static ::Class_3_F402EAE70F3E0E28_87* Method_1_B681D17F144F3FD0()
	{
		return ((::Class_3_F402EAE70F3E0E28_87*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_B681D17F144F3FD0_OFFSET))();
	}

	static ::System::Void Method_1_8666A4DCA4CBDD7A(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_8666A4DCA4CBDD7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4C4CD42FE499726C(::System::Int32& a1, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C4CD42FE499726C_OFFSET))(a1, a2);
	}

	static ::Struct_2_762745BB6079D620 Method_1_187B3E3B8611027E()
	{
		return ((::Struct_2_762745BB6079D620(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_187B3E3B8611027E_OFFSET))();
	}

	static ::System::Void Method_1_4C633591FEC7DFE8(::System::Int32& a1, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C633591FEC7DFE8_OFFSET))(a1, a2);
	}

	static ::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData* Method_1_41D8D9609691BC68(::Class_2_208CC9941471731A_760*& a1)
	{
		return ((::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*(*)(::Class_2_208CC9941471731A_760*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_41D8D9609691BC68_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CF26B4AF287B12A0(::MoleMole::Battle::Entity*& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_CF26B4AF287B12A0_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_C66FD0CA776DA3CB()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_C66FD0CA776DA3CB_OFFSET))();
	}

	static ::System::Boolean Method_1_6A0604423146B648(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_6A0604423146B648_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_37CFBDAE896650D5()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_37CFBDAE896650D5_OFFSET))();
	}

	static ::System::Int32 Method_1_06A0C6BBC5D269B0(::System::Int32& a1)
	{
		return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_06A0C6BBC5D269B0_OFFSET))(a1);
	}

	static ::Struct_2_D1EFB72CF64C82FB Method_1_2597E20A76D721ED(::MoleMole::EntityHandle& a1, ::MoleMole::EntityHandle& a2, ::System::Int32& a3)
	{
		return ((::Struct_2_D1EFB72CF64C82FB(*)(::MoleMole::EntityHandle&, ::MoleMole::EntityHandle&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_2597E20A76D721ED_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_CB384C32289DEF52(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_CB384C32289DEF52_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_86743E8E66B3D2C3(::System::Int32& a1, ::System::Boolean a2, ::System::Int32& a3)
	{
		return ((::System::Int32(*)(::System::Int32&, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_86743E8E66B3D2C3_OFFSET))(a1, a2, a3);
	}

	static ::Enum_3_C94072881E4D8DDF Method_1_4CA94EEE67092683()
	{
		return ((::Enum_3_C94072881E4D8DDF(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4CA94EEE67092683_OFFSET))();
	}

	static ::System::Boolean Method_1_DFF98536D8B4074F_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_DFF98536D8B4074F_1_OFFSET))();
	}

	static ::System::Boolean Method_1_062C30C07BD5A31D(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_062C30C07BD5A31D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_792DE10F6E501243(::MoleMole::EntityHandle& a1, ::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_792DE10F6E501243_OFFSET))(a1, a2);
	}

	static ::Class_2_208CC9941471731A_760* Method_1_7D1E3E3790B089E5()
	{
		return ((::Class_2_208CC9941471731A_760*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_7D1E3E3790B089E5_OFFSET))();
	}

	static ::System::Boolean Method_1_583F5BF4187B6510(::System::String*& a1, ::System::Collections::Generic::HashSet_1<::System::String*>*& a2)
	{
		return ((::System::Boolean(*)(::System::String*&, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_583F5BF4187B6510_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7EB884ACE72E4228(::MoleMole::Battle::Entity*& a1, ::Class_2_208CC9941471731A_760*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::Class_2_208CC9941471731A_760*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_7EB884ACE72E4228_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E712C48FF2FEC12C(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_E712C48FF2FEC12C_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_760*>* Method_1_1B079215490A16A1(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_760*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_1B079215490A16A1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_188D98AFDB04C63A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_188D98AFDB04C63A_OFFSET))();
	}

	static ::Struct_2_A97D76DF7CC328CB Method_1_2597E20A76D721ED_1(::MoleMole::EntityHandle& a1, ::MoleMole::EntityHandle& a2, ::System::Int32& a3)
	{
		return ((::Struct_2_A97D76DF7CC328CB(*)(::MoleMole::EntityHandle&, ::MoleMole::EntityHandle&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_2597E20A76D721ED_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F80EB96591751CA1(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_F80EB96591751CA1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_12E2584290784D11(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_12E2584290784D11_OFFSET))(a1);
	}

	static ::System::Void Method_1_17864F9591822FEE(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_17864F9591822FEE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E573FA715715B52F(::MoleMole::Battle::Entity*& a1, ::Class_1_34FD3279A7CB3331*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::Class_1_34FD3279A7CB3331*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_E573FA715715B52F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DCB1C6CDC61D91E8()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_DCB1C6CDC61D91E8_OFFSET))();
	}

	static ::System::Boolean Method_1_49964A8388055B4B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_49964A8388055B4B_OFFSET))();
	}

	static ::System::Void Method_1_C1F6299B871A3665(::System::String* a1, ::UnityEngine::LogType a2, ::System::Nullable_1<::UnityEngine::Color> a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_C1F6299B871A3665_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_263AAA2415453CAC(::System::Int32& a1)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_263AAA2415453CAC_OFFSET))(a1);
	}

	static ::Struct_2_D1EFB72CF64C82FB Method_1_5034A05F39A54035(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single& a3, ::System::Int32& a4)
	{
		return ((::Struct_2_D1EFB72CF64C82FB(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_5034A05F39A54035_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_5A219A4F5451E01D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_5A219A4F5451E01D_OFFSET))();
	}

	static ::System::Int32 Method_1_EBA29CC3E5DF3810_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_EBA29CC3E5DF3810_2_OFFSET))();
	}

	static ::System::Boolean Method_1_D1D24AC21ACE0893(::MoleMole::Battle::Entity*& a1, ::System::Boolean a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_D1D24AC21ACE0893_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_760*>* Method_1_50FA36BE07F14CC1(::System::Int32& a1, ::Class_1_2E0F4F3EE3890A77_Enum_3_E97B70FCA25BE2EF& a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_760*>*(*)(::System::Int32&, ::Class_1_2E0F4F3EE3890A77_Enum_3_E97B70FCA25BE2EF&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_50FA36BE07F14CC1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E0D427AC4C16DE46(::Class_2_360B5C80C04E3AB6*& a1, ::Class_1_0E19106486AABDF9*& a2)
	{
		return ((::System::Boolean(*)(::Class_2_360B5C80C04E3AB6*&, ::Class_1_0E19106486AABDF9*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_E0D427AC4C16DE46_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1BFB922FA93BF5FA(::MoleMole::Battle::Entity*& a1, ::MoleMole::Battle::Entity*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*&, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_1BFB922FA93BF5FA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DCB1C6CDC61D91E8_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_DCB1C6CDC61D91E8_1_OFFSET))();
	}

	static ::Class_3_126510A8BEABCBD0* Method_1_341698C29DA9690D(::System::Int32& a1)
	{
		return ((::Class_3_126510A8BEABCBD0*(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_341698C29DA9690D_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_4C4CD42FE499726C_1(::System::Int32& a1, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*& a2)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::AbyssS2InteractionBuildData*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_4C4CD42FE499726C_1_OFFSET))(a1, a2);
	}

	static ::MoleMole::FlowCanvas::Nodes::AreaIDTag Method_1_637A915502BBAB58(::System::Int32& a1)
	{
		return ((::MoleMole::FlowCanvas::Nodes::AreaIDTag(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_637A915502BBAB58_OFFSET))(a1);
	}

	static ::Struct_2_EB409772687773A2_1 Method_1_5315FDB2373FA304(::MoleMole::Battle::Entity* a1)
	{
		return ((::Struct_2_EB409772687773A2_1(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_2E0F4F3EE3890A77_METHOD_1_5315FDB2373FA304_OFFSET))(a1);
	}
};
