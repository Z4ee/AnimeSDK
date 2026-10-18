#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftEffectType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_112;
class Class_0_16E4307DCC419505_113;
class Class_1_1382163A006DA4F3_1;
class Class_1_52E21E813AA435A9;
class Class_1_59F064CC78086962;
class Class_1_FF80A1ACD786CECB;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_BCE993FCA79BBCAF_GET_TALENTPATHS_OFFSET UNITYSDK_OFFSET(0x1C570530)
#define CLASS_1_BCE993FCA79BBCAF_METHOD_1_2C29287F3D7C754F_OFFSET UNITYSDK_OFFSET(0x1C570540)
#define CLASS_1_BCE993FCA79BBCAF_METHOD_1_58382DF702948524_OFFSET UNITYSDK_OFFSET(0x1C5726B0)
#define CLASS_1_BCE993FCA79BBCAF_METHOD_1_707F3903762A342C_OFFSET UNITYSDK_OFFSET(0x1C5713A0)
#define CLASS_1_BCE993FCA79BBCAF_METHOD_1_89008E8EE93F0C87_OFFSET UNITYSDK_OFFSET(0x1C571DF0)
#define CLASS_1_BCE993FCA79BBCAF_METHOD_1_A1ADA2C026562D4A_OFFSET UNITYSDK_OFFSET(0x1C571770)
#define CLASS_1_BCE993FCA79BBCAF_METHOD_1_C0138035CF2E4174_OFFSET UNITYSDK_OFFSET(0x1C5724F0)
#define CLASS_1_BCE993FCA79BBCAF_METHOD_1_DD38EB254BF2B345_OFFSET UNITYSDK_OFFSET(0x1C570710)
#define CLASS_1_BCE993FCA79BBCAF_METHOD_1_FA0C3C4A817E7639_OFFSET UNITYSDK_OFFSET(0x1C5716E0)
#define CLASS_1_BCE993FCA79BBCAF_METHOD_1_FF6D73768A803F89_OFFSET UNITYSDK_OFFSET(0x1C570E00)
#define CLASS_1_BCE993FCA79BBCAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56D510)

inline static constexpr unsigned int Class_1_BCE993FCA79BBCAF_TypeDefinitionIndex = 41878;

class Class_1_BCE993FCA79BBCAF : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_52E21E813AA435A9*>* _TalentPaths_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_112* GLBMJMPEFHF; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Class_1_52E21E813AA435A9*>* a1, ::Class_0_16E4307DCC419505_112* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_52E21E813AA435A9*>*, ::Class_0_16E4307DCC419505_112*))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_52E21E813AA435A9*>* get_TalentPaths()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_52E21E813AA435A9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_GET_TALENTPATHS_OFFSET))(this);
	}

	::Class_1_52E21E813AA435A9* Method_1_2C29287F3D7C754F(::System::UInt32 a1)
	{
		return ((::Class_1_52E21E813AA435A9*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_METHOD_1_2C29287F3D7C754F_OFFSET))(this, a1);
	}

	::Class_1_59F064CC78086962* Method_1_DD38EB254BF2B345(::System::UInt32 a1)
	{
		return ((::Class_1_59F064CC78086962*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_METHOD_1_DD38EB254BF2B345_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Collections::Generic::KeyValuePair_2<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*>> Method_1_FF6D73768A803F89(::System::UInt32 a1)
	{
		return ((::System::Nullable_1<::System::Collections::Generic::KeyValuePair_2<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*>>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_METHOD_1_FF6D73768A803F89_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector2Int> Method_1_707F3903762A342C()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_METHOD_1_707F3903762A342C_OFFSET))(this);
	}

	::Class_1_FF80A1ACD786CECB* Method_1_A1ADA2C026562D4A()
	{
		return ((::Class_1_FF80A1ACD786CECB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_METHOD_1_A1ADA2C026562D4A_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_C0138035CF2E4174()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_METHOD_1_C0138035CF2E4174_OFFSET))(this);
	}

	::Class_1_1382163A006DA4F3_1* Method_1_58382DF702948524()
	{
		return ((::Class_1_1382163A006DA4F3_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_METHOD_1_58382DF702948524_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_113* Method_1_FA0C3C4A817E7639(::RPG::Client::MechCraft::MechCraftEffectType a1)
	{
		return ((::Class_0_16E4307DCC419505_113*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftEffectType))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_METHOD_1_FA0C3C4A817E7639_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*, ::Class_0_16E4307DCC419505_113*>>* Method_1_89008E8EE93F0C87(::RPG::Client::MechCraft::MechCraftEffectType a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::Class_1_52E21E813AA435A9*, ::Class_1_59F064CC78086962*, ::Class_0_16E4307DCC419505_113*>>*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftEffectType))((::PBYTE)hIl2Cpp + CLASS_1_BCE993FCA79BBCAF_METHOD_1_89008E8EE93F0C87_OFFSET))(this, a1);
	}
};
