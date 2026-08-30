#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoGenCellType.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_37.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_5.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_9.h"
#include "unitysdk/System/Object.h"

class Class_1_53BE720C46D20BF8;
class Class_1_B27A28B5F94F6BD2_1;
class Class_1_B27A28B5F94F6BD2_2;
class Class_1_B27A28B5F94F6BD2_4;
namespace RPG::GameCore { class BlockGrassData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageCaptureAliasLookup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_87E4A0793332EE35_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6C0090)
#define CLASS_1_87E4A0793332EE35_METHOD_1_025C2BF75C864CBD_OFFSET UNITYSDK_OFFSET(0xB6BBAA0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_07BF3EF95ADEC810_OFFSET UNITYSDK_OFFSET(0xB6BDB30)
#define CLASS_1_87E4A0793332EE35_METHOD_1_15534106FEC2AA02_OFFSET UNITYSDK_OFFSET(0xB6BA9E0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_2D4BB7005ADFB924_OFFSET UNITYSDK_OFFSET(0xB6BC760)
#define CLASS_1_87E4A0793332EE35_METHOD_1_2F0F99A12DB93F30_1_OFFSET UNITYSDK_OFFSET(0xB6BE5B0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0xB6BE000)
#define CLASS_1_87E4A0793332EE35_METHOD_1_2F2F7924D292824D_OFFSET UNITYSDK_OFFSET(0xB6BF590)
#define CLASS_1_87E4A0793332EE35_METHOD_1_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0xB6BF920)
#define CLASS_1_87E4A0793332EE35_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0xB6C02A0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_35EF58BDB5C8F81D_OFFSET UNITYSDK_OFFSET(0xB6BAAF0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_36AC5795892A7080_OFFSET UNITYSDK_OFFSET(0xB6B9F10)
#define CLASS_1_87E4A0793332EE35_METHOD_1_3BCC7685E02D1CC5_OFFSET UNITYSDK_OFFSET(0xB6BFE80)
#define CLASS_1_87E4A0793332EE35_METHOD_1_3E7A053DF81C1024_OFFSET UNITYSDK_OFFSET(0xB6BDC00)
#define CLASS_1_87E4A0793332EE35_METHOD_1_4223D717CBD54CE9_OFFSET UNITYSDK_OFFSET(0xB6B9B20)
#define CLASS_1_87E4A0793332EE35_METHOD_1_428DB35BB57D13A0_OFFSET UNITYSDK_OFFSET(0xB6BEB60)
#define CLASS_1_87E4A0793332EE35_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xB6BD590)
#define CLASS_1_87E4A0793332EE35_METHOD_1_4782E5DF6E0B8246_OFFSET UNITYSDK_OFFSET(0xB6C0050)
#define CLASS_1_87E4A0793332EE35_METHOD_1_4AC38C7D74462263_OFFSET UNITYSDK_OFFSET(0xB6BD510)
#define CLASS_1_87E4A0793332EE35_METHOD_1_4F474B6C670FB3BB_OFFSET UNITYSDK_OFFSET(0xB6B9CD0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_50085886DA0BF6D4_OFFSET UNITYSDK_OFFSET(0xB6BCA10)
#define CLASS_1_87E4A0793332EE35_METHOD_1_518C481117C9867C_1_OFFSET UNITYSDK_OFFSET(0xB6BD010)
#define CLASS_1_87E4A0793332EE35_METHOD_1_518C481117C9867C_OFFSET UNITYSDK_OFFSET(0xB6BC980)
#define CLASS_1_87E4A0793332EE35_METHOD_1_51F384253127E0E9_1_OFFSET UNITYSDK_OFFSET(0xB6BDE40)
#define CLASS_1_87E4A0793332EE35_METHOD_1_51F384253127E0E9_OFFSET UNITYSDK_OFFSET(0xB6BDC80)
#define CLASS_1_87E4A0793332EE35_METHOD_1_5AA60F17D2218936_1_OFFSET UNITYSDK_OFFSET(0xB6BFFD0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_5AA60F17D2218936_OFFSET UNITYSDK_OFFSET(0xB6BFF50)
#define CLASS_1_87E4A0793332EE35_METHOD_1_5AE714D276011832_OFFSET UNITYSDK_OFFSET(0xB6BC430)
#define CLASS_1_87E4A0793332EE35_METHOD_1_5BF9E97C2EDD159A_OFFSET UNITYSDK_OFFSET(0xB6C00E0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_6BB902CB4887F369_OFFSET UNITYSDK_OFFSET(0xB6BFB50)
#define CLASS_1_87E4A0793332EE35_METHOD_1_7AEC0BD0F9E4B27E_OFFSET UNITYSDK_OFFSET(0xB6BD460)
#define CLASS_1_87E4A0793332EE35_METHOD_1_8464702167A4F76E_OFFSET UNITYSDK_OFFSET(0xB6BC5F0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_96E3159279ADB646_1_OFFSET UNITYSDK_OFFSET(0xB6BFA30)
#define CLASS_1_87E4A0793332EE35_METHOD_1_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0xB6BC4D0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_99DEF871D2E391DA_OFFSET UNITYSDK_OFFSET(0xB6B9E30)
#define CLASS_1_87E4A0793332EE35_METHOD_1_9BFFE1A3D5CB48D5_OFFSET UNITYSDK_OFFSET(0xB6BADE0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_9CBAB3AFFCF42CF9_OFFSET UNITYSDK_OFFSET(0xB6BBCA0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_9FE9A0766DCD0F07_OFFSET UNITYSDK_OFFSET(0xB6BF430)
#define CLASS_1_87E4A0793332EE35_METHOD_1_A3E2E595CACD22CF_OFFSET UNITYSDK_OFFSET(0xB6BCCB0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_A8345987ACD4B625_OFFSET UNITYSDK_OFFSET(0xB6BBB10)
#define CLASS_1_87E4A0793332EE35_METHOD_1_ADB9A11FB96024FA_OFFSET UNITYSDK_OFFSET(0xB6BB4A0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_AFD13F27A9D0D95A_OFFSET UNITYSDK_OFFSET(0xB6BA580)
#define CLASS_1_87E4A0793332EE35_METHOD_1_B80A58D645066D9F_OFFSET UNITYSDK_OFFSET(0xB6BF370)
#define CLASS_1_87E4A0793332EE35_METHOD_1_C21FCA5400390834_OFFSET UNITYSDK_OFFSET(0xB6BF6E0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_CD7CFD13F8E1783F_OFFSET UNITYSDK_OFFSET(0xB6BFDA0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_D576E6020CC2570D_OFFSET UNITYSDK_OFFSET(0xB6BF2C0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_D8759D9116320CD8_OFFSET UNITYSDK_OFFSET(0xB6BC3D0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_D95E53E2EC8FBC5A_OFFSET UNITYSDK_OFFSET(0xB6BF8D0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_E79EF21F0A1F4065_1_OFFSET UNITYSDK_OFFSET(0xB6BF4D0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_E79EF21F0A1F4065_OFFSET UNITYSDK_OFFSET(0xB6B9D70)
#define CLASS_1_87E4A0793332EE35_METHOD_1_E9EDE4DBD51B8A64_OFFSET UNITYSDK_OFFSET(0xB6BA6F0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_EAA731F0273CF1EA_OFFSET UNITYSDK_OFFSET(0xB6BD0A0)
#define CLASS_1_87E4A0793332EE35_METHOD_1_EABB7CD6830F839E_OFFSET UNITYSDK_OFFSET(0xB6BEE50)
#define CLASS_1_87E4A0793332EE35_METHOD_1_F68FA8F3C7D24CAA_OFFSET UNITYSDK_OFFSET(0xB6BB140)
#define CLASS_1_87E4A0793332EE35__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6C0390)
#define CLASS_1_87E4A0793332EE35__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B9730)

