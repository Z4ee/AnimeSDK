#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1118;
class Class_1_2AFC1F1EF2B59DFF;
class Class_1_4BC03BAAC61C4531;
class Class_1_B29D74C19351AA14;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_303BB5ABBF9BD474_METHOD_1_178F8F55BB9CDD07_OFFSET UNITYSDK_OFFSET(0xA3833C0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_19EA6F3E749047EA_OFFSET UNITYSDK_OFFSET(0xA3832B0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_357CAA45238AA672_OFFSET UNITYSDK_OFFSET(0xA3819D0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_398FCB6C9194FC51_OFFSET UNITYSDK_OFFSET(0xA381ED0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0xA383700)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_50757B709587C131_OFFSET UNITYSDK_OFFSET(0xA3830A0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xA3819B0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_54C839A37EBE87BD_OFFSET UNITYSDK_OFFSET(0xA3820A0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xA382550)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_5E7E4D7437F4921D_OFFSET UNITYSDK_OFFSET(0xA382A20)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_6D4B89EEB34DD339_OFFSET UNITYSDK_OFFSET(0xA3835B0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_96F65774E9446C24_OFFSET UNITYSDK_OFFSET(0xA3825A0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_9DD351C591FAE97B_OFFSET UNITYSDK_OFFSET(0xA382010)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0xA381E40)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_B4687451DAAB2327_OFFSET UNITYSDK_OFFSET(0xA382990)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_BD2183F4E6DE8E6C_OFFSET UNITYSDK_OFFSET(0xA382D80)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA381C50)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_D875B2D7328A410C_OFFSET UNITYSDK_OFFSET(0xA381C90)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_D8EB106D20FB39E7_OFFSET UNITYSDK_OFFSET(0xA383210)
#define CLASS_1_303BB5ABBF9BD474__CTOR_OFFSET UNITYSDK_OFFSET(0xA381B60)

inline static constexpr unsigned int Class_1_303BB5ABBF9BD474_TypeDefinitionIndex = 69652;

class Class_1_303BB5ABBF9BD474 : public ::System::Object
{
public:
	::Class_1_4BC03BAAC61C4531* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B29D74C19351AA14*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_4BC03BAAC61C4531* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474__CTOR_OFFSET))(this, a1);
	}

	::Class_1_2AFC1F1EF2B59DFF* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_2AFC1F1EF2B59DFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	static ::Class_1_303BB5ABBF9BD474* Method_1_357CAA45238AA672(::Class_1_4BC03BAAC61C4531* a1)
	{
		return ((::Class_1_303BB5ABBF9BD474*(*)(::Class_1_4BC03BAAC61C4531*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_357CAA45238AA672_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D875B2D7328A410C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_D875B2D7328A410C_OFFSET))(this);
	}

	::Class_1_B29D74C19351AA14* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_B29D74C19351AA14*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_A917AC671DF6CB2D_OFFSET))(this, a1);
	}

	::Class_1_B29D74C19351AA14* Method_1_398FCB6C9194FC51(::System::UInt32 a1)
	{
		return ((::Class_1_B29D74C19351AA14*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_398FCB6C9194FC51_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_9DD351C591FAE97B(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_9DD351C591FAE97B_OFFSET))(this, a1);
	}

	::Class_1_B29D74C19351AA14* Method_1_54C839A37EBE87BD(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_B29D74C19351AA14*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_54C839A37EBE87BD_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Method_1_96F65774E9446C24(::System::UInt32 a1, ::System::UInt32 a2, ::System::Nullable_1<::System::Single> a3)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_96F65774E9446C24_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_B4687451DAAB2327(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_B4687451DAAB2327_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_BD2183F4E6DE8E6C(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelNavNodeConditionInfos* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelNavNodeConditionInfos*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_BD2183F4E6DE8E6C_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_50757B709587C131(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::RPG::GameCore::LevelNavNodeConditionInfos* a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::RPG::GameCore::LevelNavNodeConditionInfos*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_50757B709587C131_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_19EA6F3E749047EA(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* a4, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_19EA6F3E749047EA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_D8EB106D20FB39E7(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::Class_0_16E4307DCC419505_1118* a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::Class_0_16E4307DCC419505_1118*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_D8EB106D20FB39E7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5E7E4D7437F4921D(::Class_1_B29D74C19351AA14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B29D74C19351AA14*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_5E7E4D7437F4921D_OFFSET))(this, a1);
	}

	::System::Void Method_1_178F8F55BB9CDD07(::Class_1_B29D74C19351AA14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B29D74C19351AA14*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_178F8F55BB9CDD07_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D4B89EEB34DD339(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_6D4B89EEB34DD339_OFFSET))(this, a1);
	}

	::System::Void Method_1_4BD9E95D1AEEBF9B(::Class_1_B29D74C19351AA14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B29D74C19351AA14*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}
};
