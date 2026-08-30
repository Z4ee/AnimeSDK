#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CBD09AB0890B337E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_158CCD88C6163883;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_59159C17DAD8DBF2;
class Class_1_7A6E49020D23C900;
class Class_1_BE2C11D41E955545;
class Class_1_D70A30D666F20D90;
class Class_1_D8A08316921B6C64;
class Class_1_E7175D70942CF05A;
class Class_2_99BB0B2A459A25C4;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Camera; }

#define CLASS_1_DE4C6B309308A230_DISPOSE_OFFSET UNITYSDK_OFFSET(0x191B93D0)
#define CLASS_1_DE4C6B309308A230_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1764BE50)
#define CLASS_1_DE4C6B309308A230_GET_SOURCENAME_OFFSET UNITYSDK_OFFSET(0x1764C300)
#define CLASS_1_DE4C6B309308A230_GET_SOURCERADIUSDIRTY_OFFSET UNITYSDK_OFFSET(0x191B8E60)
#define CLASS_1_DE4C6B309308A230_GET_SOURCERADIUS_OFFSET UNITYSDK_OFFSET(0x191B8E40)
#define CLASS_1_DE4C6B309308A230_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1764C320)
#define CLASS_1_DE4C6B309308A230_METHOD_1_0552BEF80A6A3BAA_OFFSET UNITYSDK_OFFSET(0x1764BFB0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_05D1F3797D5E7413_OFFSET UNITYSDK_OFFSET(0x1764B9E0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_25D8F0CB96BD92A8_OFFSET UNITYSDK_OFFSET(0x191BBCC0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_292FE893E3F39D85_OFFSET UNITYSDK_OFFSET(0x191BAF70)
#define CLASS_1_DE4C6B309308A230_METHOD_1_2F8F7EB8309A2589_OFFSET UNITYSDK_OFFSET(0x191BB5D0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_2FF1693DC2627205_OFFSET UNITYSDK_OFFSET(0x191B95D0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_30517A168599C4BD_OFFSET UNITYSDK_OFFSET(0x191BC730)
#define CLASS_1_DE4C6B309308A230_METHOD_1_32F5E8B0F86B286F_OFFSET UNITYSDK_OFFSET(0x1764BF30)
#define CLASS_1_DE4C6B309308A230_METHOD_1_391B490735FE1C37_OFFSET UNITYSDK_OFFSET(0x191B9D50)
#define CLASS_1_DE4C6B309308A230_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x191B9C40)
#define CLASS_1_DE4C6B309308A230_METHOD_1_46E5C482BD9D2AA2_OFFSET UNITYSDK_OFFSET(0x1764C1A0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x1764C340)
#define CLASS_1_DE4C6B309308A230_METHOD_1_4AA39EE4219BBEF7_OFFSET UNITYSDK_OFFSET(0x191BA180)
#define CLASS_1_DE4C6B309308A230_METHOD_1_4AC2716B916B7DC5_OFFSET UNITYSDK_OFFSET(0x191BC0E0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_4C6A485322DE374D_OFFSET UNITYSDK_OFFSET(0x1764C160)
#define CLASS_1_DE4C6B309308A230_METHOD_1_58CBBBFB35C7DABA_OFFSET UNITYSDK_OFFSET(0x191BAFE0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_63DC590A71D673E9_OFFSET UNITYSDK_OFFSET(0x191BC460)
#define CLASS_1_DE4C6B309308A230_METHOD_1_A39E0A664391984C_OFFSET UNITYSDK_OFFSET(0x1764BE90)
#define CLASS_1_DE4C6B309308A230_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x191B9850)
#define CLASS_1_DE4C6B309308A230_METHOD_1_B2B0C2DD5B33B622_OFFSET UNITYSDK_OFFSET(0x191BA7C0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_B58984781C172663_OFFSET UNITYSDK_OFFSET(0x191B9780)
#define CLASS_1_DE4C6B309308A230_METHOD_1_B6009F06FE6FBDA6_OFFSET UNITYSDK_OFFSET(0x191BAC80)
#define CLASS_1_DE4C6B309308A230_METHOD_1_BA825BFFA4E36263_OFFSET UNITYSDK_OFFSET(0x1764B4A0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_BEF9A8DE6CB09780_OFFSET UNITYSDK_OFFSET(0x1764BA90)
#define CLASS_1_DE4C6B309308A230_METHOD_1_C43575B87275E95E_OFFSET UNITYSDK_OFFSET(0x191BA4A0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_D015A8BDCC3405F7_OFFSET UNITYSDK_OFFSET(0x191B96A0)
#define CLASS_1_DE4C6B309308A230_METHOD_1_D2764D4B3DC2AE66_OFFSET UNITYSDK_OFFSET(0x191BAB90)
#define CLASS_1_DE4C6B309308A230_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1764BE70)
#define CLASS_1_DE4C6B309308A230_SET_SOURCENAME_OFFSET UNITYSDK_OFFSET(0x1764C310)
#define CLASS_1_DE4C6B309308A230_SET_SOURCERADIUSDIRTY_OFFSET UNITYSDK_OFFSET(0x191B8E70)
#define CLASS_1_DE4C6B309308A230_SET_SOURCERADIUS_OFFSET UNITYSDK_OFFSET(0x191B8E50)
#define CLASS_1_DE4C6B309308A230_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1764C330)
#define CLASS_1_DE4C6B309308A230__CTOR_1_OFFSET UNITYSDK_OFFSET(0x191B9080)
#define CLASS_1_DE4C6B309308A230__CTOR_2_OFFSET UNITYSDK_OFFSET(0x191B9140)
#define CLASS_1_DE4C6B309308A230__CTOR_3_OFFSET UNITYSDK_OFFSET(0x191B9200)
#define CLASS_1_DE4C6B309308A230__CTOR_4_OFFSET UNITYSDK_OFFSET(0x191B92E0)
#define CLASS_1_DE4C6B309308A230__CTOR_OFFSET UNITYSDK_OFFSET(0x191B8E80)

