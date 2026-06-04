#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoGenCellType.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_36.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_9.h"
#include "unitysdk/System/Object.h"

class Class_1_64EA8B4AB59D91C7;
class Class_1_64EA8B4AB59D91C7_1;
class Class_1_CC37BE43AC1781E1;
namespace RPG::GameCore { class BlockGrassData; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageCaptureAliasLookup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_DF41AAA326096A0F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA42DE10)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_00EEAE1706DF4240_OFFSET UNITYSDK_OFFSET(0xA42B850)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_0531131A8615976F_OFFSET UNITYSDK_OFFSET(0xA42C180)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_2919684A67A6B409_OFFSET UNITYSDK_OFFSET(0xA42C2C0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_2D4BB7005ADFB924_OFFSET UNITYSDK_OFFSET(0xA42AF20)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_2F0F99A12DB93F30_1_OFFSET UNITYSDK_OFFSET(0xA42C860)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0xA42C360)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0xA42D4A0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0xA429AA0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_36AC5795892A7080_OFFSET UNITYSDK_OFFSET(0xA429D20)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_3AF7EB2E67924205_OFFSET UNITYSDK_OFFSET(0xA42A5A0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_4223D717CBD54CE9_OFFSET UNITYSDK_OFFSET(0xA429740)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_428DB35BB57D13A0_OFFSET UNITYSDK_OFFSET(0xA42CD60)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xA42BC50)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_468EB3408DFE535C_OFFSET UNITYSDK_OFFSET(0xA42A3D0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_4782E5DF6E0B8246_OFFSET UNITYSDK_OFFSET(0xA42DDD0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_503CD42A0C349327_OFFSET UNITYSDK_OFFSET(0xA429B90)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_5AA60F17D2218936_1_OFFSET UNITYSDK_OFFSET(0xA42DD50)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_5AA60F17D2218936_OFFSET UNITYSDK_OFFSET(0xA42DCD0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_5BF9E97C2EDD159A_OFFSET UNITYSDK_OFFSET(0xA42DE60)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_6BB902CB4887F369_OFFSET UNITYSDK_OFFSET(0xA42D6D0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_7F3A7F82646DC51A_OFFSET UNITYSDK_OFFSET(0xA42D920)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_82434943F29BB29D_OFFSET UNITYSDK_OFFSET(0xA42A430)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0xA42D5B0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_BD233AACD8D53F7C_OFFSET UNITYSDK_OFFSET(0xA429C40)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_C21FCA5400390834_OFFSET UNITYSDK_OFFSET(0xA42D260)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_CC2A4E121333DFAD_OFFSET UNITYSDK_OFFSET(0xA42DB00)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_CC35B346CDD1F074_OFFSET UNITYSDK_OFFSET(0xA42D050)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_D576E6020CC2570D_OFFSET UNITYSDK_OFFSET(0xA42D1B0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_D95E53E2EC8FBC5A_OFFSET UNITYSDK_OFFSET(0xA42D450)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_DA3628DA1C2AAF6F_OFFSET UNITYSDK_OFFSET(0xA42B4C0)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_DCDDE0A04B709F92_1_OFFSET UNITYSDK_OFFSET(0xA42B910)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_DCDDE0A04B709F92_OFFSET UNITYSDK_OFFSET(0xA42B140)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_F33737F3560E9F2F_OFFSET UNITYSDK_OFFSET(0xA42A940)
#define CLASS_1_DF41AAA326096A0F_METHOD_1_F6D71C58F04C9938_OFFSET UNITYSDK_OFFSET(0xA4298F0)
#define CLASS_1_DF41AAA326096A0F__CCTOR_OFFSET UNITYSDK_OFFSET(0xA42E020)
#define CLASS_1_DF41AAA326096A0F__CTOR_OFFSET UNITYSDK_OFFSET(0xA4294A0)

inline static constexpr unsigned int Class_1_DF41AAA326096A0F_TypeDefinitionIndex = 64968;

class Class_1_DF41AAA326096A0F : public ::System::Object
{
public:
	static ::Class_1_DF41AAA326096A0F** StaticGet_Field_1_0()
	{
		return (::Class_1_DF41AAA326096A0F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF41AAA326096A0F_TypeDefinitionIndex)->GetStaticField(0x56DF0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF41AAA326096A0F_TypeDefinitionIndex)->GetStaticField(0x56DF8);
	}
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_1_2()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF41AAA326096A0F_TypeDefinitionIndex)->GetStaticField(0x56E00);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF41AAA326096A0F_TypeDefinitionIndex)->GetStaticField(0x56E08);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF41AAA326096A0F_TypeDefinitionIndex)->GetStaticField(0x11340);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasLookup*>* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BlockGrassData*>* Field_1_7; // 0x20
	::System::Text::StringBuilder* Field_1_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CC37BE43AC1781E1*>* Field_1_9; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_64EA8B4AB59D91C7*>* Field_1_10; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F__CCTOR_OFFSET))();
	}

	::System::String* Method_1_4223D717CBD54CE9(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_4223D717CBD54CE9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_1_CC37BE43AC1781E1* Method_1_F6D71C58F04C9938(::Class_1_CC37BE43AC1781E1* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::Class_1_CC37BE43AC1781E1*(*)(::PVOID, ::Class_1_CC37BE43AC1781E1*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_F6D71C58F04C9938_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_CC37BE43AC1781E1* Method_1_468EB3408DFE535C(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_CC37BE43AC1781E1*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_468EB3408DFE535C_OFFSET))(this, a1, a2);
	}

	::Class_1_CC37BE43AC1781E1* Method_1_82434943F29BB29D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_CC37BE43AC1781E1*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_82434943F29BB29D_OFFSET))(this, a1, a2);
	}

	::Class_1_CC37BE43AC1781E1* Method_1_3AF7EB2E67924205(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
	{
		return ((::Class_1_CC37BE43AC1781E1*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_3AF7EB2E67924205_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F33737F3560E9F2F(::System::String* a1, ::System::String* a2, ::Class_1_CC37BE43AC1781E1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Class_1_CC37BE43AC1781E1*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_F33737F3560E9F2F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DCDDE0A04B709F92(::Class_1_CC37BE43AC1781E1* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC37BE43AC1781E1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_DCDDE0A04B709F92_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCDDE0A04B709F92_1(::Class_1_CC37BE43AC1781E1* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC37BE43AC1781E1*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_DCDDE0A04B709F92_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_0531131A8615976F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_0531131A8615976F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_2F0F99A12DB93F30_1_OFFSET))(this);
	}

	::Class_1_CC37BE43AC1781E1* Method_1_503CD42A0C349327(::System::String* a1)
	{
		return ((::Class_1_CC37BE43AC1781E1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_503CD42A0C349327_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD233AACD8D53F7C(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_BD233AACD8D53F7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36AC5795892A7080(::System::String* a1, ::Class_1_CC37BE43AC1781E1* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_CC37BE43AC1781E1*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_36AC5795892A7080_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::StageCaptureAliasLookup* Method_1_D576E6020CC2570D(::System::String* a1)
	{
		return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_D576E6020CC2570D_OFFSET))(this, a1);
	}

	::RPG::GameCore::BlockGrassData* Method_1_C21FCA5400390834(::System::String* a1)
	{
		return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_C21FCA5400390834_OFFSET))(this, a1);
	}

	::RPG::GameCore::BlockGrassData* Method_1_D95E53E2EC8FBC5A(::System::String* a1)
	{
		return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_D95E53E2EC8FBC5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3559476C7C86165D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_3559476C7C86165D_OFFSET))(this, a1);
	}

	::System::Void Method_1_96E3159279ADB646(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_96E3159279ADB646_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA3628DA1C2AAF6F(::Class_1_CC37BE43AC1781E1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC37BE43AC1781E1*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_DA3628DA1C2AAF6F_OFFSET))(this, a1);
	}

	::Class_1_64EA8B4AB59D91C7* Method_1_428DB35BB57D13A0(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_64EA8B4AB59D91C7*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_428DB35BB57D13A0_OFFSET))(this, a1, a2);
	}

	::Class_1_64EA8B4AB59D91C7* Method_1_6BB902CB4887F369(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_1_64EA8B4AB59D91C7*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_6BB902CB4887F369_OFFSET))(this, a1, a2);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_CC35B346CDD1F074(::Struct_2_CC45B4503679E14E_9 a1, ::System::Boolean a2)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::Struct_2_CC45B4503679E14E_9, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_CC35B346CDD1F074_OFFSET))(this, a1, a2);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_CC2A4E121333DFAD(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_CC2A4E121333DFAD_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_7F3A7F82646DC51A(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_7F3A7F82646DC51A_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_5AA60F17D2218936(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_5AA60F17D2218936_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_CC45B4503679E14E_36 Method_1_5AA60F17D2218936_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_CC45B4503679E14E_36(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_5AA60F17D2218936_1_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_64EA8B4AB59D91C7* Method_1_4782E5DF6E0B8246(::System::String* a1)
	{
		return ((::Class_1_64EA8B4AB59D91C7*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_4782E5DF6E0B8246_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_5BF9E97C2EDD159A(::UnityEngine::GameObject* a1, ::UnityEngine::Texture2D* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_5BF9E97C2EDD159A_OFFSET))(this, a1, a2);
	}

	static ::Class_1_DF41AAA326096A0F* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_DF41AAA326096A0F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_358A144584A5DBFC_OFFSET))();
	}

	static ::System::Void Method_1_00EEAE1706DF4240(::Class_1_CC37BE43AC1781E1* a1)
	{
		return ((::System::Void(*)(::Class_1_CC37BE43AC1781E1*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_00EEAE1706DF4240_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D4BB7005ADFB924(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AutoGenCellType, ::Class_1_64EA8B4AB59D91C7_1*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AutoGenCellType, ::Class_1_64EA8B4AB59D91C7_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_2D4BB7005ADFB924_OFFSET))(a1);
	}

	static ::System::Void Method_1_2919684A67A6B409(::Class_1_64EA8B4AB59D91C7* a1)
	{
		return ((::System::Void(*)(::Class_1_64EA8B4AB59D91C7*))((::PBYTE)hIl2Cpp + CLASS_1_DF41AAA326096A0F_METHOD_1_2919684A67A6B409_OFFSET))(a1);
	}
};
