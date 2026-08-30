#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_4A2801D02B2BB246_3;
class Class_1_5CFC3AE61DDB76FA;
class Class_1_BAB7878C1DBCE4EF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9D50B47B40CEFD84_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x153D47B0)
#define CLASS_1_9D50B47B40CEFD84_GET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x153D4810)
#define CLASS_1_9D50B47B40CEFD84_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x153D47D0)
#define CLASS_1_9D50B47B40CEFD84_GET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x153D47F0)
#define CLASS_1_9D50B47B40CEFD84_METHOD_1_4ABBE821374735DA_OFFSET UNITYSDK_OFFSET(0x153D53B0)
#define CLASS_1_9D50B47B40CEFD84_METHOD_1_DA94A670A06F8ADF_OFFSET UNITYSDK_OFFSET(0x153D4830)
#define CLASS_1_9D50B47B40CEFD84_METHOD_1_F7721D0B419638BB_OFFSET UNITYSDK_OFFSET(0x153D57B0)
#define CLASS_1_9D50B47B40CEFD84_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x153D47C0)
#define CLASS_1_9D50B47B40CEFD84_SET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x153D4820)
#define CLASS_1_9D50B47B40CEFD84_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x153D47E0)
#define CLASS_1_9D50B47B40CEFD84_SET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x153D4800)
#define CLASS_1_9D50B47B40CEFD84__CTOR_OFFSET UNITYSDK_OFFSET(0x153D52B0)

inline static constexpr unsigned int Class_1_9D50B47B40CEFD84_TypeDefinitionIndex = 56275;

class Class_1_9D50B47B40CEFD84 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _BuffAmplificationMap_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5CFC3AE61DDB76FA*>* PICNGJMJELF; // 0x18
	::Class_1_BAB7878C1DBCE4EF* _InsertMonsterMap_k__BackingField; // 0x20
	::RPG::GameCore::FateAreaType _AreaType_k__BackingField; // 0x28
	::System::UInt32 _Difficulty_k__BackingField; // 0x2C
	::System::UInt32 BEOFPCAACEP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FateAreaType get_AreaType()
	{
		return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_GET_AREATYPE_OFFSET))(this);
	}

	::System::Void set_AreaType(::RPG::GameCore::FateAreaType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateAreaType))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_SET_AREATYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Difficulty()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_GET_DIFFICULTY_OFFSET))(this);
	}

	::System::Void set_Difficulty(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_SET_DIFFICULTY_OFFSET))(this, a1);
	}

	::Class_1_BAB7878C1DBCE4EF* get_InsertMonsterMap()
	{
		return ((::Class_1_BAB7878C1DBCE4EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_GET_INSERTMONSTERMAP_OFFSET))(this);
	}

	::System::Void set_InsertMonsterMap(::Class_1_BAB7878C1DBCE4EF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAB7878C1DBCE4EF*))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_SET_INSERTMONSTERMAP_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_BuffAmplificationMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_GET_BUFFAMPLIFICATIONMAP_OFFSET))(this);
	}

	::System::Void set_BuffAmplificationMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_SET_BUFFAMPLIFICATIONMAP_OFFSET))(this, a1);
	}

	static ::Class_1_9D50B47B40CEFD84* Method_1_DA94A670A06F8ADF(::Class_1_4A2801D02B2BB246_3* a1)
	{
		return ((::Class_1_9D50B47B40CEFD84*(*)(::Class_1_4A2801D02B2BB246_3*))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_METHOD_1_DA94A670A06F8ADF_OFFSET))(a1);
	}

	::Class_1_4A2801D02B2BB246_3* Method_1_4ABBE821374735DA()
	{
		return ((::Class_1_4A2801D02B2BB246_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_METHOD_1_4ABBE821374735DA_OFFSET))(this);
	}

	::Class_1_9D50B47B40CEFD84* Method_1_F7721D0B419638BB()
	{
		return ((::Class_1_9D50B47B40CEFD84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D50B47B40CEFD84_METHOD_1_F7721D0B419638BB_OFFSET))(this);
	}
};