inline static constexpr unsigned int Class_1_DE4C6B309308A230_TypeDefinitionIndex = 73830;

class Class_1_DE4C6B309308A230 : public ::System::Object
{
public:
	// static const ::System::Single HMEFDBKHNLJ; // 0x0
	// static const ::System::String* AHBPNAABBBF; // 0x0
	::System::String* LEGOFEJAHKH; // 0x10
	::Class_1_158CCD88C6163883* CMAABPCFGLM; // 0x18
	::Class_1_7A6E49020D23C900* _SourceType_k__BackingField; // 0x20
	::System::String* _SourceName_k__BackingField; // 0x28
	::RPG::Client::OpenWorld::Volume* ANOHFNCMLKM; // 0x30
	::Class_1_BE2C11D41E955545* JEFNAIENBDA; // 0x38
	::Class_1_158CCD88C6163883* PJINAPHDBBA; // 0x40
	::Class_1_D70A30D666F20D90* BJPKBELGNCM; // 0x48
	::Struct_2_CBD09AB0890B337E LIACFBDAIJA; // 0x50
	::System::Single _SourceRadius_k__BackingField; // 0x90
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x94
	::UnityEngine::Vector3 EHJLIJHHDKM; // 0xA0
	::System::Boolean DHJMIGHBMAL; // 0xAC
	::System::Boolean _SourceRadiusDirty_k__BackingField; // 0xAD

