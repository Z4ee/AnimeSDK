#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace RPG::GameCore { class BlockConfig; }
namespace RPG::GameCore { class BlockGrassData; }
namespace RPG::GameCore { class ChapterPolymerFile; }
namespace RPG::GameCore { class PolymerObj; }
namespace RPG::GameCore { class PolymerObjData; }
namespace RPG::GameCore { class StageCaptureAliasLookup; }
namespace RPG::GameCore { class StageConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_6E8FF397BE978C20_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89AC090)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_00091EC10DF152A5_OFFSET UNITYSDK_OFFSET(0x89ABDC0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_03A08143D373D67E_OFFSET UNITYSDK_OFFSET(0x89ABA20)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_18809DCBAB49F8BE_OFFSET UNITYSDK_OFFSET(0x89A9DD0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x89A9740)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_3661F5657C80D3F1_OFFSET UNITYSDK_OFFSET(0x89AAEC0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_4223D717CBD54CE9_OFFSET UNITYSDK_OFFSET(0x89A9440)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_441BF6248A8E3F4F_OFFSET UNITYSDK_OFFSET(0x89A9D70)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x89AA8F0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_54264078ABF105CA_OFFSET UNITYSDK_OFFSET(0x89A9830)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_55EA6F0058EF155A_OFFSET UNITYSDK_OFFSET(0x89AB800)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_5A5E342816DF1DED_OFFSET UNITYSDK_OFFSET(0x89A99E0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_5BF9E97C2EDD159A_OFFSET UNITYSDK_OFFSET(0x89AC0E0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_5D0F2D91A43404B3_OFFSET UNITYSDK_OFFSET(0x89A98F0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_7DB07B645F6DB7C6_OFFSET UNITYSDK_OFFSET(0x89A9F40)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BB0E5414D214D27E_1_OFFSET UNITYSDK_OFFSET(0x89AB2A0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BB0E5414D214D27E_OFFSET UNITYSDK_OFFSET(0x89AAF90)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BBA3B64E3285E814_1_OFFSET UNITYSDK_OFFSET(0x89ABFF0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BBA3B64E3285E814_OFFSET UNITYSDK_OFFSET(0x89ABF90)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BBB133A47D2C4467_OFFSET UNITYSDK_OFFSET(0x89ABEB0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_C69206653C0C95A7_1_OFFSET UNITYSDK_OFFSET(0x89AA960)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_C69206653C0C95A7_OFFSET UNITYSDK_OFFSET(0x89AA680)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_D576E6020CC2570D_OFFSET UNITYSDK_OFFSET(0x89AB960)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_D95E53E2EC8FBC5A_OFFSET UNITYSDK_OFFSET(0x89ABBB0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x89AABC0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_E529E1251D14168A_OFFSET UNITYSDK_OFFSET(0x89A95A0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_F2C8A5E88BF9001D_OFFSET UNITYSDK_OFFSET(0x89ABC00)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_F4CEA77464863D88_OFFSET UNITYSDK_OFFSET(0x89AA2C0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_FBFE262DB5791EDF_OFFSET UNITYSDK_OFFSET(0x89AC050)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_FE5EFB1C64473306_OFFSET UNITYSDK_OFFSET(0x89AB5B0)
#define CLASS_1_6E8FF397BE978C20__CCTOR_OFFSET UNITYSDK_OFFSET(0x89AC2A0)
#define CLASS_1_6E8FF397BE978C20__CTOR_OFFSET UNITYSDK_OFFSET(0x89A9170)

inline static constexpr unsigned int Class_1_6E8FF397BE978C20_TypeDefinitionIndex = 56801;

class Class_1_6E8FF397BE978C20 : public ::System::Object
{
public:
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_1_10()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0x44260);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0x44268);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0x44270);
	}
	static ::Class_1_6E8FF397BE978C20** StaticGet_Field_1_8()
	{
		return (::Class_1_6E8FF397BE978C20**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0x44278);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0x11880);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChapterPolymerFile*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BlockGrassData*>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasLookup*>* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BlockConfig*>* Field_1_2; // 0x30
	::System::Text::StringBuilder* Field_1_1; // 0x38
	::RPG::Client::LRUCache_2<::System::String*, ::RPG::GameCore::ChapterPolymerFile*>* Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20__CCTOR_OFFSET))();
	}

	::System::String* Method_1_4223D717CBD54CE9(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_4223D717CBD54CE9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::BlockConfig* Method_1_E529E1251D14168A(::RPG::GameCore::BlockConfig* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::RPG::GameCore::BlockConfig*(*)(::PVOID, ::RPG::GameCore::BlockConfig*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_E529E1251D14168A_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::BlockConfig* Method_1_441BF6248A8E3F4F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::BlockConfig*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_441BF6248A8E3F4F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::BlockConfig* Method_1_18809DCBAB49F8BE(::System::String* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::BlockConfig*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_18809DCBAB49F8BE_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::BlockConfig* Method_1_7DB07B645F6DB7C6(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::StageConfig* a4, ::System::Boolean a5)
	{
		return ((::RPG::GameCore::BlockConfig*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StageConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_7DB07B645F6DB7C6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F4CEA77464863D88(::System::String* a1, ::System::String* a2, ::RPG::GameCore::BlockConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::GameCore::BlockConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_F4CEA77464863D88_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C69206653C0C95A7(::RPG::GameCore::BlockConfig* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_C69206653C0C95A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C69206653C0C95A7_1(::RPG::GameCore::BlockConfig* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_C69206653C0C95A7_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_1_3661F5657C80D3F1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_3661F5657C80D3F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB0E5414D214D27E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_BB0E5414D214D27E_OFFSET))(this);
	}

	::System::Void Method_1_BB0E5414D214D27E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_BB0E5414D214D27E_1_OFFSET))(this);
	}

	::RPG::GameCore::BlockConfig* Method_1_54264078ABF105CA(::System::String* a1)
	{
		return ((::RPG::GameCore::BlockConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_54264078ABF105CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D0F2D91A43404B3(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_5D0F2D91A43404B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A5E342816DF1DED(::System::String* a1, ::RPG::GameCore::BlockConfig* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::BlockConfig*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_5A5E342816DF1DED_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::StageCaptureAliasLookup* Method_1_D576E6020CC2570D(::System::String* a1)
	{
		return ((::RPG::GameCore::StageCaptureAliasLookup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_D576E6020CC2570D_OFFSET))(this, a1);
	}

	::RPG::GameCore::BlockGrassData* Method_1_03A08143D373D67E(::System::String* a1)
	{
		return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_03A08143D373D67E_OFFSET))(this, a1);
	}

	::RPG::GameCore::BlockGrassData* Method_1_D95E53E2EC8FBC5A(::System::String* a1)
	{
		return ((::RPG::GameCore::BlockGrassData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_D95E53E2EC8FBC5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChapterPolymerFile* Method_1_FE5EFB1C64473306(::System::String* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::ChapterPolymerFile*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_FE5EFB1C64473306_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ChapterPolymerFile* Method_1_F2C8A5E88BF9001D(::System::String* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::ChapterPolymerFile*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_F2C8A5E88BF9001D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PolymerObj* Method_1_55EA6F0058EF155A(::RPG::GameCore::PolymerObjData* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::PolymerObj*(*)(::PVOID, ::RPG::GameCore::PolymerObjData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_55EA6F0058EF155A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PolymerObj* Method_1_BBB133A47D2C4467(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::RPG::GameCore::PolymerObj*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_BBB133A47D2C4467_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::PolymerObj* Method_1_00091EC10DF152A5(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::RPG::GameCore::PolymerObj*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_00091EC10DF152A5_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::PolymerObj* Method_1_BBA3B64E3285E814(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::RPG::GameCore::PolymerObj*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_BBA3B64E3285E814_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::PolymerObj* Method_1_BBA3B64E3285E814_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::RPG::GameCore::PolymerObj*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_BBA3B64E3285E814_1_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::ChapterPolymerFile* Method_1_FBFE262DB5791EDF(::System::String* a1)
	{
		return ((::RPG::GameCore::ChapterPolymerFile*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_FBFE262DB5791EDF_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_5BF9E97C2EDD159A(::UnityEngine::GameObject* a1, ::UnityEngine::Texture2D* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_5BF9E97C2EDD159A_OFFSET))(this, a1, a2);
	}

	static ::Class_1_6E8FF397BE978C20* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_6E8FF397BE978C20*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_358A144584A5DBFC_OFFSET))();
	}
};
