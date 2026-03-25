#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_2EAB25208BF9561B;
class Class_1_A00F4C3E38481F7F;
class Class_1_C06752CD2A701BDD;
class Class_1_D7B17FB02EF70CD8_9;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class MapInfoGroup; }
namespace Proto { class SceneMapInfo; }
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
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
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4478EE98985A9F83_GET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0x105A1870)
#define CLASS_1_4478EE98985A9F83_METHOD_1_0A594256478E62C1_OFFSET UNITYSDK_OFFSET(0x105A2280)
#define CLASS_1_4478EE98985A9F83_METHOD_1_114781D79D91EA39_OFFSET UNITYSDK_OFFSET(0x105A1970)
#define CLASS_1_4478EE98985A9F83_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x105A1890)
#define CLASS_1_4478EE98985A9F83_METHOD_1_1E1BCD126F6598AB_OFFSET UNITYSDK_OFFSET(0x105A2230)
#define CLASS_1_4478EE98985A9F83_METHOD_1_24490E525F44F629_OFFSET UNITYSDK_OFFSET(0x105A1A60)
#define CLASS_1_4478EE98985A9F83_METHOD_1_276B9670A1423129_OFFSET UNITYSDK_OFFSET(0x105A05C0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_2A37DA3A5D53C4DC_OFFSET UNITYSDK_OFFSET(0x105A1F20)
#define CLASS_1_4478EE98985A9F83_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x105A18B0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_3F7A6F12EE81A42E_OFFSET UNITYSDK_OFFSET(0x105A0420)
#define CLASS_1_4478EE98985A9F83_METHOD_1_3FFD29CFFF37C89C_OFFSET UNITYSDK_OFFSET(0x105A22C0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_4121FA4FAF54FA2F_OFFSET UNITYSDK_OFFSET(0x105A2110)
#define CLASS_1_4478EE98985A9F83_METHOD_1_46A9BB07BDC4F2DD_OFFSET UNITYSDK_OFFSET(0x105A0A10)
#define CLASS_1_4478EE98985A9F83_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x105A0400)
#define CLASS_1_4478EE98985A9F83_METHOD_1_52A1447ADFC62FA3_OFFSET UNITYSDK_OFFSET(0x105A1920)
#define CLASS_1_4478EE98985A9F83_METHOD_1_6BFD1AD809E415D7_OFFSET UNITYSDK_OFFSET(0x105A23A0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_7BF48332818BDA36_OFFSET UNITYSDK_OFFSET(0x105A1130)
#define CLASS_1_4478EE98985A9F83_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x105A19A0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_A2FC7F4229E6CE1E_OFFSET UNITYSDK_OFFSET(0x105A2380)
#define CLASS_1_4478EE98985A9F83_METHOD_1_AB3E43D50551A16F_OFFSET UNITYSDK_OFFSET(0x105A04B0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_ACE2AEC7521680A8_OFFSET UNITYSDK_OFFSET(0x105A22A0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_BECF4675C79F8C72_OFFSET UNITYSDK_OFFSET(0x105A0A30)
#define CLASS_1_4478EE98985A9F83_METHOD_1_C100DB1B15A9DD0D_OFFSET UNITYSDK_OFFSET(0x105A2320)
#define CLASS_1_4478EE98985A9F83_METHOD_1_D30BC2FC3E617C9D_OFFSET UNITYSDK_OFFSET(0x105A0AC0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_D4F9D87869897E99_OFFSET UNITYSDK_OFFSET(0x105A0520)
#define CLASS_1_4478EE98985A9F83_METHOD_1_D92D5A333AF3D450_OFFSET UNITYSDK_OFFSET(0x105A0020)
#define CLASS_1_4478EE98985A9F83_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x105A1980)
#define CLASS_1_4478EE98985A9F83_METHOD_1_DFBF61DEC6FA334E_OFFSET UNITYSDK_OFFSET(0x105A1F90)
#define CLASS_1_4478EE98985A9F83_METHOD_1_E3A0178A2D58C5C0_OFFSET UNITYSDK_OFFSET(0x105A19F0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_E53ABB658BA14AA1_OFFSET UNITYSDK_OFFSET(0x105A1AB0)
#define CLASS_1_4478EE98985A9F83_METHOD_1_F656F39BC8CB3C97_OFFSET UNITYSDK_OFFSET(0x105A1A40)
#define CLASS_1_4478EE98985A9F83_METHOD_1_F82D1B846A39EB6A_OFFSET UNITYSDK_OFFSET(0x105A0DE0)
#define CLASS_1_4478EE98985A9F83_SET_SYNCEDWITHSERVER_OFFSET UNITYSDK_OFFSET(0x105A1880)
#define CLASS_1_4478EE98985A9F83__CTOR_OFFSET UNITYSDK_OFFSET(0x105A0290)