	::System::Void _ctor(::System::String* a1, ::Class_1_7A6E49020D23C900* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1, ::Class_1_7A6E49020D23C900* a2, ::RPG::GameCore::AnchorInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_7A6E49020D23C900*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_2(::System::String* a1, ::Class_1_7A6E49020D23C900* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_7A6E49020D23C900*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_3(::System::String* a1, ::Class_1_7A6E49020D23C900* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_7A6E49020D23C900*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230__CTOR_3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_4(::Class_1_D70A30D666F20D90* a1, ::System::String* a2, ::Class_1_7A6E49020D23C900* a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::System::String*, ::Class_1_7A6E49020D23C900*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230__CTOR_4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single get_SourceRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_GET_SOURCERADIUS_OFFSET))(this);
	}

	::System::Void set_SourceRadius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_SET_SOURCERADIUS_OFFSET))(this, a1);
	}

	::System::Boolean get_SourceRadiusDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_GET_SOURCERADIUSDIRTY_OFFSET))(this);
	}

	::System::Void set_SourceRadiusDirty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_SET_SOURCERADIUSDIRTY_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2FF1693DC2627205(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_2FF1693DC2627205_OFFSET))(this, a1);
	}

	::System::Void Method_1_D015A8BDCC3405F7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_D015A8BDCC3405F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B58984781C172663(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_B58984781C172663_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::Class_1_DE4C6B309308A230* Method_1_391B490735FE1C37(::System::String* a1, ::UnityEngine::Vector3 a2, ::Class_1_7A6E49020D23C900* a3)
	{
		return ((::Class_1_DE4C6B309308A230*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_391B490735FE1C37_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DE4C6B309308A230* Method_1_4AA39EE4219BBEF7(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2, ::Class_1_7A6E49020D23C900* a3)
	{
		return ((::Class_1_DE4C6B309308A230*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_4AA39EE4219BBEF7_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DE4C6B309308A230* Method_1_C43575B87275E95E(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_7A6E49020D23C900* a3)
	{
		return ((::Class_1_DE4C6B309308A230*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_C43575B87275E95E_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_DE4C6B309308A230* Method_1_B2B0C2DD5B33B622(::System::String* a1, ::UnityEngine::Camera* a2, ::Class_1_7A6E49020D23C900* a3)
	{
		return ((::Class_1_DE4C6B309308A230*(*)(::PVOID, ::System::String*, ::UnityEngine::Camera*, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_B2B0C2DD5B33B622_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D2764D4B3DC2AE66(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_D2764D4B3DC2AE66_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6009F06FE6FBDA6(::Class_1_7A6E49020D23C900* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_B6009F06FE6FBDA6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::Class_1_DE4C6B309308A230*>* Method_1_292FE893E3F39D85(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::IList_1<::Class_1_DE4C6B309308A230*>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_292FE893E3F39D85_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_58CBBBFB35C7DABA(::Class_1_303D5A33D1401D59* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_58CBBBFB35C7DABA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2F8F7EB8309A2589(::Class_1_E7175D70942CF05A* a1, ::UnityEngine::Vector2 a2, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a3, ::System::Boolean a4, ::Class_1_3F28033F34305C46* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7175D70942CF05A*, ::UnityEngine::Vector2, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*, ::System::Boolean, ::Class_1_3F28033F34305C46*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_2F8F7EB8309A2589_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_1_25D8F0CB96BD92A8(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::Class_1_59159C17DAD8DBF2* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Boolean a5)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::Class_1_59159C17DAD8DBF2*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_25D8F0CB96BD92A8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_4AC2716B916B7DC5(::System::Int32 a1, ::Class_1_59159C17DAD8DBF2* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::Class_1_59159C17DAD8DBF2*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_4AC2716B916B7DC5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_63DC590A71D673E9(::Class_1_D8A08316921B6C64* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_D8A08316921B6C64*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_63DC590A71D673E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_30517A168599C4BD(::Class_1_D8A08316921B6C64* a1, ::UnityEngine::Vector2 a2, ::Class_1_59159C17DAD8DBF2* a3, ::Class_2_99BB0B2A459A25C4* a4, ::System::Boolean a5, ::RPG::Client::OpenWorld::StreamingItemData* a6, ::System::Int32 a7, ::System::Boolean a8)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D8A08316921B6C64*, ::UnityEngine::Vector2, ::Class_1_59159C17DAD8DBF2*, ::Class_2_99BB0B2A459A25C4*, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_30517A168599C4BD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Int32 Method_1_BA825BFFA4E36263(::System::Int32 a1, ::Class_1_D8A08316921B6C64* a2, ::UnityEngine::Vector2 a3, ::Class_1_59159C17DAD8DBF2* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6, ::System::Boolean a7)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Class_1_D8A08316921B6C64*, ::UnityEngine::Vector2, ::Class_1_59159C17DAD8DBF2*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_BA825BFFA4E36263_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 Method_1_BEF9A8DE6CB09780(::System::Int32 a1, ::Class_1_D8A08316921B6C64* a2, ::Class_1_59159C17DAD8DBF2* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Class_1_D8A08316921B6C64*, ::Class_1_59159C17DAD8DBF2*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_BEF9A8DE6CB09780_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_SET_POSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_1_A39E0A664391984C()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_A39E0A664391984C_OFFSET))(this);
	}

	::System::Boolean Method_1_32F5E8B0F86B286F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_32F5E8B0F86B286F_OFFSET))(this);
	}

	::System::Boolean Method_1_0552BEF80A6A3BAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_0552BEF80A6A3BAA_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_1_4C6A485322DE374D()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_4C6A485322DE374D_OFFSET))(this);
	}

	::System::Void Method_1_46E5C482BD9D2AA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_46E5C482BD9D2AA2_OFFSET))(this);
	}

	::System::String* get_SourceName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_GET_SOURCENAME_OFFSET))(this);
	}

	::System::Void set_SourceName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_SET_SOURCENAME_OFFSET))(this, a1);
	}

	::Class_1_7A6E49020D23C900* get_SourceType()
	{
		return ((::Class_1_7A6E49020D23C900*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_GET_SOURCETYPE_OFFSET))(this);
	}

	::System::Void set_SourceType(::Class_1_7A6E49020D23C900* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A6E49020D23C900*))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_SET_SOURCETYPE_OFFSET))(this, a1);
	}

	::Class_1_158CCD88C6163883* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_158CCD88C6163883*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::Class_1_158CCD88C6163883* Method_1_05D1F3797D5E7413(::System::Boolean a1)
	{
		return ((::Class_1_158CCD88C6163883*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE4C6B309308A230_METHOD_1_05D1F3797D5E7413_OFFSET))(this, a1);
	}
};
