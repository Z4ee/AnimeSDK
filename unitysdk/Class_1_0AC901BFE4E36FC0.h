#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_301C5A497102AC7F;
class Class_1_8332CF178AAAF4CC;
class Class_1_A139A18477C7681A;
class Class_1_B27A28B5F94F6BD2;
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
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

#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x156D0720)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x156D03F0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_30EB7EF396DB786C_OFFSET UNITYSDK_OFFSET(0x156D0E20)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_464EB98995DEC773_OFFSET UNITYSDK_OFFSET(0x156D1170)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x156D0910)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_50825B20A78C6652_OFFSET UNITYSDK_OFFSET(0x156D0990)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_544F3731CA7A73F4_OFFSET UNITYSDK_OFFSET(0x156D0D20)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x156D0690)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_6958CCECE5FCD898_OFFSET UNITYSDK_OFFSET(0x156D0B20)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_6B9281DEA39B7A13_OFFSET UNITYSDK_OFFSET(0x156D1370)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_731A51FA584AE116_OFFSET UNITYSDK_OFFSET(0x156D07D0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_73B2CD1CB340C693_OFFSET UNITYSDK_OFFSET(0x156D0A90)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_952453844D88CADD_OFFSET UNITYSDK_OFFSET(0x156D01E0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_979C84004C8AA171_OFFSET UNITYSDK_OFFSET(0x156D0BD0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_9B39F7D7C1FF70D6_1_OFFSET UNITYSDK_OFFSET(0x156D0E80)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x156D0850)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_A1BB40FB79F7955B_OFFSET UNITYSDK_OFFSET(0x156D0FF0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x156D0630)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_ADA8CAF07A647613_OFFSET UNITYSDK_OFFSET(0x156D1480)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_ADDB0DCB0860F460_OFFSET UNITYSDK_OFFSET(0x156D09F0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_B168DD36E5A49BB4_OFFSET UNITYSDK_OFFSET(0x156D0F60)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_B49B038EE91C8B86_OFFSET UNITYSDK_OFFSET(0x156D0350)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x156D00B0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_CF86D0D52EDC84F6_OFFSET UNITYSDK_OFFSET(0x156D0D60)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_D78B51BFDA4B8B32_1_OFFSET UNITYSDK_OFFSET(0x156D0270)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x156D02D0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_E3A0178A2D58C5C0_OFFSET UNITYSDK_OFFSET(0x156D08B0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_E9752FE59B9E68D2_OFFSET UNITYSDK_OFFSET(0x156D14E0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_F853EB9C3EB183DF_OFFSET UNITYSDK_OFFSET(0x156D0EE0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_FB3470951DC93FD4_OFFSET UNITYSDK_OFFSET(0x156D12F0)
#define CLASS_1_0AC901BFE4E36FC0__CTOR_OFFSET UNITYSDK_OFFSET(0x156D0160)

inline static constexpr unsigned int Class_1_0AC901BFE4E36FC0_TypeDefinitionIndex = 74615;

class Class_1_0AC901BFE4E36FC0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* AFMLPKBINBC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0__CTOR_OFFSET))(this);
	}

	static ::Class_1_0AC901BFE4E36FC0* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_0AC901BFE4E36FC0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::System::Void Method_1_952453844D88CADD(::Class_1_8332CF178AAAF4CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8332CF178AAAF4CC*))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_952453844D88CADD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_1_D78B51BFDA4B8B32_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_D78B51BFDA4B8B32_1_OFFSET))(this);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::RPG::GameCore::LevelNavmapConfig* Method_1_731A51FA584AE116()
	{
		return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_731A51FA584AE116_OFFSET))(this);
	}

	::Class_1_A139A18477C7681A* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_A139A18477C7681A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E3A0178A2D58C5C0()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_E3A0178A2D58C5C0_OFFSET))(this);
	}

	::Class_1_B27A28B5F94F6BD2* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_B27A28B5F94F6BD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::RPG::Client::MapAnchorDef* Method_1_50825B20A78C6652()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_50825B20A78C6652_OFFSET))(this);
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

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Method_1_544F3731CA7A73F4()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_544F3731CA7A73F4_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_1_CF86D0D52EDC84F6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_CF86D0D52EDC84F6_OFFSET))(this, a1);
	}

	::RPG::Client::FloorSavedData* Method_1_30EB7EF396DB786C()
	{
		return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_30EB7EF396DB786C_OFFSET))(this);
	}

	::Class_1_301C5A497102AC7F* Method_1_9B39F7D7C1FF70D6_1()
	{
		return ((::Class_1_301C5A497102AC7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_9B39F7D7C1FF70D6_1_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* Method_1_F853EB9C3EB183DF()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_F853EB9C3EB183DF_OFFSET))(this);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_B168DD36E5A49BB4()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_B168DD36E5A49BB4_OFFSET))(this);
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

	::RPG::Client::MapRotationInfo* Method_1_ADA8CAF07A647613()
	{
		return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_ADA8CAF07A647613_OFFSET))(this);
	}

	::RPG::GameCore::EraFlipperConfig* Method_1_E9752FE59B9E68D2()
	{
		return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_E9752FE59B9E68D2_OFFSET))(this);
	}

	::RPG::Client::MapDef* Method_1_B49B038EE91C8B86()
	{
		return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_B49B038EE91C8B86_OFFSET))(this);
	}
};
