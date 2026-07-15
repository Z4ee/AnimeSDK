#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
#include "unitysdk/Struct_2_0ACB88BD1D804FF7.h"
#include "unitysdk/Struct_2_CC45B4503679E14E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_303D5A33D1401D59;
class Class_1_B947D336595B4072_Class_1_3E418D18F3879C56;
class Class_1_D70A30D666F20D90;
class Class_1_D70A30D666F20D90_Class_1_83B01E15DC3B0CEC;
class Class_2_7F7BFA8C5E418566;
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

#define CLASS_1_B947D336595B4072_METHOD_1_1DECC9EC705B5432_OFFSET UNITYSDK_OFFSET(0x169B4C20)
#define CLASS_1_B947D336595B4072_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x169B29C0)
#define CLASS_1_B947D336595B4072_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x169B2CC0)
#define CLASS_1_B947D336595B4072_METHOD_1_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x169B21D0)
#define CLASS_1_B947D336595B4072_METHOD_1_5DFBC0FE1E2BF6FC_OFFSET UNITYSDK_OFFSET(0x169B4E50)
#define CLASS_1_B947D336595B4072_METHOD_1_623B7469C7970809_OFFSET UNITYSDK_OFFSET(0x169B4170)
#define CLASS_1_B947D336595B4072_METHOD_1_6491062B056713A1_OFFSET UNITYSDK_OFFSET(0x169B37D0)
#define CLASS_1_B947D336595B4072_METHOD_1_6DC6B4212EF1B553_OFFSET UNITYSDK_OFFSET(0x169B2D10)
#define CLASS_1_B947D336595B4072_METHOD_1_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x169B2C50)
#define CLASS_1_B947D336595B4072_METHOD_1_811AF77E9A0455FC_OFFSET UNITYSDK_OFFSET(0x169B45E0)
#define CLASS_1_B947D336595B4072_METHOD_1_825E42428D2BD0B9_OFFSET UNITYSDK_OFFSET(0x169B2F50)
#define CLASS_1_B947D336595B4072_METHOD_1_A05498267EE1C590_OFFSET UNITYSDK_OFFSET(0x169B23D0)
#define CLASS_1_B947D336595B4072_METHOD_1_ABC05A481651807C_OFFSET UNITYSDK_OFFSET(0x169B3270)
#define CLASS_1_B947D336595B4072_METHOD_1_CBE5B6E6CC4A280F_OFFSET UNITYSDK_OFFSET(0x169B1AB0)
#define CLASS_1_B947D336595B4072__CCTOR_OFFSET UNITYSDK_OFFSET(0x169B50D0)
#define CLASS_1_B947D336595B4072__CTOR_OFFSET UNITYSDK_OFFSET(0x169B1CA0)

inline static constexpr unsigned int Class_1_B947D336595B4072_TypeDefinitionIndex = 70339;

