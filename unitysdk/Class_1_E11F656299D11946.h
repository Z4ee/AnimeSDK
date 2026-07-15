#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_301C5A497102AC7F;
class Class_1_70D5AA87C5BBA20B_8;
class Class_1_A139A18477C7681A;
class Class_1_B27A28B5F94F6BD2;
class Class_1_C4D1F4932C690DC4;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class MapInfoGroup; }
namespace Proto { class SceneMapInfo; }
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDataKey; }
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
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E11F656299D11946_GET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0x169DDEF0)
#define CLASS_1_E11F656299D11946_METHOD_1_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x169DDF60)
#define CLASS_1_E11F656299D11946_METHOD_1_09D0C7790311215D_OFFSET UNITYSDK_OFFSET(0x169DEB20)
#define CLASS_1_E11F656299D11946_METHOD_1_18585D0D72396675_OFFSET UNITYSDK_OFFSET(0x169DE000)
#define CLASS_1_E11F656299D11946_METHOD_1_1DF613D9BA8D0B3F_OFFSET UNITYSDK_OFFSET(0x169DE9E0)
#define CLASS_1_E11F656299D11946_METHOD_1_1EBE673CC8F565B9_OFFSET UNITYSDK_OFFSET(0x169DC120)
#define CLASS_1_E11F656299D11946_METHOD_1_22D03B7BA8782B9D_OFFSET UNITYSDK_OFFSET(0x169DC1E0)
#define CLASS_1_E11F656299D11946_METHOD_1_30EB7EF396DB786C_OFFSET UNITYSDK_OFFSET(0x169DEF40)
#define CLASS_1_E11F656299D11946_METHOD_1_4CC6B4BF5C83CC88_OFFSET UNITYSDK_OFFSET(0x169DC2F0)
#define CLASS_1_E11F656299D11946_METHOD_1_653B70F5556EDB95_OFFSET UNITYSDK_OFFSET(0x169DCE50)
#define CLASS_1_E11F656299D11946_METHOD_1_70FA16CA97D866FF_OFFSET UNITYSDK_OFFSET(0x169DC920)
#define CLASS_1_E11F656299D11946_METHOD_1_73B2CD1CB340C693_OFFSET UNITYSDK_OFFSET(0x169DE950)
#define CLASS_1_E11F656299D11946_METHOD_1_746FD999C5EC3962_OFFSET UNITYSDK_OFFSET(0x169DECF0)
#define CLASS_1_E11F656299D11946_METHOD_1_769ABDEEDFF54DB7_OFFSET UNITYSDK_OFFSET(0x169DEE90)
#define CLASS_1_E11F656299D11946_METHOD_1_885541D093E72921_OFFSET UNITYSDK_OFFSET(0x169DD370)
#define CLASS_1_E11F656299D11946_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x169DDF10)
#define CLASS_1_E11F656299D11946_METHOD_1_9810652F5AD3432F_OFFSET UNITYSDK_OFFSET(0x169DBD60)
#define CLASS_1_E11F656299D11946_METHOD_1_9B39F7D7C1FF70D6_1_OFFSET UNITYSDK_OFFSET(0x169DE0E0)
#define CLASS_1_E11F656299D11946_METHOD_1_9B39F7D7C1FF70D6_2_OFFSET UNITYSDK_OFFSET(0x169DE180)
#define CLASS_1_E11F656299D11946_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x169DC0D0)
#define CLASS_1_E11F656299D11946_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x169DE090)
#define CLASS_1_E11F656299D11946_METHOD_1_ADA8CAF07A647613_OFFSET UNITYSDK_OFFSET(0x169DED60)
#define CLASS_1_E11F656299D11946_METHOD_1_B168DD36E5A49BB4_OFFSET UNITYSDK_OFFSET(0x169DEF90)
#define CLASS_1_E11F656299D11946_METHOD_1_B6BC1AB86061A135_OFFSET UNITYSDK_OFFSET(0x169DE050)
#define CLASS_1_E11F656299D11946_METHOD_1_D34FA5A630FB81C8_OFFSET UNITYSDK_OFFSET(0x169DC970)
#define CLASS_1_E11F656299D11946_METHOD_1_D4F9D87869897E99_OFFSET UNITYSDK_OFFSET(0x169DC250)
#define CLASS_1_E11F656299D11946_METHOD_1_DAB25BA254F794BD_OFFSET UNITYSDK_OFFSET(0x169DE240)
#define CLASS_1_E11F656299D11946_METHOD_1_E3A0178A2D58C5C0_OFFSET UNITYSDK_OFFSET(0x169DE130)
#define CLASS_1_E11F656299D11946_METHOD_1_E9752FE59B9E68D2_OFFSET UNITYSDK_OFFSET(0x169DEDC0)
#define CLASS_1_E11F656299D11946_METHOD_1_EDD14B3A89709EBB_OFFSET UNITYSDK_OFFSET(0x169DCA00)
#define CLASS_1_E11F656299D11946_METHOD_1_F853EB9C3EB183DF_OFFSET UNITYSDK_OFFSET(0x169DEE10)
#define CLASS_1_E11F656299D11946_METHOD_1_FB1DBEE2CC3A1660_OFFSET UNITYSDK_OFFSET(0x169DE1D0)
#define CLASS_1_E11F656299D11946_SET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0x169DDF00)
#define CLASS_1_E11F656299D11946__CTOR_OFFSET UNITYSDK_OFFSET(0x169DBFD0)