inline static constexpr unsigned int Class_1_4478EE98985A9F83_TypeDefinitionIndex = 61345;

class Class_1_4478EE98985A9F83 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x10
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_2; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*>* Field_1_5; // 0x28
	::Class_1_A00F4C3E38481F7F* Field_1_1; // 0x30
	::System::Boolean _SyncedWithServer_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83__CTOR_OFFSET))(this);
	}

	static ::Class_1_4478EE98985A9F83* Method_1_D92D5A333AF3D450(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::Class_1_4478EE98985A9F83*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_D92D5A333AF3D450_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_C06752CD2A701BDD* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_C06752CD2A701BDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::System::Boolean Method_1_3F7A6F12EE81A42E(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_3F7A6F12EE81A42E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AB3E43D50551A16F(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_AB3E43D50551A16F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D4F9D87869897E99(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_D4F9D87869897E99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_276B9670A1423129(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_276B9670A1423129_OFFSET))(this, a1);
	}

	::System::Void Method_1_BECF4675C79F8C72(::Proto::SceneMapInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneMapInfo*))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_BECF4675C79F8C72_OFFSET))(this, a1);
	}

	::System::Void Method_1_F82D1B846A39EB6A(::System::Collections::Generic::IEnumerable_1<::Class_1_D7B17FB02EF70CD8_9*>* a1, ::Class_1_A00F4C3E38481F7F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D7B17FB02EF70CD8_9*>*, ::Class_1_A00F4C3E38481F7F*))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_F82D1B846A39EB6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7BF48332818BDA36(::System::Collections::Generic::IEnumerable_1<::Proto::MapInfoGroup*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Proto::MapInfoGroup*>*))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_7BF48332818BDA36_OFFSET))(this, a1);
	}

	::System::Void Method_1_D30BC2FC3E617C9D(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_D30BC2FC3E617C9D_OFFSET))(this, a1);
	}

	::System::Boolean get_SyncedWithServer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_GET_SYNCEDWITHSERVER_OFFSET))(this);
	}

	::System::Void set_SyncedWithServer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_SET_SYNCEDWITHSERVER_OFFSET))(this, value);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::RPG::Client::MapAnchorDef* Method_1_52A1447ADFC62FA3()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_52A1447ADFC62FA3_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_114781D79D91EA39()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_114781D79D91EA39_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::RPG::GameCore::LevelNavmapConfig* Method_1_46A9BB07BDC4F2DD()
	{
		return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_46A9BB07BDC4F2DD_OFFSET))(this);
	}

	::Class_1_2EAB25208BF9561B* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_2EAB25208BF9561B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E3A0178A2D58C5C0()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_E3A0178A2D58C5C0_OFFSET))(this);
	}

	::RPG::GameCore::LevelFloorBakedInfo* Method_1_F656F39BC8CB3C97()
	{
		return ((::RPG::GameCore::LevelFloorBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_F656F39BC8CB3C97_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>* Method_1_24490E525F44F629()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_24490E525F44F629_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* Method_1_E53ABB658BA14AA1(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_E53ABB658BA14AA1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* Method_1_2A37DA3A5D53C4DC()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_2A37DA3A5D53C4DC_OFFSET))(this);
	}

	::System::Boolean Method_1_DFBF61DEC6FA334E(::System::UInt32 a1, ::System::String* a2, ::System::Int16& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_DFBF61DEC6FA334E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4121FA4FAF54FA2F(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MapEntityDef*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapEntityDef*&))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_4121FA4FAF54FA2F_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Method_1_1E1BCD126F6598AB()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_1E1BCD126F6598AB_OFFSET))(this);
	}

	::RPG::Client::MapRotationInfo* Method_1_0A594256478E62C1()
	{
		return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_0A594256478E62C1_OFFSET))(this);
	}

	::RPG::GameCore::EraFlipperConfig* Method_1_ACE2AEC7521680A8()
	{
		return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_ACE2AEC7521680A8_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* Method_1_3FFD29CFFF37C89C()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_3FFD29CFFF37C89C_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_1_C100DB1B15A9DD0D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_C100DB1B15A9DD0D_OFFSET))(this, a1);
	}

	::RPG::Client::FloorSavedData* Method_1_A2FC7F4229E6CE1E()
	{
		return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_A2FC7F4229E6CE1E_OFFSET))(this);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_6BFD1AD809E415D7()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4478EE98985A9F83_METHOD_1_6BFD1AD809E415D7_OFFSET))(this);
	}
};
