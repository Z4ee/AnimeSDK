#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_301C5A497102AC7F;
class Class_1_A139A18477C7681A;
class Class_1_B27A28B5F94F6BD2;
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

#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x17F1E910)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x17F1E5F0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_30EB7EF396DB786C_OFFSET UNITYSDK_OFFSET(0x17F1F010)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_464EB98995DEC773_OFFSET UNITYSDK_OFFSET(0x17F1F360)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x17F1EB00)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_50825B20A78C6652_OFFSET UNITYSDK_OFFSET(0x17F1EB80)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_544F3731CA7A73F4_OFFSET UNITYSDK_OFFSET(0x17F1EF10)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x17F1E890)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_6958CCECE5FCD898_OFFSET UNITYSDK_OFFSET(0x17F1ED10)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_6B9281DEA39B7A13_OFFSET UNITYSDK_OFFSET(0x17F1F560)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_731A51FA584AE116_OFFSET UNITYSDK_OFFSET(0x17F1E9C0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_73B2CD1CB340C693_OFFSET UNITYSDK_OFFSET(0x17F1EC80)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_979C84004C8AA171_OFFSET UNITYSDK_OFFSET(0x17F1EDC0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_9B39F7D7C1FF70D6_1_OFFSET UNITYSDK_OFFSET(0x17F1F070)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x17F1EA40)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_A1BB40FB79F7955B_OFFSET UNITYSDK_OFFSET(0x17F1F1E0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x17F1E830)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_ADA8CAF07A647613_OFFSET UNITYSDK_OFFSET(0x17F1F670)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_ADDB0DCB0860F460_OFFSET UNITYSDK_OFFSET(0x17F1EBE0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_B168DD36E5A49BB4_OFFSET UNITYSDK_OFFSET(0x17F1F160)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_B49B038EE91C8B86_OFFSET UNITYSDK_OFFSET(0x17F1E550)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x17F1E2B0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_CF86D0D52EDC84F6_OFFSET UNITYSDK_OFFSET(0x17F1EF50)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_D78B51BFDA4B8B32_1_OFFSET UNITYSDK_OFFSET(0x17F1E470)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x17F1E4D0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_E3A0178A2D58C5C0_OFFSET UNITYSDK_OFFSET(0x17F1EAA0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_E9752FE59B9E68D2_OFFSET UNITYSDK_OFFSET(0x17F1F6D0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_EB1E013D1D2E63A4_OFFSET UNITYSDK_OFFSET(0x17F1E3E0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_F853EB9C3EB183DF_OFFSET UNITYSDK_OFFSET(0x17F1F0D0)
#define CLASS_1_0AC901BFE4E36FC0_METHOD_1_FB3470951DC93FD4_OFFSET UNITYSDK_OFFSET(0x17F1F4E0)
#define CLASS_1_0AC901BFE4E36FC0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F1E360)

inline static constexpr unsigned int Class_1_0AC901BFE4E36FC0_TypeDefinitionIndex = 71189;

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

	::System::Void Method_1_EB1E013D1D2E63A4(::Proto::SceneMapInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0AC901BFE4E36FC0_METHOD_1_EB1E013D1D2E63A4_OFFSET))(this, a1);
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
