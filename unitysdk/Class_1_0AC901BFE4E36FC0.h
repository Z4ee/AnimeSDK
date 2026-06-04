#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_6D7D407F4E59D5BB;
class Class_1_C06752CD2A701BDD;
namespace Proto { class SceneMapInfo; }
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelFloorBakedInfo; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_0A594256478E62C1_OFFSET UNITYSDK_OFFSET(0x136597F0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x13658A50)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_1F7E9FE432361E7C_OFFSET UNITYSDK_OFFSET(0x13658970)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x136588F0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x13658CA0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_464EB98995DEC773_OFFSET UNITYSDK_OFFSET(0x136594E0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_46A9BB07BDC4F2DD_OFFSET UNITYSDK_OFFSET(0x13658D20)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x136592E0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_5F92F94B373BFDF0_OFFSET UNITYSDK_OFFSET(0x136591F0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_6958CCECE5FCD898_OFFSET UNITYSDK_OFFSET(0x13658FF0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_6B9281DEA39B7A13_OFFSET UNITYSDK_OFFSET(0x136596E0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_73B2CD1CB340C693_OFFSET UNITYSDK_OFFSET(0x13658F60)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x13658890)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_8B7158FF770D4D0D_OFFSET UNITYSDK_OFFSET(0x13658E00)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_979C84004C8AA171_OFFSET UNITYSDK_OFFSET(0x136590A0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x13658D40)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_A1BB40FB79F7955B_OFFSET UNITYSDK_OFFSET(0x13659360)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_A2FC7F4229E6CE1E_OFFSET UNITYSDK_OFFSET(0x136592C0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_ACE2AEC7521680A8_OFFSET UNITYSDK_OFFSET(0x13659810)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_ADDB0DCB0860F460_OFFSET UNITYSDK_OFFSET(0x13658EC0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_B037C392B38A504B_OFFSET UNITYSDK_OFFSET(0x13659330)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_C62A27D92A3AC9E8_OFFSET UNITYSDK_OFFSET(0x13659300)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x136586D0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_CA909ED5216038D6_OFFSET UNITYSDK_OFFSET(0x13658800)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_CF86D0D52EDC84F6_OFFSET UNITYSDK_OFFSET(0x13659200)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x13658C50)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_E2597DF091B821D5_OFFSET UNITYSDK_OFFSET(0x13658E60)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_E3A0178A2D58C5C0_OFFSET UNITYSDK_OFFSET(0x13658DA0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x13658C70)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_FB3470951DC93FD4_OFFSET UNITYSDK_OFFSET(0x13659660)
#define CLASS_1_0AC901BFE4E36FC0__CTOR_OFFSET UNITYSDK_OFFSET(0x13658780)

inline static constexpr unsigned int Class_1_0AC901BFE4E36FC0_TypeDefinitionIndex = 69666;

class Class_1_0AC901BFE4E36FC0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__CTOR_OFFSET))(this);
	}

	static ::Class_1_0AC901BFE4E36FC0* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_0AC901BFE4E36FC0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::System::Void Method_1_CA909ED5216038D6(::Proto::SceneMapInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_CA909ED5216038D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_8594010D6A57C9BB_OFFSET))(this);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_F24A112B56A2E4B4_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::RPG::GameCore::LevelNavmapConfig* Method_1_46A9BB07BDC4F2DD()
	{
		return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_46A9BB07BDC4F2DD_OFFSET))(this);
	}

	::Class_1_6D7D407F4E59D5BB* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_6D7D407F4E59D5BB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E3A0178A2D58C5C0()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_E3A0178A2D58C5C0_OFFSET))(this);
	}

	::RPG::GameCore::LevelFloorBakedInfo* Method_1_8B7158FF770D4D0D()
	{
		return ((::RPG::GameCore::LevelFloorBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_8B7158FF770D4D0D_OFFSET))(this);
	}

	::RPG::Client::MapAnchorDef* Method_1_E2597DF091B821D5()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_E2597DF091B821D5_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_ADDB0DCB0860F460()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_ADDB0DCB0860F460_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* Method_1_73B2CD1CB340C693()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_73B2CD1CB340C693_OFFSET))(this);
	}

	::System::Boolean Method_1_6958CCECE5FCD898(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MapEntityDef*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapEntityDef*&))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_6958CCECE5FCD898_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* Method_1_979C84004C8AA171(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_979C84004C8AA171_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Method_1_5F92F94B373BFDF0()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_5F92F94B373BFDF0_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_1_CF86D0D52EDC84F6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_CF86D0D52EDC84F6_OFFSET))(this, a1);
	}

	::RPG::Client::FloorSavedData* Method_1_A2FC7F4229E6CE1E()
	{
		return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_A2FC7F4229E6CE1E_OFFSET))(this);
	}

	::Class_1_C06752CD2A701BDD* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_C06752CD2A701BDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* Method_1_C62A27D92A3AC9E8()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_C62A27D92A3AC9E8_OFFSET))(this);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_B037C392B38A504B()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_B037C392B38A504B_OFFSET))(this);
	}

	::System::Boolean Method_1_A1BB40FB79F7955B(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_A1BB40FB79F7955B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_464EB98995DEC773(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_464EB98995DEC773_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FB3470951DC93FD4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_FB3470951DC93FD4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6B9281DEA39B7A13(::System::UInt32 a1, ::System::String* a2, ::System::Int16& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_6B9281DEA39B7A13_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MapRotationInfo* Method_1_0A594256478E62C1()
	{
		return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_0A594256478E62C1_OFFSET))(this);
	}

	::RPG::GameCore::EraFlipperConfig* Method_1_ACE2AEC7521680A8()
	{
		return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_ACE2AEC7521680A8_OFFSET))(this);
	}

	::RPG::Client::MapDef* Method_1_1F7E9FE432361E7C()
	{
		return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_1F7E9FE432361E7C_OFFSET))(this);
	}
};
