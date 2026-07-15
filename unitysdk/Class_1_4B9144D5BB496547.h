#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoGenCellType.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_36.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_9.h"
#include "unitysdk/System/Object.h"

class Class_1_53BE720C46D20BF8;
class Class_1_B27A28B5F94F6BD2_1;
class Class_1_B27A28B5F94F6BD2_2;
namespace RPG::GameCore { class BlockGrassData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageCaptureAliasLookup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_4B9144D5BB496547_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188B86A0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_025C2BF75C864CBD_OFFSET UNITYSDK_OFFSET(0x188B5170)
#define CLASS_1_4B9144D5BB496547_METHOD_1_2D4BB7005ADFB924_OFFSET UNITYSDK_OFFSET(0x188B51E0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_2F0F99A12DB93F30_1_OFFSET UNITYSDK_OFFSET(0x188B6F60)
#define CLASS_1_4B9144D5BB496547_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x188B6A60)
#define CLASS_1_4B9144D5BB496547_METHOD_1_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0x188B7F30)
#define CLASS_1_4B9144D5BB496547_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x188B88B0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_36AC5795892A7080_OFFSET UNITYSDK_OFFSET(0x188B3E60)
#define CLASS_1_4B9144D5BB496547_METHOD_1_3BCC7685E02D1CC5_OFFSET UNITYSDK_OFFSET(0x188B8490)
#define CLASS_1_4B9144D5BB496547_METHOD_1_3E7A053DF81C1024_OFFSET UNITYSDK_OFFSET(0x188B69E0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_4223D717CBD54CE9_OFFSET UNITYSDK_OFFSET(0x188B3A70)
#define CLASS_1_4B9144D5BB496547_METHOD_1_428DB35BB57D13A0_OFFSET UNITYSDK_OFFSET(0x188B7460)
#define CLASS_1_4B9144D5BB496547_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x188B63E0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_4782E5DF6E0B8246_OFFSET UNITYSDK_OFFSET(0x188B8660)
#define CLASS_1_4B9144D5BB496547_METHOD_1_4AC38C7D74462263_OFFSET UNITYSDK_OFFSET(0x188B7C70)
#define CLASS_1_4B9144D5BB496547_METHOD_1_4F474B6C670FB3BB_OFFSET UNITYSDK_OFFSET(0x188B3C20)
#define CLASS_1_4B9144D5BB496547_METHOD_1_5AA60F17D2218936_1_OFFSET UNITYSDK_OFFSET(0x188B85E0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_5AA60F17D2218936_OFFSET UNITYSDK_OFFSET(0x188B8560)
#define CLASS_1_4B9144D5BB496547_METHOD_1_5BF9E97C2EDD159A_OFFSET UNITYSDK_OFFSET(0x188B86F0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_5C399273C3DCFFF0_OFFSET UNITYSDK_OFFSET(0x188B4840)
#define CLASS_1_4B9144D5BB496547_METHOD_1_6904968B663739BC_OFFSET UNITYSDK_OFFSET(0x188B4620)
#define CLASS_1_4B9144D5BB496547_METHOD_1_6BB902CB4887F369_OFFSET UNITYSDK_OFFSET(0x188B8160)
#define CLASS_1_4B9144D5BB496547_METHOD_1_7AEC0BD0F9E4B27E_OFFSET UNITYSDK_OFFSET(0x188B5DE0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_8EAB4E2B8081BC5E_OFFSET UNITYSDK_OFFSET(0x188B6910)
#define CLASS_1_4B9144D5BB496547_METHOD_1_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0x188B8040)
#define CLASS_1_4B9144D5BB496547_METHOD_1_ADB9A11FB96024FA_OFFSET UNITYSDK_OFFSET(0x188B4B70)
#define CLASS_1_4B9144D5BB496547_METHOD_1_AFD13F27A9D0D95A_OFFSET UNITYSDK_OFFSET(0x188B44B0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_BC78794A540CC453_1_OFFSET UNITYSDK_OFFSET(0x188B5E90)
#define CLASS_1_4B9144D5BB496547_METHOD_1_BC78794A540CC453_OFFSET UNITYSDK_OFFSET(0x188B5400)
#define CLASS_1_4B9144D5BB496547_METHOD_1_C21FCA5400390834_OFFSET UNITYSDK_OFFSET(0x188B7CF0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_CA1EA8A5C78DE202_OFFSET UNITYSDK_OFFSET(0x188B3D80)
#define CLASS_1_4B9144D5BB496547_METHOD_1_CD7CFD13F8E1783F_OFFSET UNITYSDK_OFFSET(0x188B83B0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_D576E6020CC2570D_OFFSET UNITYSDK_OFFSET(0x188B7BC0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_D95E53E2EC8FBC5A_OFFSET UNITYSDK_OFFSET(0x188B7EE0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_E6423303080B14B6_OFFSET UNITYSDK_OFFSET(0x188B4910)
#define CLASS_1_4B9144D5BB496547_METHOD_1_E79EF21F0A1F4065_OFFSET UNITYSDK_OFFSET(0x188B3CC0)
#define CLASS_1_4B9144D5BB496547_METHOD_1_EAA731F0273CF1EA_OFFSET UNITYSDK_OFFSET(0x188B5A20)
#define CLASS_1_4B9144D5BB496547_METHOD_1_EABB7CD6830F839E_OFFSET UNITYSDK_OFFSET(0x188B7750)
#define CLASS_1_4B9144D5BB496547__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B89A0)
#define CLASS_1_4B9144D5BB496547__CTOR_OFFSET UNITYSDK_OFFSET(0x188B37D0)

inline static constexpr unsigned int Class_1_4B9144D5BB496547_TypeDefinitionIndex = 66373;

class Class_1_4B9144D5BB496547 : public ::System::Object
{
public:
	static ::Class_1_4B9144D5BB496547** StaticGet_Field_1_0()
	{
		return (::Class_1_4B9144D5BB496547**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B9144D5BB496547_TypeDefinitionIndex)->GetStaticField(0x47A40);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B9144D5BB496547_TypeDefinitionIndex)->GetStaticField(0x47A48);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B9144D5BB496547_TypeDefinitionIndex)->GetStaticField(0xCA10);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_53BE720C46D20BF8*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B27A28B5F94F6BD2_1*>* Field_1_5; // 0x20
	::System::Text::StringBuilder* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasLookup*>* Field_1_7; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BlockGrassData*>* Field_1_8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547__CCTOR_OFFSET))();
	}

	::System::String* Method_1_4223D717CBD54CE9(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_4223D717CBD54CE9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_53BE720C46D20BF8* Method_1_4F474B6C670FB3BB(::Class_1_53BE720C46D20BF8* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::Class_1_53BE720C46D20BF8*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_4F474B6C670FB3BB_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_53BE720C46D20BF8* Method_1_AFD13F27A9D0D95A(::System::String* a1)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_AFD13F27A9D0D95A_OFFSET))(this, a1);
	}

	::Class_1_53BE720C46D20BF8* Method_1_5C399273C3DCFFF0(::System::String* a1, ::System::String* a2, ::RPG::GameCore::BlockNodeConfig* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_5C399273C3DCFFF0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_53BE720C46D20BF8* Method_1_6904968B663739BC(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_6904968B663739BC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_53BE720C46D20BF8* Method_1_025C2BF75C864CBD(::RPG::GameCore::BlockNodeConfig* a1)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_025C2BF75C864CBD_OFFSET))(this, a1);
	}

	::Class_1_53BE720C46D20BF8* Method_1_E79EF21F0A1F4065(::System::String* a1)
	{
		return ((::Class_1_53BE720C46D20BF8*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_E79EF21F0A1F4065_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADB9A11FB96024FA(::System::String* a1, ::System::String* a2, ::Class_1_53BE720C46D20BF8* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_53BE720C46D20BF8*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_ADB9A11FB96024FA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BC78794A540CC453(::Class_1_53BE720C46D20BF8* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53BE720C46D20BF8*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_BC78794A540CC453_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC78794A540CC453_1(::Class_1_53BE720C46D20BF8* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53BE720C46D20BF8*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_BC78794A540CC453_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_8EAB4E2B8081BC5E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_8EAB4E2B8081BC5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_2F0F99A12DB93F30_1_OFFSET))(this);
	}

	::System::Void Method_1_CA1EA8A5C78DE202(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_CA1EA8A5C78DE202_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36AC5795892A7080(::System::String* a1, ::Class_1_53BE720C46D20BF8* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_53BE720C46D20BF8*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_36AC5795892A7080_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::StageCaptureAliasLookup* Method_1_D576E6020CC2570D(::System::String* a1)
	{
		return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_D576E6020CC2570D_OFFSET))(this, a1);
	}

	::RPG::GameCore::StageCaptureAliasLookup* Method_1_E6423303080B14B6(::System::String* a1, ::System::String* a2, ::RPG::GameCore::BlockNodeConfig* a3, ::RPG::GameCore::StageBaseConfig* a4)
	{
		return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StageBaseConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_E6423303080B14B6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4AC38C7D74462263(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_4AC38C7D74462263_OFFSET))(this, a1);
	}

	::RPG::GameCore::BlockGrassData* Method_1_C21FCA5400390834(::System::String* a1)
	{
		return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_C21FCA5400390834_OFFSET))(this, a1);
	}

	::RPG::GameCore::BlockGrassData* Method_1_D95E53E2EC8FBC5A(::System::String* a1)
	{
		return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_D95E53E2EC8FBC5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3559476C7C86165D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_3559476C7C86165D_OFFSET))(this, a1);
	}

	::System::Void Method_1_96E3159279ADB646(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_96E3159279ADB646_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAA731F0273CF1EA(::Class_1_53BE720C46D20BF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53BE720C46D20BF8*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_EAA731F0273CF1EA_OFFSET))(this, a1);
	}

	::Class_1_B27A28B5F94F6BD2_1* Method_1_428DB35BB57D13A0(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_B27A28B5F94F6BD2_1*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_428DB35BB57D13A0_OFFSET))(this, a1, a2);
	}

	::Class_1_B27A28B5F94F6BD2_1* Method_1_6BB902CB4887F369(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_B27A28B5F94F6BD2_1*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_6BB902CB4887F369_OFFSET))(this, a1, a2);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_EABB7CD6830F839E(::Struct_2_CC45B4503679E14E_9 a1, ::System::Boolean a2)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::Struct_2_CC45B4503679E14E_9, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_EABB7CD6830F839E_OFFSET))(this, a1, a2);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_3BCC7685E02D1CC5(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_3BCC7685E02D1CC5_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_CD7CFD13F8E1783F(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_CD7CFD13F8E1783F_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_5AA60F17D2218936(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_5AA60F17D2218936_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_5AA60F17D2218936_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_5AA60F17D2218936_1_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_B27A28B5F94F6BD2_1* Method_1_4782E5DF6E0B8246(::System::String* a1)
	{
		return ((::Class_1_B27A28B5F94F6BD2_1*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_4782E5DF6E0B8246_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_5BF9E97C2EDD159A(::UnityEngine::GameObject* a1, ::UnityEngine::Texture2D* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_5BF9E97C2EDD159A_OFFSET))(this, a1, a2);
	}

	static ::Class_1_4B9144D5BB496547* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_4B9144D5BB496547*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	static ::System::Void Method_1_7AEC0BD0F9E4B27E(::Class_1_53BE720C46D20BF8* a1)
	{
		return ((::System::Void(*)(::Class_1_53BE720C46D20BF8*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_7AEC0BD0F9E4B27E_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D4BB7005ADFB924(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AutoGenCellType, ::Class_1_B27A28B5F94F6BD2_2*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AutoGenCellType, ::Class_1_B27A28B5F94F6BD2_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_2D4BB7005ADFB924_OFFSET))(a1);
	}

	static ::System::Void Method_1_3E7A053DF81C1024(::Class_1_B27A28B5F94F6BD2_1* a1)
	{
		return ((::System::Void(*)(::Class_1_B27A28B5F94F6BD2_1*))((::PBYTE)hIl2Cpp + CLASS_1_4B9144D5BB496547_METHOD_1_3E7A053DF81C1024_OFFSET))(a1);
	}
};