inline static constexpr unsigned int Class_1_87E4A0793332EE35_TypeDefinitionIndex = 69465;

class Class_1_87E4A0793332EE35 : public ::System::Object
{
public:
	static ::Class_1_87E4A0793332EE35** StaticGet_EMLNOINPICJ()
	{
		return (::Class_1_87E4A0793332EE35**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87E4A0793332EE35_TypeDefinitionIndex)->GetStaticField(0x65FA0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_PGKHBIPPNAP()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87E4A0793332EE35_TypeDefinitionIndex)->GetStaticField(0x65FA8);
	}
	static ::System::Int32* StaticGet_KBEAKBKHMPH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_87E4A0793332EE35_TypeDefinitionIndex)->GetStaticField(0x15060);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BlockGrassData*>* JBLPAONGMDL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* EPPFOALFJJO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_53BE720C46D20BF8*>* PANACPGGDDJ; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasLookup*>* LGDBCCELCMO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasLookup*>* EPNCIPLJDGG; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B27A28B5F94F6BD2_1*>* AELGCIMKLNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B27A28B5F94F6BD2_4*>* AHNLOPFMLAH; // 0x40
	::System::Text::StringBuilder* HAOFFAJOJLL; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* KNEMAJKGDHM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35__CCTOR_OFFSET))();
	}

	::System::String* Method_1_4223D717CBD54CE9(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_4223D717CBD54CE9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_53BE720C46D20BF8* Method_1_4F474B6C670FB3BB(::Class_1_53BE720C46D20BF8* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::Class_1_53BE720C46D20BF8*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_4F474B6C670FB3BB_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_53BE720C46D20BF8* Method_1_AFD13F27A9D0D95A(::System::String* a1)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_AFD13F27A9D0D95A_OFFSET))(this, a1);
	}

	::Class_1_53BE720C46D20BF8* Method_1_15534106FEC2AA02(::System::String* a1, ::System::String* a2, ::RPG::GameCore::BlockNodeConfig* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_15534106FEC2AA02_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_53BE720C46D20BF8* Method_1_E9EDE4DBD51B8A64(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_E9EDE4DBD51B8A64_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_53BE720C46D20BF8* Method_1_025C2BF75C864CBD(::RPG::GameCore::BlockNodeConfig* a1)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_025C2BF75C864CBD_OFFSET))(this, a1);
	}

	::Class_1_53BE720C46D20BF8* Method_1_E79EF21F0A1F4065(::System::String* a1)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_E79EF21F0A1F4065_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_1_A8345987ACD4B625(::RPG::GameCore::BlockNodeConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_A8345987ACD4B625_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CBAB3AFFCF42CF9(::RPG::GameCore::BlockNodeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_9CBAB3AFFCF42CF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8759D9116320CD8(::RPG::GameCore::BlockNodeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_D8759D9116320CD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_96E3159279ADB646(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_96E3159279ADB646_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_CC45B4503679E14E_5>* Method_1_5AE714D276011832(::RPG::GameCore::BlockNodeConfig* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_CC45B4503679E14E_5>*(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_5AE714D276011832_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADB9A11FB96024FA(::System::String* a1, ::System::String* a2, ::Class_1_53BE720C46D20BF8* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_53BE720C46D20BF8*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_ADB9A11FB96024FA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_518C481117C9867C(::Class_1_53BE720C46D20BF8* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53BE720C46D20BF8*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_518C481117C9867C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_518C481117C9867C_1(::Class_1_53BE720C46D20BF8* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53BE720C46D20BF8*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_518C481117C9867C_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_50085886DA0BF6D4(::Class_1_53BE720C46D20BF8* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_53BE720C46D20BF8*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_50085886DA0BF6D4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3E2E595CACD22CF(::System::String* a1, ::Class_1_53BE720C46D20BF8* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_53BE720C46D20BF8*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_A3E2E595CACD22CF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_07BF3EF95ADEC810(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_07BF3EF95ADEC810_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_2F0F99A12DB93F30_1_OFFSET))(this);
	}

	::System::Void Method_1_99DEF871D2E391DA(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_99DEF871D2E391DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36AC5795892A7080(::System::String* a1, ::Class_1_53BE720C46D20BF8* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_53BE720C46D20BF8*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_36AC5795892A7080_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::StageCaptureAliasLookup* Method_1_D576E6020CC2570D(::System::String* a1)
	{
		return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_D576E6020CC2570D_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageCaptureAliasLookup* Method_1_9BFFE1A3D5CB48D5(::System::String* a1, ::System::String* a2, ::RPG::GameCore::BlockNodeConfig* a3, ::RPG::GameCore::StageBaseConfig* a4)
	{
		return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_9BFFE1A3D5CB48D5_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::StageCaptureAliasLookup* Method_1_B80A58D645066D9F(::System::String* a1)
	{
		return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_B80A58D645066D9F_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageCaptureAliasLookup* Method_1_F68FA8F3C7D24CAA(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::StageBaseConfig* a4)
	{
		return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_F68FA8F3C7D24CAA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4AC38C7D74462263(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_4AC38C7D74462263_OFFSET))(this, a1);
	}

	::Class_1_B27A28B5F94F6BD2_4* Method_1_35EF58BDB5C8F81D(::System::String* a1, ::System::String* a2, ::RPG::GameCore::BlockNodeConfig* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
	{
		return ((::Class_1_B27A28B5F94F6BD2_4*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_35EF58BDB5C8F81D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_B27A28B5F94F6BD2_4* Method_1_E79EF21F0A1F4065_1(::System::String* a1)
	{
		return ((::Class_1_B27A28B5F94F6BD2_4*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_E79EF21F0A1F4065_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F2F7924D292824D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_2F2F7924D292824D_OFFSET))(this, a1);
	}

	::RPG::GameCore::BlockGrassData* Method_1_C21FCA5400390834(::System::String* a1)
	{
		return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_C21FCA5400390834_OFFSET))(this, a1);
	}

	::RPG::GameCore::BlockGrassData* Method_1_D95E53E2EC8FBC5A(::System::String* a1)
	{
		return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_D95E53E2EC8FBC5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3559476C7C86165D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_3559476C7C86165D_OFFSET))(this, a1);
	}

	::System::Void Method_1_96E3159279ADB646_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_96E3159279ADB646_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAA731F0273CF1EA(::Class_1_53BE720C46D20BF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53BE720C46D20BF8*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_EAA731F0273CF1EA_OFFSET))(this, a1);
	}

	::Class_1_B27A28B5F94F6BD2_1* Method_1_428DB35BB57D13A0(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_B27A28B5F94F6BD2_1*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_428DB35BB57D13A0_OFFSET))(this, a1, a2);
	}

	::Class_1_B27A28B5F94F6BD2_1* Method_1_6BB902CB4887F369(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_B27A28B5F94F6BD2_1*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_6BB902CB4887F369_OFFSET))(this, a1, a2);
	}

	::Struct_2_CC45B4503679E14E_37 Method_1_EABB7CD6830F839E(::Struct_2_CC45B4503679E14E_9 a1, ::System::Boolean a2)
	{
		return ((::Struct_2_CC45B4503679E14E_37(*)(::PVOID, ::Struct_2_CC45B4503679E14E_9, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_EABB7CD6830F839E_OFFSET))(this, a1, a2);
	}

	::Struct_2_CC45B4503679E14E_37 Method_1_3BCC7685E02D1CC5(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_37(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_3BCC7685E02D1CC5_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC45B4503679E14E_37 Method_1_CD7CFD13F8E1783F(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_37(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_CD7CFD13F8E1783F_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC45B4503679E14E_37 Method_1_5AA60F17D2218936(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_37(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_5AA60F17D2218936_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC45B4503679E14E_37 Method_1_5AA60F17D2218936_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_37(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_5AA60F17D2218936_1_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_B27A28B5F94F6BD2_1* Method_1_4782E5DF6E0B8246(::System::String* a1)
	{
		return ((::Class_1_B27A28B5F94F6BD2_1*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_4782E5DF6E0B8246_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_5BF9E97C2EDD159A(::UnityEngine::GameObject* a1, ::UnityEngine::Texture2D* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_5BF9E97C2EDD159A_OFFSET))(this, a1, a2);
	}

	static ::Class_1_87E4A0793332EE35* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_87E4A0793332EE35*(*)())((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	static ::System::Void Method_1_7AEC0BD0F9E4B27E(::Class_1_53BE720C46D20BF8* a1)
	{
		return ((::System::Void(*)(::Class_1_53BE720C46D20BF8*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_7AEC0BD0F9E4B27E_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D4BB7005ADFB924(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AutoGenCellType, ::Class_1_B27A28B5F94F6BD2_2*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AutoGenCellType, ::Class_1_B27A28B5F94F6BD2_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_2D4BB7005ADFB924_OFFSET))(a1);
	}

	static ::System::Void Method_1_3E7A053DF81C1024(::Class_1_B27A28B5F94F6BD2_1* a1)
	{
		return ((::System::Void(*)(::Class_1_B27A28B5F94F6BD2_1*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_3E7A053DF81C1024_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FE9A0766DCD0F07(::Class_1_B27A28B5F94F6BD2_4* a1)
	{
		return ((::System::Void(*)(::Class_1_B27A28B5F94F6BD2_4*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_9FE9A0766DCD0F07_OFFSET))(a1);
	}

	::System::Void Method_1_51F384253127E0E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_51F384253127E0E9_OFFSET))(this);
	}

	::System::Void Method_1_51F384253127E0E9_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_51F384253127E0E9_1_OFFSET))(this);
	}

	static ::System::Void Method_1_8464702167A4F76E(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_87E4A0793332EE35_METHOD_1_8464702167A4F76E_OFFSET))(a1);
	}
};
