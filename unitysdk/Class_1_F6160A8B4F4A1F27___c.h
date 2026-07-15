#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_679CF71AD3A781CD;
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F6160A8B4F4A1F27___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1764C4C0)
#define CLASS_1_F6160A8B4F4A1F27___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1764C4F0)
#define CLASS_1_F6160A8B4F4A1F27___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_0_OFFSET UNITYSDK_OFFSET(0x1764C580)
#define CLASS_1_F6160A8B4F4A1F27___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_1_OFFSET UNITYSDK_OFFSET(0x1764C5A0)
#define CLASS_1_F6160A8B4F4A1F27___C___INITSLOTS_B__13_0_OFFSET UNITYSDK_OFFSET(0x1764C500)
#define CLASS_1_F6160A8B4F4A1F27___C___INITSPSLOTS_B__14_0_OFFSET UNITYSDK_OFFSET(0x1764C540)

inline static constexpr unsigned int Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex = 71640;

class Class_1_F6160A8B4F4A1F27___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x59B10);
	}
	static ::System::Func_2<::Class_1_679CF71AD3A781CD*, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::Class_1_679CF71AD3A781CD*, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x59B18);
	}
	static ::System::Comparison_1<::Class_1_679CF71AD3A781CD*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_1_679CF71AD3A781CD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x59B20);
	}
	static ::Class_1_F6160A8B4F4A1F27___c** StaticGet___9()
	{
		return (::Class_1_F6160A8B4F4A1F27___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x59B28);
	}
	static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*, ::System::Boolean>** StaticGet___9__24_1()
	{
		return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x59B30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __InitSlots_b__13_0(::Class_1_679CF71AD3A781CD* a1, ::Class_1_679CF71AD3A781CD* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_679CF71AD3A781CD*, ::Class_1_679CF71AD3A781CD*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C___INITSLOTS_B__13_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 __InitSpSlots_b__14_0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* a1, ::RPG::Client::ActivityIdleLive::SpEquipSlotData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C___INITSPSLOTS_B__14_0_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _GetAllEquippedNormalEquipsCopy_b__24_0(::Class_1_679CF71AD3A781CD* a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID, ::Class_1_679CF71AD3A781CD*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_0_OFFSET))(this, a1);
	}

	::System::Boolean _GetAllEquippedNormalEquipsCopy_b__24_1(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_1_OFFSET))(this, a1);
	}
};
