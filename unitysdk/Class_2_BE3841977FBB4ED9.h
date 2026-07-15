#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_19.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_863;
class Class_0_16E4307DCC419505_864;
class Class_1_A0C0ADCC8A5FDABE;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define CLASS_2_BE3841977FBB4ED9_GET__MAX_DFS_COUNT_OFFSET UNITYSDK_OFFSET(0x152F7150)
#define CLASS_2_BE3841977FBB4ED9_METHOD_2_13488CF29D8DA4B1_OFFSET UNITYSDK_OFFSET(0x152F7510)
#define CLASS_2_BE3841977FBB4ED9_METHOD_2_28E6455C4F76B16C_OFFSET UNITYSDK_OFFSET(0x152F7830)
#define CLASS_2_BE3841977FBB4ED9_METHOD_2_33637005173630E2_OFFSET UNITYSDK_OFFSET(0x152F8210)
#define CLASS_2_BE3841977FBB4ED9_METHOD_2_476B0279F25FD25D_OFFSET UNITYSDK_OFFSET(0x152F7470)
#define CLASS_2_BE3841977FBB4ED9_METHOD_2_663DA90389052737_OFFSET UNITYSDK_OFFSET(0x152F7DF0)
#define CLASS_2_BE3841977FBB4ED9_METHOD_2_6A68132927FE80E3_OFFSET UNITYSDK_OFFSET(0x152F7AD0)
#define CLASS_2_BE3841977FBB4ED9_METHOD_2_920A8EAE135DB974_OFFSET UNITYSDK_OFFSET(0x152F81A0)
#define CLASS_2_BE3841977FBB4ED9_METHOD_2_BC7B5A0AC7E2F4A4_OFFSET UNITYSDK_OFFSET(0x152F7160)
#define CLASS_2_BE3841977FBB4ED9__CTOR_OFFSET UNITYSDK_OFFSET(0x152F71E0)

inline static constexpr unsigned int Class_2_BE3841977FBB4ED9_TypeDefinitionIndex = 63905;

class Class_2_BE3841977FBB4ED9 : public ::Class_1_F9FBCC956DFCF137_19
{
public:
	// static const ::System::UInt32 Field_2_0 = 0x6; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_863*>* Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x28
	::System::UInt32 Field_2_4; // 0x2C
	::System::UInt32 Field_2_5; // 0x30
	::System::UInt32 __MAX_DFS_COUNT_k__BackingField; // 0x34

	::System::Void _ctor(::Class_1_A0C0ADCC8A5FDABE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0C0ADCC8A5FDABE*))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get__MAX_DFS_COUNT()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9_GET__MAX_DFS_COUNT_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_864* Method_2_BC7B5A0AC7E2F4A4(::Class_1_A0C0ADCC8A5FDABE* a1)
	{
		return ((::Class_0_16E4307DCC419505_864*(*)(::Class_1_A0C0ADCC8A5FDABE*))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9_METHOD_2_BC7B5A0AC7E2F4A4_OFFSET))(a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_476B0279F25FD25D()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9_METHOD_2_476B0279F25FD25D_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_13488CF29D8DA4B1(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9_METHOD_2_13488CF29D8DA4B1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>* Method_2_28E6455C4F76B16C(::RPG::GameCore::RelicType a1)
	{
		return ((::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9_METHOD_2_28E6455C4F76B16C_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A68132927FE80E3(::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>* a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9_METHOD_2_6A68132927FE80E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_663DA90389052737(::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9_METHOD_2_663DA90389052737_OFFSET))(this, a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_920A8EAE135DB974()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9_METHOD_2_920A8EAE135DB974_OFFSET))(this);
	}

	::System::Boolean Method_2_33637005173630E2(::System::Int32 a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*&))((::PBYTE)hIl2Cpp + CLASS_2_BE3841977FBB4ED9_METHOD_2_33637005173630E2_OFFSET))(this, a1, a2, a3);
	}
};
