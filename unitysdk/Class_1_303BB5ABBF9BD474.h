#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1068;
class Class_1_2AFC1F1EF2B59DFF;
class Class_1_B29D74C19351AA14;
class Class_1_BE0E97EFC15B9DBB;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_303BB5ABBF9BD474_METHOD_1_0C1A9D6D9E04543C_OFFSET UNITYSDK_OFFSET(0xD3AAAB0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_19EA6F3E749047EA_OFFSET UNITYSDK_OFFSET(0xD3AA810)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_357CAA45238AA672_OFFSET UNITYSDK_OFFSET(0xD3A8DB0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_3FDE4166712AD328_OFFSET UNITYSDK_OFFSET(0xD3A9280)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_50757B709587C131_OFFSET UNITYSDK_OFFSET(0xD3AA600)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xD3A8D90)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xD3A9A10)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_639D3208FA5867ED_OFFSET UNITYSDK_OFFSET(0xD3AA920)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0xD3A9070)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_7BE32EB870C59084_OFFSET UNITYSDK_OFFSET(0xD3A9400)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_8A4821B6962F6B25_OFFSET UNITYSDK_OFFSET(0xD3A9EE0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0xD3AAC30)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_96F65774E9446C24_OFFSET UNITYSDK_OFFSET(0xD3A9A60)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_B4687451DAAB2327_OFFSET UNITYSDK_OFFSET(0xD3A9E50)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_BD2183F4E6DE8E6C_OFFSET UNITYSDK_OFFSET(0xD3AA2E0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD3A9030)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0xD3A91C0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_D521C3A022460AB4_OFFSET UNITYSDK_OFFSET(0xD3A94C0)
#define CLASS_1_303BB5ABBF9BD474_METHOD_1_D8EB106D20FB39E7_OFFSET UNITYSDK_OFFSET(0xD3AA770)
#define CLASS_1_303BB5ABBF9BD474__CTOR_OFFSET UNITYSDK_OFFSET(0xD3A8F40)

inline static constexpr unsigned int Class_1_303BB5ABBF9BD474_TypeDefinitionIndex = 68840;

class Class_1_303BB5ABBF9BD474 : public ::System::Object
{
public:
	::Class_1_BE0E97EFC15B9DBB* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B29D74C19351AA14*>* Field_1_1; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_BE0E97EFC15B9DBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE0E97EFC15B9DBB*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474__CTOR_OFFSET))(this, a1);
	}

	::Class_1_2AFC1F1EF2B59DFF* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_2AFC1F1EF2B59DFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	static ::Class_1_303BB5ABBF9BD474* Method_1_357CAA45238AA672(::Class_1_BE0E97EFC15B9DBB* a1)
	{
		return ((::Class_1_303BB5ABBF9BD474*(*)(::Class_1_BE0E97EFC15B9DBB*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_357CAA45238AA672_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::Class_1_B29D74C19351AA14* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_B29D74C19351AA14*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::Class_1_B29D74C19351AA14* Method_1_3FDE4166712AD328(::System::UInt32 a1)
	{
		return ((::Class_1_B29D74C19351AA14*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_3FDE4166712AD328_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_7BE32EB870C59084(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_7BE32EB870C59084_OFFSET))(this, a1);
	}

	::Class_1_B29D74C19351AA14* Method_1_D521C3A022460AB4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_B29D74C19351AA14*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_D521C3A022460AB4_OFFSET))(this, a1, a2);
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

	::System::UInt32 Method_1_D8EB106D20FB39E7(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::Class_0_16E4307DCC419505_1068* a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::Class_0_16E4307DCC419505_1068*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_D8EB106D20FB39E7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8A4821B6962F6B25(::Class_1_B29D74C19351AA14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B29D74C19351AA14*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_8A4821B6962F6B25_OFFSET))(this, a1);
	}

	::System::Void Method_1_639D3208FA5867ED(::Class_1_B29D74C19351AA14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B29D74C19351AA14*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_639D3208FA5867ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C1A9D6D9E04543C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_0C1A9D6D9E04543C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E22B572EA9F050D(::Class_1_B29D74C19351AA14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B29D74C19351AA14*))((::PBYTE)hIl2Cpp + CLASS_1_303BB5ABBF9BD474_METHOD_1_8E22B572EA9F050D_OFFSET))(this, a1);
	}
};
