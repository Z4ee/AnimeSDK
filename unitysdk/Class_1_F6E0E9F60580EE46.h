#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_343;
class Class_0_16E4307DCC419505_345;
class Class_1_6A1DFE1822B872F8;
class Class_1_7A22A3DBEEDD1F80;
namespace Google::Protobuf { class ByteString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F6E0E9F60580EE46_METHOD_1_0BC0C86940E71D95_OFFSET UNITYSDK_OFFSET(0x8FAEE30)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_0EF6D0E3DDAF5C52_OFFSET UNITYSDK_OFFSET(0x8FAC7C0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_0F40033028C887AE_OFFSET UNITYSDK_OFFSET(0x8FB04E0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_14695FB61F2DD2BF_OFFSET UNITYSDK_OFFSET(0x8FAC440)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_16A88F7DE6D13900_OFFSET UNITYSDK_OFFSET(0x8FABEB0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_16B3819A897EC496_OFFSET UNITYSDK_OFFSET(0x8FB0710)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_1B2BEB838ACA5F72_OFFSET UNITYSDK_OFFSET(0x8FAD670)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_1D1E92CE8815DB85_OFFSET UNITYSDK_OFFSET(0x8FADE70)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x8FA89E0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_21C75E5F012F45C6_1_OFFSET UNITYSDK_OFFSET(0x8FAEBD0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_21C75E5F012F45C6_OFFSET UNITYSDK_OFFSET(0x8FAEA80)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_33AC5C72E0EF495B_OFFSET UNITYSDK_OFFSET(0x8FB0960)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_34734A0CE66391CA_OFFSET UNITYSDK_OFFSET(0x8FACC90)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_3537670BE29CC909_1_OFFSET UNITYSDK_OFFSET(0x8FABB80)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_3537670BE29CC909_OFFSET UNITYSDK_OFFSET(0x8FABA70)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_39F0DE2A1348DBFF_1_OFFSET UNITYSDK_OFFSET(0x8FAD230)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_39F0DE2A1348DBFF_2_OFFSET UNITYSDK_OFFSET(0x8FAD4B0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_39F0DE2A1348DBFF_3_OFFSET UNITYSDK_OFFSET(0x8F83F40)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_39F0DE2A1348DBFF_OFFSET UNITYSDK_OFFSET(0x8FAD120)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_1_OFFSET UNITYSDK_OFFSET(0x8FADD00)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_2_OFFSET UNITYSDK_OFFSET(0x8FAF850)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_3_OFFSET UNITYSDK_OFFSET(0x8FAF900)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_4_OFFSET UNITYSDK_OFFSET(0x8FAF9B0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_OFFSET UNITYSDK_OFFSET(0x8FAC050)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_3DA52DC07827BE87_OFFSET UNITYSDK_OFFSET(0x8FACDB0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_43B9626D1ABEA7B1_OFFSET UNITYSDK_OFFSET(0x8FB0B60)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_5058E710D0F1AED5_1_OFFSET UNITYSDK_OFFSET(0x8FADB90)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_5058E710D0F1AED5_OFFSET UNITYSDK_OFFSET(0x8FADAD0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_59D09FABE6B59443_OFFSET UNITYSDK_OFFSET(0x8FAD890)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_600F21A3B717E2D0_1_OFFSET UNITYSDK_OFFSET(0x8FAFBE0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_600F21A3B717E2D0_OFFSET UNITYSDK_OFFSET(0x8FAEFA0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_61CD83770C418925_OFFSET UNITYSDK_OFFSET(0x8FAC710)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_631D2F9F05C7B729_OFFSET UNITYSDK_OFFSET(0x8FB0DA0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_6434F3E6F6B1EC67_OFFSET UNITYSDK_OFFSET(0x8FAD5C0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_68A2CF83F3E3D3C0_OFFSET UNITYSDK_OFFSET(0x8FAC280)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_6A47E919513E3EEC_OFFSET UNITYSDK_OFFSET(0x8FAB6F0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_6C3D9B9514010865_OFFSET UNITYSDK_OFFSET(0x8FACB80)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_749948B663FCCCEF_1_OFFSET UNITYSDK_OFFSET(0x8FABFB0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_749948B663FCCCEF_2_OFFSET UNITYSDK_OFFSET(0x8FAFD90)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x8FABF10)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_79D77DB38D6E8838_1_OFFSET UNITYSDK_OFFSET(0x8FAD340)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_79D77DB38D6E8838_OFFSET UNITYSDK_OFFSET(0x8FABD40)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_7BD6C9DF14A13CD2_OFFSET UNITYSDK_OFFSET(0x8FACA20)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_7D98CA73CFBFA0CC_OFFSET UNITYSDK_OFFSET(0x8FAED20)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_7DF563F71F8E853A_1_OFFSET UNITYSDK_OFFSET(0x8FAD8F0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_7DF563F71F8E853A_OFFSET UNITYSDK_OFFSET(0x8FAC900)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_836D361992270D09_OFFSET UNITYSDK_OFFSET(0x8FB06B0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_88EA89AC904DF4A3_OFFSET UNITYSDK_OFFSET(0x8FAE0A0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_8BD604B98E0DA1AA_OFFSET UNITYSDK_OFFSET(0x8FB05E0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_8EAB4E2B8081BC5E_1_OFFSET UNITYSDK_OFFSET(0x8FAB9C0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_8EAB4E2B8081BC5E_OFFSET UNITYSDK_OFFSET(0x8FAB910)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_918DA19AE0C4FDA6_OFFSET UNITYSDK_OFFSET(0x8FAFC90)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_932BC234D35144E8_OFFSET UNITYSDK_OFFSET(0x8FB02D0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_966EDE07FE271747_OFFSET UNITYSDK_OFFSET(0x8FB0C80)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_9A8ECDC5FD54604D_OFFSET UNITYSDK_OFFSET(0x8FAF570)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_A005CE8BF25FF0DA_OFFSET UNITYSDK_OFFSET(0x8FB03B0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_A4ABD30075FD9DC1_OFFSET UNITYSDK_OFFSET(0x8FADF20)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_AB429D27BD0B7E32_OFFSET UNITYSDK_OFFSET(0x8FAF730)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_ACEE40394550C74A_OFFSET UNITYSDK_OFFSET(0x8FAB7F0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_AD452325C5B878EF_OFFSET UNITYSDK_OFFSET(0x8FAE1C0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_1_OFFSET UNITYSDK_OFFSET(0x8FAE400)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_2_OFFSET UNITYSDK_OFFSET(0x8FAFA60)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_3_OFFSET UNITYSDK_OFFSET(0x8FAFE30)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_4_OFFSET UNITYSDK_OFFSET(0x8FAFEE0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_5_OFFSET UNITYSDK_OFFSET(0x8FAFF90)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_6_OFFSET UNITYSDK_OFFSET(0x8FB0040)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_OFFSET UNITYSDK_OFFSET(0x8FADC50)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_B8CAD5FE9D77BDD3_OFFSET UNITYSDK_OFFSET(0x8FAC100)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_BDF6DC7C2F5C34C3_OFFSET UNITYSDK_OFFSET(0x8FB0640)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_C31480916099843E_OFFSET UNITYSDK_OFFSET(0x8FABC90)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x8FB0C20)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_CF1F51BB8D8D7B68_OFFSET UNITYSDK_OFFSET(0x8FB0D30)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_CF498A3D49D83690_1_OFFSET UNITYSDK_OFFSET(0x8FAF430)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_CF498A3D49D83690_OFFSET UNITYSDK_OFFSET(0x8FAF2F0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_D1D6552531F33439_OFFSET UNITYSDK_OFFSET(0x8FAE770)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_DC6DBDB5A62BAE98_1_OFFSET UNITYSDK_OFFSET(0x8FAC610)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_DC6DBDB5A62BAE98_2_OFFSET UNITYSDK_OFFSET(0x8FAE4B0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_DC6DBDB5A62BAE98_OFFSET UNITYSDK_OFFSET(0x8FAC510)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_E0C1EEE779E3ED8A_OFFSET UNITYSDK_OFFSET(0x8FB0A90)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_E34FC0C9D344902E_OFFSET UNITYSDK_OFFSET(0x8FB00F0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_E49CBB71F92FA7D7_1_OFFSET UNITYSDK_OFFSET(0x8FAE8C0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_E49CBB71F92FA7D7_OFFSET UNITYSDK_OFFSET(0x8FAE5B0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_E92462192421CBA7_OFFSET UNITYSDK_OFFSET(0x8FADA10)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_EC0437B5CB62BCEE_1_OFFSET UNITYSDK_OFFSET(0x8FAF130)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_EC0437B5CB62BCEE_2_OFFSET UNITYSDK_OFFSET(0x8FAF210)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_EC0437B5CB62BCEE_OFFSET UNITYSDK_OFFSET(0x8FAF050)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8FB0CE0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x8FB0CF0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_F1CEBF20C0999458_OFFSET UNITYSDK_OFFSET(0x8FADDB0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_F77335C48704381F_OFFSET UNITYSDK_OFFSET(0x8FAE2E0)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x8FB0260)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_F9968965A4F26E93_OFFSET UNITYSDK_OFFSET(0x8FAF620)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_F9D31720232D2A91_OFFSET UNITYSDK_OFFSET(0x8FAFB10)
#define CLASS_1_F6E0E9F60580EE46_METHOD_1_FB69B6A661974187_OFFSET UNITYSDK_OFFSET(0x8FACF60)
#define CLASS_1_F6E0E9F60580EE46__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FB0E10)

inline static constexpr unsigned int Class_1_F6E0E9F60580EE46_TypeDefinitionIndex = 51691;

class Class_1_F6E0E9F60580EE46 : public ::System::Object
{
public:
	static ::Class_1_7A22A3DBEEDD1F80** StaticGet_Field_1_0()
	{
		return (::Class_1_7A22A3DBEEDD1F80**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6E0E9F60580EE46_TypeDefinitionIndex)->GetStaticField(0x5290);
	}
	static ::Il2CppArray<::Class_1_6A1DFE1822B872F8*>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::Class_1_6A1DFE1822B872F8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6E0E9F60580EE46_TypeDefinitionIndex)->GetStaticField(0x5298);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6E0E9F60580EE46_TypeDefinitionIndex)->GetStaticField(0x52A0);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6E0E9F60580EE46_TypeDefinitionIndex)->GetStaticField(0x2AF0);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6E0E9F60580EE46_TypeDefinitionIndex)->GetStaticField(0x2AF4);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6E0E9F60580EE46_TypeDefinitionIndex)->GetStaticField(0x2AF8);
	}
	// static const ::System::String* Field_1_4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_1DE6433C25680F9D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_1DE6433C25680F9D_OFFSET))();
	}

	static ::Class_1_6A1DFE1822B872F8* Method_1_6A47E919513E3EEC()
	{
		return ((::Class_1_6A1DFE1822B872F8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_6A47E919513E3EEC_OFFSET))();
	}

	static ::System::Void Method_1_8EAB4E2B8081BC5E(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_8EAB4E2B8081BC5E_OFFSET))(a1);
	}

	static ::System::Void Method_1_8EAB4E2B8081BC5E_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_8EAB4E2B8081BC5E_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_3537670BE29CC909(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_3537670BE29CC909_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3537670BE29CC909_1(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_3537670BE29CC909_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C31480916099843E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_C31480916099843E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_79D77DB38D6E8838(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_79D77DB38D6E8838_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_749948B663FCCCEF_OFFSET))();
	}

	static ::System::Void Method_1_749948B663FCCCEF_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_749948B663FCCCEF_1_OFFSET))();
	}

	static ::System::Void Method_1_3D9CBF274D847ED1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_OFFSET))(a1);
	}

	static ::System::Void Method_1_B8CAD5FE9D77BDD3(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_B8CAD5FE9D77BDD3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_68A2CF83F3E3D3C0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Byte a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_68A2CF83F3E3D3C0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_14695FB61F2DD2BF(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_14695FB61F2DD2BF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_DC6DBDB5A62BAE98(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_DC6DBDB5A62BAE98_OFFSET))(a1);
	}

	static ::System::Void Method_1_DC6DBDB5A62BAE98_1(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_DC6DBDB5A62BAE98_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_61CD83770C418925(::System::UInt32 a1, ::RPG::GameCore::TurnState a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_61CD83770C418925_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0EF6D0E3DDAF5C52(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_0EF6D0E3DDAF5C52_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_7DF563F71F8E853A(::RPG::GameCore::GameEntity* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_7DF563F71F8E853A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7BD6C9DF14A13CD2(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::Byte a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::System::String*, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_7BD6C9DF14A13CD2_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_6C3D9B9514010865(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_6C3D9B9514010865_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_34734A0CE66391CA(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::Byte a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_34734A0CE66391CA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3DA52DC07827BE87(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_3DA52DC07827BE87_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FB69B6A661974187(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_FB69B6A661974187_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_39F0DE2A1348DBFF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_39F0DE2A1348DBFF_OFFSET))(a1);
	}

	static ::System::Void Method_1_39F0DE2A1348DBFF_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_39F0DE2A1348DBFF_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_79D77DB38D6E8838_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_79D77DB38D6E8838_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_39F0DE2A1348DBFF_2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_39F0DE2A1348DBFF_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_6434F3E6F6B1EC67(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_6434F3E6F6B1EC67_OFFSET))(a1);
	}

	static ::System::Void Method_1_1B2BEB838ACA5F72(::Class_0_16E4307DCC419505_343* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::GameEntity* a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_343*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_1B2BEB838ACA5F72_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_7DF563F71F8E853A_1(::RPG::GameCore::GameEntity* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_7DF563F71F8E853A_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E92462192421CBA7(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_E92462192421CBA7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5058E710D0F1AED5(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_5058E710D0F1AED5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5058E710D0F1AED5_1(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_5058E710D0F1AED5_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B55327F2B1D9F668(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_OFFSET))(a1);
	}

	static ::System::Void Method_1_3D9CBF274D847ED1_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_F1CEBF20C0999458(::RPG::GameCore::TurnState a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_F1CEBF20C0999458_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D1E92CE8815DB85(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_1D1E92CE8815DB85_OFFSET))(a1);
	}

	static ::System::Void Method_1_A4ABD30075FD9DC1(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_A4ABD30075FD9DC1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_88EA89AC904DF4A3(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_88EA89AC904DF4A3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AD452325C5B878EF(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_AD452325C5B878EF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F77335C48704381F(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_F77335C48704381F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_DC6DBDB5A62BAE98_2(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_DC6DBDB5A62BAE98_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_E49CBB71F92FA7D7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_E49CBB71F92FA7D7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_D1D6552531F33439(::Class_0_16E4307DCC419505_343* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_343*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_D1D6552531F33439_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E49CBB71F92FA7D7_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_E49CBB71F92FA7D7_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_21C75E5F012F45C6(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_21C75E5F012F45C6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21C75E5F012F45C6_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_21C75E5F012F45C6_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D98CA73CFBFA0CC(::System::String* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_7D98CA73CFBFA0CC_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0BC0C86940E71D95(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_0BC0C86940E71D95_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_600F21A3B717E2D0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_600F21A3B717E2D0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC0437B5CB62BCEE(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_EC0437B5CB62BCEE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_EC0437B5CB62BCEE_1(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_EC0437B5CB62BCEE_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_EC0437B5CB62BCEE_2(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_EC0437B5CB62BCEE_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CF498A3D49D83690(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_CF498A3D49D83690_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CF498A3D49D83690_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_CF498A3D49D83690_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9A8ECDC5FD54604D(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_9A8ECDC5FD54604D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F9968965A4F26E93(::RPG::GameCore::TaskContext* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_F9968965A4F26E93_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AB429D27BD0B7E32(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_AB429D27BD0B7E32_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3D9CBF274D847ED1_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_3D9CBF274D847ED1_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_3_OFFSET))(a1);
	}

	static ::System::Void Method_1_3D9CBF274D847ED1_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_3D9CBF274D847ED1_4_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_F9D31720232D2A91(::System::Int32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::System::Int32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_F9D31720232D2A91_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_600F21A3B717E2D0_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_600F21A3B717E2D0_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_918DA19AE0C4FDA6(::RPG::GameCore::TaskContext* a1, ::System::Byte a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_918DA19AE0C4FDA6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_749948B663FCCCEF_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_749948B663FCCCEF_2_OFFSET))();
	}

	static ::System::Void Method_1_39F0DE2A1348DBFF_3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_39F0DE2A1348DBFF_3_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_3(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_3_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_4_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_5(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_5_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55327F2B1D9F668_6(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_B55327F2B1D9F668_6_OFFSET))(a1);
	}

	static ::System::Void Method_1_E34FC0C9D344902E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_E34FC0C9D344902E_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_932BC234D35144E8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_932BC234D35144E8_OFFSET))();
	}

	static ::Google::Protobuf::ByteString* Method_1_A005CE8BF25FF0DA()
	{
		return ((::Google::Protobuf::ByteString*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_A005CE8BF25FF0DA_OFFSET))();
	}

	static ::System::Void Method_1_0F40033028C887AE(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_0F40033028C887AE_OFFSET))(a1);
	}

	static ::System::Void Method_1_8BD604B98E0DA1AA(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_8BD604B98E0DA1AA_OFFSET))(a1);
	}

	static ::System::Void Method_1_BDF6DC7C2F5C34C3(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_BDF6DC7C2F5C34C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_836D361992270D09(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_836D361992270D09_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_16B3819A897EC496(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_16B3819A897EC496_OFFSET))(a1);
	}

	static ::System::String* Method_1_33AC5C72E0EF495B(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_33AC5C72E0EF495B_OFFSET))(a1);
	}

	static ::System::Void Method_1_E0C1EEE779E3ED8A(::Class_1_7A22A3DBEEDD1F80* a1, ::System::String*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_E0C1EEE779E3ED8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43B9626D1ABEA7B1(::Class_1_7A22A3DBEEDD1F80* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_43B9626D1ABEA7B1_OFFSET))(a1, a2);
	}

	static ::Class_1_6A1DFE1822B872F8* Method_1_ACEE40394550C74A(::RPG::GameCore::LogSamplerType a1)
	{
		return ((::Class_1_6A1DFE1822B872F8*(*)(::RPG::GameCore::LogSamplerType))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_ACEE40394550C74A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::UInt64 Method_1_966EDE07FE271747()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_966EDE07FE271747_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::String* Method_1_16A88F7DE6D13900(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_16A88F7DE6D13900_OFFSET))(a1);
	}

	static ::System::String* Method_1_CF1F51BB8D8D7B68(::Class_0_16E4307DCC419505_345* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_CF1F51BB8D8D7B68_OFFSET))(a1);
	}

	static ::System::String* Method_1_59D09FABE6B59443(::Class_0_16E4307DCC419505_343* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_59D09FABE6B59443_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_631D2F9F05C7B729(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F6E0E9F60580EE46_METHOD_1_631D2F9F05C7B729_OFFSET))(a1);
	}
};
