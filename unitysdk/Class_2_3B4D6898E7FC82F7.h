#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_92A2DA32F1B2DABE.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A72CA636B45F4DE2;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionEnableNaughtyTargetLockCat; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_09C5A57373CB0506_OFFSET UNITYSDK_OFFSET(0x18ABF930)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_1076EEF03305F971_OFFSET UNITYSDK_OFFSET(0x18ABF6C0)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_25313986CCADECBA_OFFSET UNITYSDK_OFFSET(0x18ABF5C0)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_2546E81000A7B815_OFFSET UNITYSDK_OFFSET(0x18ABF130)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_27AF79940C6133C9_OFFSET UNITYSDK_OFFSET(0x18ABF640)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_32B4F5A1936E7F8C_OFFSET UNITYSDK_OFFSET(0x18ABEDC0)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_556271651AC52D04_OFFSET UNITYSDK_OFFSET(0x18ABF740)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_6042F6B5806FA2C2_OFFSET UNITYSDK_OFFSET(0x18ABEAF0)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_7E1B94876ACF0E2A_OFFSET UNITYSDK_OFFSET(0x18ABF8B0)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_9FC16D2DA66BAD0C_OFFSET UNITYSDK_OFFSET(0x18ABEEC0)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_DB455122FCC5F0CE_OFFSET UNITYSDK_OFFSET(0x18ABF840)
#define CLASS_2_3B4D6898E7FC82F7_METHOD_2_FAD66108D9E5F015_OFFSET UNITYSDK_OFFSET(0x18ABED70)
#define CLASS_2_3B4D6898E7FC82F7__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABEA20)

inline static constexpr unsigned int Class_2_3B4D6898E7FC82F7_TypeDefinitionIndex = 34911;

class Class_2_3B4D6898E7FC82F7 : public ::Class_1_92A2DA32F1B2DABE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>* Field_2_0; // 0x20
	::Class_2_21AD365C113DC484* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x30
	::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* Field_2_3; // 0x38
	::System::Int32 Field_2_4; // 0x40

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceTargetLockStatus Method_2_6042F6B5806FA2C2(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::CakeRaceTargetLockStatus(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_6042F6B5806FA2C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_25313986CCADECBA(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_25313986CCADECBA_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_A72CA636B45F4DE2* Method_2_27AF79940C6133C9(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_1_A72CA636B45F4DE2*(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_27AF79940C6133C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1076EEF03305F971(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::RPG::GameCore::CakeRaceTargetLockStatus a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_1076EEF03305F971_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_556271651AC52D04(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_556271651AC52D04_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_FAD66108D9E5F015(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_FAD66108D9E5F015_OFFSET))(this, a1);
	}

	::System::Void Method_2_9FC16D2DA66BAD0C(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_9FC16D2DA66BAD0C_OFFSET))(this, a1);
	}

	::Class_2_21AD365C113DC484* Method_2_2546E81000A7B815(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_2_21AD365C113DC484*(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_2546E81000A7B815_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_32B4F5A1936E7F8C(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_32B4F5A1936E7F8C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* Method_2_DB455122FCC5F0CE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_DB455122FCC5F0CE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTargetLockStatus, ::System::Int32>* Method_2_7E1B94876ACF0E2A(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTargetLockStatus, ::System::Int32>*(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_7E1B94876ACF0E2A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* Method_2_09C5A57373CB0506()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B4D6898E7FC82F7_METHOD_2_09C5A57373CB0506_OFFSET))(this);
	}
};
