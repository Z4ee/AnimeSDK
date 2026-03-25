#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
#include "unitysdk/Struct_2_0ACB88BD1D804FF7.h"
#include "unitysdk/Struct_2_8B48740F46FC53FC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_14BF1B11C879825B_Class_1_3E418D18F3879C56;
class Class_1_303D5A33D1401D59;
class Class_1_56FF45D7B2C55655;
class Class_1_56FF45D7B2C55655_Class_1_83B01E15DC3B0CEC;
class Class_2_13E98E15113145AC;
class IRI_BaseBuildingCustomData;
class IRI_BuildingRendererList;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { template <typename T> class ChunkedStructList_1; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class LodDetail; }
namespace RPG::GameCore { template <typename T> class NativeContainer_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_14BF1B11C879825B_METHOD_1_0E8EE7B366BACE16_OFFSET UNITYSDK_OFFSET(0x10633DB0)
#define CLASS_1_14BF1B11C879825B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10633770)
#define CLASS_1_14BF1B11C879825B_METHOD_1_3D428C24C8D2296E_OFFSET UNITYSDK_OFFSET(0x10632480)
#define CLASS_1_14BF1B11C879825B_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x106332F0)
#define CLASS_1_14BF1B11C879825B_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x10632AE0)
#define CLASS_1_14BF1B11C879825B_METHOD_1_5E5F0402D74B8AFB_OFFSET UNITYSDK_OFFSET(0x10634980)
#define CLASS_1_14BF1B11C879825B_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x10633700)
#define CLASS_1_14BF1B11C879825B_METHOD_1_748C3C2A074CB42B_OFFSET UNITYSDK_OFFSET(0x106354A0)
#define CLASS_1_14BF1B11C879825B_METHOD_1_811AF77E9A0455FC_OFFSET UNITYSDK_OFFSET(0x10634CD0)
#define CLASS_1_14BF1B11C879825B_METHOD_1_8E5456892AC04CE1_OFFSET UNITYSDK_OFFSET(0x106337C0)
#define CLASS_1_14BF1B11C879825B_METHOD_1_CE6816C59E95CE19_OFFSET UNITYSDK_OFFSET(0x10635290)
#define CLASS_1_14BF1B11C879825B_METHOD_1_CF0EF72A03B510AB_OFFSET UNITYSDK_OFFSET(0x10632D50)
#define CLASS_1_14BF1B11C879825B_METHOD_1_F0EF2165B7B46D94_OFFSET UNITYSDK_OFFSET(0x106339D0)
#define CLASS_1_14BF1B11C879825B_METHOD_1_F791E34BAD42ADC0_OFFSET UNITYSDK_OFFSET(0x10634360)
#define CLASS_1_14BF1B11C879825B__CCTOR_OFFSET UNITYSDK_OFFSET(0x106356C0)
#define CLASS_1_14BF1B11C879825B__CTOR_OFFSET UNITYSDK_OFFSET(0x106325D0)

inline static constexpr unsigned int Class_1_14BF1B11C879825B_TypeDefinitionIndex = 60458;

class Class_1_14BF1B11C879825B : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_14BF1B11C879825B_Class_1_3E418D18F3879C56*>** StaticGet_Field_1_23()
	{
		return (::System::Collections::Generic::List_1<::Class_1_14BF1B11C879825B_Class_1_3E418D18F3879C56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_14BF1B11C879825B_TypeDefinitionIndex)->GetStaticField(0x23460);
	}
	::System::Collections::Generic::List_1<::System::Single>* Field_1_4; // 0x10
	::Class_1_56FF45D7B2C55655* Field_1_22; // 0x18
	::System::String* Field_1_12; // 0x20
	::Class_1_56FF45D7B2C55655_Class_1_83B01E15DC3B0CEC* Field_1_21; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x30
	::System::Collections::Generic::HashSet_1<::Class_1_14BF1B11C879825B_Class_1_3E418D18F3879C56*>* Field_1_17; // 0x38
	::System::Collections::Generic::List_1<::System::Int64>* Field_1_9; // 0x40
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* Field_1_19; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x50
	::Class_2_13E98E15113145AC* Field_1_20; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x60
	::System::Collections::Generic::List_1<::Class_1_14BF1B11C879825B_Class_1_3E418D18F3879C56*>* Field_1_18; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* Field_1_2; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_3; // 0x80
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_8; // 0x88
	::RPG::Client::ChunkedStructList_1<::UnityEngine::Matrix4x4>* Field_1_7; // 0x90
	::UnityEngine::Matrix4x4 Field_1_14; // 0x98
	::System::UInt32 Field_1_26; // 0xD8
	::Unity::Collections::NativeArray_1<::System::Single> Field_1_11; // 0xE0
	::System::UInt32 Field_1_27; // 0xF0
	::System::UInt32 Field_1_24; // 0xF4
	::UnityEngine::Bounds Field_1_13; // 0xF8
	::System::UInt64 Field_1_15; // 0x110
	::System::Int32 Field_1_16; // 0x118
	::System::UInt32 Field_1_25; // 0x11C
	::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> Field_1_10; // 0x120

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B__CCTOR_OFFSET))();
	}

	::System::String* Method_1_3D428C24C8D2296E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_3D428C24C8D2296E_OFFSET))(this);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_1_CF0EF72A03B510AB(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_CF0EF72A03B510AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_8E5456892AC04CE1(::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>* a1, ::Collections::Pooled::PooledList_1<::System::Single>* a2, ::IRI_BuildingRendererList* a3, ::IRI_BaseBuildingCustomData* a4, ::Class_1_303D5A33D1401D59* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>*, ::Collections::Pooled::PooledList_1<::System::Single>*, ::IRI_BuildingRendererList*, ::IRI_BaseBuildingCustomData*, ::Class_1_303D5A33D1401D59*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_8E5456892AC04CE1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_0E8EE7B366BACE16(::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>* a1, ::Collections::Pooled::PooledList_1<::System::Single>* a2, ::System::String* a3, ::Struct_2_8B48740F46FC53FC a4, ::IRI_BaseBuildingCustomData* a5, ::Class_1_303D5A33D1401D59* a6, ::System::Action* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>*, ::Collections::Pooled::PooledList_1<::System::Single>*, ::System::String*, ::Struct_2_8B48740F46FC53FC, ::IRI_BaseBuildingCustomData*, ::Class_1_303D5A33D1401D59*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_0E8EE7B366BACE16_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_F0EF2165B7B46D94(::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>* a1, ::Collections::Pooled::PooledList_1<::System::Single>* a2, ::System::String* a3, ::Class_1_303D5A33D1401D59* a4, ::System::Action* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::Int32 a9)
	{
		return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>*, ::Collections::Pooled::PooledList_1<::System::Single>*, ::System::String*, ::Class_1_303D5A33D1401D59*, ::System::Action*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_F0EF2165B7B46D94_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_F791E34BAD42ADC0(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::LodDetail*>* a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::Class_1_303D5A33D1401D59* a8, ::System::Action* a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::GameCore::LodDetail*>*, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::Class_1_303D5A33D1401D59*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_F791E34BAD42ADC0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_5E5F0402D74B8AFB(::System::Collections::Generic::IList_1<::UnityEngine::Matrix4x4>* a1, ::System::Nullable_1<::UnityEngine::Matrix4x4> a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Matrix4x4>*, ::System::Nullable_1<::UnityEngine::Matrix4x4>, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_5E5F0402D74B8AFB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CE6816C59E95CE19(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::Struct_2_0ACB88BD1D804FF7> a1, ::System::Nullable_1<::UnityEngine::Matrix4x4> a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::Struct_2_0ACB88BD1D804FF7>, ::System::Nullable_1<::UnityEngine::Matrix4x4>, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_CE6816C59E95CE19_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_748C3C2A074CB42B(::RPG::GameCore::NativeContainer_1<::Struct_2_0ACB88BD1D804FF7>* a1, ::System::Nullable_1<::UnityEngine::Matrix4x4> a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NativeContainer_1<::Struct_2_0ACB88BD1D804FF7>*, ::System::Nullable_1<::UnityEngine::Matrix4x4>, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_748C3C2A074CB42B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_811AF77E9A0455FC(::UnityEngine::Matrix4x4 a1, ::System::Nullable_1<::UnityEngine::Matrix4x4> a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::System::Nullable_1<::UnityEngine::Matrix4x4>, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_14BF1B11C879825B_METHOD_1_811AF77E9A0455FC_OFFSET))(this, a1, a2, a3, a4);
	}
};