class Class_1_B947D336595B4072 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_B947D336595B4072_Class_1_3E418D18F3879C56*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_B947D336595B4072_Class_1_3E418D18F3879C56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B947D336595B4072_TypeDefinitionIndex)->GetStaticField(0x56FE0);
	}
	::System::Collections::Generic::List_1<::Class_1_B947D336595B4072_Class_1_3E418D18F3879C56*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_3; // 0x20
	::System::String* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::String*>>* Field_1_8; // 0x48
	::Class_2_7F7BFA8C5E418566* Field_1_9; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_10; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_11; // 0x60
	::Class_1_D70A30D666F20D90_Class_1_83B01E15DC3B0CEC* Field_1_12; // 0x68
	::System::Collections::Generic::List_1<::System::Int64>* Field_1_13; // 0x70
	::Class_1_D70A30D666F20D90* Field_1_14; // 0x78
	::RPG::Client::ChunkedStructList_1<::UnityEngine::Matrix4x4>* Field_1_15; // 0x80
	::System::Collections::Generic::HashSet_1<::Class_1_B947D336595B4072_Class_1_3E418D18F3879C56*>* Field_1_16; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* Field_1_17; // 0x90
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_18; // 0x98
	::UnityEngine::Matrix4x4 Field_1_19; // 0xA0
	::UnityEngine::Bounds Field_1_20; // 0xE0
	::System::UInt32 Field_1_21; // 0xF8
	::Unity::Collections::NativeArray_1<::System::Single> Field_1_22; // 0x100
	::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> Field_1_23; // 0x110
	::System::UInt64 Field_1_24; // 0x120
	::System::UInt32 Field_1_25; // 0x128
	::System::UInt32 Field_1_26; // 0x12C
	::System::UInt32 Field_1_27; // 0x130
	::System::Int32 Field_1_28; // 0x134

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072__CCTOR_OFFSET))();
	}

	::System::String* Method_1_CBE5B6E6CC4A280F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_CBE5B6E6CC4A280F_OFFSET))(this);
	}

	::System::Void Method_1_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void Method_1_A05498267EE1C590(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_A05498267EE1C590_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_1_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_7A73F165001BC325_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_6DC6B4212EF1B553(::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>* a1, ::Collections::Pooled::PooledList_1<::System::Single>* a2, ::IRI_BuildingRendererList* a3, ::IRI_BaseBuildingCustomData* a4, ::Class_1_303D5A33D1401D59* a5, ::System::Action* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>*, ::Collections::Pooled::PooledList_1<::System::Single>*, ::IRI_BuildingRendererList*, ::IRI_BaseBuildingCustomData*, ::Class_1_303D5A33D1401D59*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_6DC6B4212EF1B553_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_ABC05A481651807C(::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>* a1, ::Collections::Pooled::PooledList_1<::System::Single>* a2, ::System::String* a3, ::Struct_2_CC45B4503679E14E a4, ::IRI_BaseBuildingCustomData* a5, ::Class_1_303D5A33D1401D59* a6, ::System::Action* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>*, ::Collections::Pooled::PooledList_1<::System::Single>*, ::System::String*, ::Struct_2_CC45B4503679E14E, ::IRI_BaseBuildingCustomData*, ::Class_1_303D5A33D1401D59*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_ABC05A481651807C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_825E42428D2BD0B9(::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>* a1, ::Collections::Pooled::PooledList_1<::System::Single>* a2, ::System::String* a3, ::Class_1_303D5A33D1401D59* a4, ::System::Action* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::UInt32 a9, ::System::Int32 a10)
	{
		return ((::System::Void(*)(::PVOID, ::Collections::Pooled::PooledList_1<::Il2CppArray<::RPG::GameCore::LodDetail*>*>*, ::Collections::Pooled::PooledList_1<::System::Single>*, ::System::String*, ::Class_1_303D5A33D1401D59*, ::System::Action*, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_825E42428D2BD0B9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_6491062B056713A1(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::LodDetail*>* a2, ::System::Single a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::UInt32 a7, ::System::String* a8, ::Class_1_303D5A33D1401D59* a9, ::System::Action* a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::GameCore::LodDetail*>*, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32, ::System::String*, ::Class_1_303D5A33D1401D59*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_6491062B056713A1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_623B7469C7970809(::System::Collections::Generic::IList_1<::UnityEngine::Matrix4x4>* a1, ::System::Nullable_1<::UnityEngine::Matrix4x4> a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Matrix4x4>*, ::System::Nullable_1<::UnityEngine::Matrix4x4>, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_623B7469C7970809_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1DECC9EC705B5432(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::Struct_2_0ACB88BD1D804FF7> a1, ::System::Nullable_1<::UnityEngine::Matrix4x4> a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::Struct_2_0ACB88BD1D804FF7>, ::System::Nullable_1<::UnityEngine::Matrix4x4>, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_1DECC9EC705B5432_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5DFBC0FE1E2BF6FC(::RPG::GameCore::NativeContainer_1<::Struct_2_0ACB88BD1D804FF7>* a1, ::System::Nullable_1<::UnityEngine::Matrix4x4> a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NativeContainer_1<::Struct_2_0ACB88BD1D804FF7>*, ::System::Nullable_1<::UnityEngine::Matrix4x4>, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_5DFBC0FE1E2BF6FC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_811AF77E9A0455FC(::UnityEngine::Matrix4x4 a1, ::System::Nullable_1<::UnityEngine::Matrix4x4> a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::System::Nullable_1<::UnityEngine::Matrix4x4>, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B947D336595B4072_METHOD_1_811AF77E9A0455FC_OFFSET))(this, a1, a2, a3, a4);
	}
};