inline static constexpr unsigned int Class_1_E11F656299D11946_TypeDefinitionIndex = 71187;

class Class_1_E11F656299D11946 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::Class_1_C4D1F4932C690DC4* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*>* Field_1_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_4; // 0x30
	::System::Boolean _SyncedWithServer_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946__CTOR_OFFSET))(this);
	}

	static ::Class_1_E11F656299D11946* Method_1_9810652F5AD3432F(::RPG::Client::MapDataKey* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_E11F656299D11946*(*)(::RPG::Client::MapDataKey*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_9810652F5AD3432F_OFFSET))(a1, a2);
	}

	::Class_1_301C5A497102AC7F* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_301C5A497102AC7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Boolean Method_1_1EBE673CC8F565B9(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_1EBE673CC8F565B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_22D03B7BA8782B9D(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_22D03B7BA8782B9D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D4F9D87869897E99(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_D4F9D87869897E99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4CC6B4BF5C83CC88(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_4CC6B4BF5C83CC88_OFFSET))(this, a1);
	}

	::System::Void Method_1_D34FA5A630FB81C8(::Proto::SceneMapInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_D34FA5A630FB81C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_653B70F5556EDB95(::System::Collections::Generic::IEnumerable_1<::Class_1_70D5AA87C5BBA20B_8*>* a1, ::Class_1_C4D1F4932C690DC4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_70D5AA87C5BBA20B_8*>*, ::Class_1_C4D1F4932C690DC4*))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_653B70F5556EDB95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_885541D093E72921(::System::Collections::Generic::IEnumerable_1<::Proto::MapInfoGroup*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Proto::MapInfoGroup*>*))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_885541D093E72921_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDD14B3A89709EBB(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_EDD14B3A89709EBB_OFFSET))(this, a1);
	}

	::System::Boolean get_SyncedWithServer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_GET_SYNCEDWITHSERVER_OFFSET))(this);
	}

	::System::Void set_SyncedWithServer(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_SET_SYNCEDWITHSERVER_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Int32 Method_1_09B8F368BEF6ADA5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_09B8F368BEF6ADA5_OFFSET))(this);
	}

	::RPG::Client::MapAnchorDef* Method_1_18585D0D72396675()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_18585D0D72396675_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_B6BC1AB86061A135()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_B6BC1AB86061A135_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::RPG::GameCore::LevelNavmapConfig* Method_1_70FA16CA97D866FF()
	{
		return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_70FA16CA97D866FF_OFFSET))(this);
	}

	::Class_1_A139A18477C7681A* Method_1_9B39F7D7C1FF70D6_1()
	{
		return ((::Class_1_A139A18477C7681A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_9B39F7D7C1FF70D6_1_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E3A0178A2D58C5C0()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_E3A0178A2D58C5C0_OFFSET))(this);
	}

	::Class_1_B27A28B5F94F6BD2* Method_1_9B39F7D7C1FF70D6_2()
	{
		return ((::Class_1_B27A28B5F94F6BD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_9B39F7D7C1FF70D6_2_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>* Method_1_FB1DBEE2CC3A1660()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_FB1DBEE2CC3A1660_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* Method_1_DAB25BA254F794BD(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_DAB25BA254F794BD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* Method_1_73B2CD1CB340C693()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_73B2CD1CB340C693_OFFSET))(this);
	}

	::System::Boolean Method_1_1DF613D9BA8D0B3F(::System::UInt32 a1, ::System::String* a2, ::System::Int16& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_1DF613D9BA8D0B3F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_09D0C7790311215D(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MapEntityDef*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapEntityDef*&))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_09D0C7790311215D_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Method_1_746FD999C5EC3962()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_746FD999C5EC3962_OFFSET))(this);
	}

	::RPG::Client::MapRotationInfo* Method_1_ADA8CAF07A647613()
	{
		return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_ADA8CAF07A647613_OFFSET))(this);
	}

	::RPG::GameCore::EraFlipperConfig* Method_1_E9752FE59B9E68D2()
	{
		return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_E9752FE59B9E68D2_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* Method_1_F853EB9C3EB183DF()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_F853EB9C3EB183DF_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_1_769ABDEEDFF54DB7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_769ABDEEDFF54DB7_OFFSET))(this, a1);
	}

	::RPG::Client::FloorSavedData* Method_1_30EB7EF396DB786C()
	{
		return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_30EB7EF396DB786C_OFFSET))(this);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_B168DD36E5A49BB4()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E11F656299D11946_METHOD_1_B168DD36E5A49BB4_OFFSET))(this);
	}
};
