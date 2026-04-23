#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_36E3880E987172D7_1;
class Class_1_9180E2E655E700C9;
class Class_1_A64CC8A9B1CC56C5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8330F797C50754E5_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x9363690)
#define CLASS_1_8330F797C50754E5_GET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x93636F0)
#define CLASS_1_8330F797C50754E5_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x93636B0)
#define CLASS_1_8330F797C50754E5_GET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x93636D0)
#define CLASS_1_8330F797C50754E5_METHOD_1_A1ADA2C026562D4A_OFFSET UNITYSDK_OFFSET(0x9364060)
#define CLASS_1_8330F797C50754E5_METHOD_1_DA94A670A06F8ADF_OFFSET UNITYSDK_OFFSET(0x9363710)
#define CLASS_1_8330F797C50754E5_METHOD_1_F3C7CF662BAFDA51_OFFSET UNITYSDK_OFFSET(0x9364480)
#define CLASS_1_8330F797C50754E5_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x93636A0)
#define CLASS_1_8330F797C50754E5_SET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x9363700)
#define CLASS_1_8330F797C50754E5_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x93636C0)
#define CLASS_1_8330F797C50754E5_SET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x93636E0)
#define CLASS_1_8330F797C50754E5__CTOR_OFFSET UNITYSDK_OFFSET(0x9363FA0)

inline static constexpr unsigned int Class_1_8330F797C50754E5_TypeDefinitionIndex = 51684;

class Class_1_8330F797C50754E5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A64CC8A9B1CC56C5*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _BuffAmplificationMap_k__BackingField; // 0x18
	::Class_1_9180E2E655E700C9* _InsertMonsterMap_k__BackingField; // 0x20
	::System::UInt32 Field_1_0; // 0x28
	::System::UInt32 _Difficulty_k__BackingField; // 0x2C
	::RPG::GameCore::FateAreaType _AreaType_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FateAreaType get_AreaType()
	{
		return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_GET_AREATYPE_OFFSET))(this);
	}

	::System::Void set_AreaType(::RPG::GameCore::FateAreaType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateAreaType))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_SET_AREATYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_Difficulty()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_GET_DIFFICULTY_OFFSET))(this);
	}

	::System::Void set_Difficulty(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_SET_DIFFICULTY_OFFSET))(this, value);
	}

	::Class_1_9180E2E655E700C9* get_InsertMonsterMap()
	{
		return ((::Class_1_9180E2E655E700C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_GET_INSERTMONSTERMAP_OFFSET))(this);
	}

	::System::Void set_InsertMonsterMap(::Class_1_9180E2E655E700C9* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9180E2E655E700C9*))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_SET_INSERTMONSTERMAP_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_BuffAmplificationMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_GET_BUFFAMPLIFICATIONMAP_OFFSET))(this);
	}

	::System::Void set_BuffAmplificationMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_SET_BUFFAMPLIFICATIONMAP_OFFSET))(this, value);
	}

	static ::Class_1_8330F797C50754E5* Method_1_DA94A670A06F8ADF(::Class_1_36E3880E987172D7_1* a1)
	{
		return ((::Class_1_8330F797C50754E5*(*)(::Class_1_36E3880E987172D7_1*))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_METHOD_1_DA94A670A06F8ADF_OFFSET))(a1);
	}

	::Class_1_36E3880E987172D7_1* Method_1_A1ADA2C026562D4A()
	{
		return ((::Class_1_36E3880E987172D7_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_METHOD_1_A1ADA2C026562D4A_OFFSET))(this);
	}

	::Class_1_8330F797C50754E5* Method_1_F3C7CF662BAFDA51()
	{
		return ((::Class_1_8330F797C50754E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8330F797C50754E5_METHOD_1_F3C7CF662BAFDA51_OFFSET))(this);
	}
};
