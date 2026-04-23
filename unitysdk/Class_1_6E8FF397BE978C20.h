#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace RPG::GameCore { class BlockConfig; }
namespace RPG::GameCore { class BlockGrassData; }
namespace RPG::GameCore { class ChapterPolymerFile; }
namespace RPG::GameCore { class PolymerObj; }
namespace RPG::GameCore { class PolymerObjData; }
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

#define CLASS_1_6E8FF397BE978C20_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11938960)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_00091EC10DF152A5_OFFSET UNITYSDK_OFFSET(0x11938690)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_03A08143D373D67E_OFFSET UNITYSDK_OFFSET(0x119382F0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_18809DCBAB49F8BE_OFFSET UNITYSDK_OFFSET(0x119366E0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x11936020)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_3661F5657C80D3F1_OFFSET UNITYSDK_OFFSET(0x119377C0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_4223D717CBD54CE9_OFFSET UNITYSDK_OFFSET(0x11935CD0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_441BF6248A8E3F4F_OFFSET UNITYSDK_OFFSET(0x11936680)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x11937200)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_54264078ABF105CA_OFFSET UNITYSDK_OFFSET(0x11936110)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_55EA6F0058EF155A_OFFSET UNITYSDK_OFFSET(0x119380D0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_5BF9E97C2EDD159A_OFFSET UNITYSDK_OFFSET(0x119389B0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_5D0F2D91A43404B3_OFFSET UNITYSDK_OFFSET(0x119361D0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_5FF0283001CEBC7D_OFFSET UNITYSDK_OFFSET(0x119362C0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_6D4C28020D69F1B5_OFFSET UNITYSDK_OFFSET(0x11937EB0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BB0E5414D214D27E_1_OFFSET UNITYSDK_OFFSET(0x11937BA0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BB0E5414D214D27E_OFFSET UNITYSDK_OFFSET(0x11937890)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BBA3B64E3285E814_1_OFFSET UNITYSDK_OFFSET(0x119388C0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BBA3B64E3285E814_OFFSET UNITYSDK_OFFSET(0x11938860)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_BBB133A47D2C4467_OFFSET UNITYSDK_OFFSET(0x11938780)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_C69206653C0C95A7_1_OFFSET UNITYSDK_OFFSET(0x11937270)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_C69206653C0C95A7_OFFSET UNITYSDK_OFFSET(0x11936F90)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_D576E6020CC2570D_OFFSET UNITYSDK_OFFSET(0x11938230)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_D8DAF819EC405355_OFFSET UNITYSDK_OFFSET(0x11936850)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_D95E53E2EC8FBC5A_OFFSET UNITYSDK_OFFSET(0x11938480)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x119374D0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_E529E1251D14168A_OFFSET UNITYSDK_OFFSET(0x11935E80)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_F2C8A5E88BF9001D_OFFSET UNITYSDK_OFFSET(0x119384D0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_F4CEA77464863D88_OFFSET UNITYSDK_OFFSET(0x11936BD0)
#define CLASS_1_6E8FF397BE978C20_METHOD_1_FBFE262DB5791EDF_OFFSET UNITYSDK_OFFSET(0x11938920)
#define CLASS_1_6E8FF397BE978C20__CCTOR_OFFSET UNITYSDK_OFFSET(0x11938B70)
#define CLASS_1_6E8FF397BE978C20__CTOR_OFFSET UNITYSDK_OFFSET(0x11935A00)

inline static constexpr unsigned int Class_1_6E8FF397BE978C20_TypeDefinitionIndex = 64047;

class Class_1_6E8FF397BE978C20 : public ::System::Object
{
public:
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_1_10()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0x273B0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0x273B8);
	}
	static ::Class_1_6E8FF397BE978C20** StaticGet_Field_1_8()
	{
		return (::Class_1_6E8FF397BE978C20**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0x273C0);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_Field_1_11()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0x273C8);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E8FF397BE978C20_TypeDefinitionIndex)->GetStaticField(0xA610);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BlockGrassData*>* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::StageCaptureAliasLookup*>* Field_1_4; // 0x18
	::RPG::Client::LRUCache_2<::System::String*, ::RPG::GameCore::ChapterPolymerFile*>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChapterPolymerFile*>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_1_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BlockConfig*>* Field_1_2; // 0x38
	::System::Text::StringBuilder* Field_1_1; // 0x40

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

	::RPG::GameCore::BlockConfig* Method_1_D8DAF819EC405355(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::StageBaseConfig* a4, ::System::Boolean a5)
	{
		return ((::RPG::GameCore::BlockConfig*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::StageBaseConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_D8DAF819EC405355_OFFSET))(this, a1, a2, a3, a4, a5);
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

	::System::Void Method_1_5FF0283001CEBC7D(::System::String* a1, ::RPG::GameCore::BlockConfig* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::BlockConfig*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_5FF0283001CEBC7D_OFFSET))(this, a1, a2, a3, a4);
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

	::RPG::GameCore::ChapterPolymerFile* Method_1_6D4C28020D69F1B5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::ChapterPolymerFile*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E8FF397BE978C20_METHOD_1_6D4C28020D69F1B5_OFFSET))(this, a1, a2);
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
