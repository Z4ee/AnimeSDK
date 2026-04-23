#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_679CF71AD3A781CD;
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F6160A8B4F4A1F27___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B27720)
#define CLASS_1_F6160A8B4F4A1F27___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B27750)
#define CLASS_1_F6160A8B4F4A1F27___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_0_OFFSET UNITYSDK_OFFSET(0x12B277E0)
#define CLASS_1_F6160A8B4F4A1F27___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_1_OFFSET UNITYSDK_OFFSET(0x12B27800)
#define CLASS_1_F6160A8B4F4A1F27___C___INITSLOTS_B__13_0_OFFSET UNITYSDK_OFFSET(0x12B27760)
#define CLASS_1_F6160A8B4F4A1F27___C___INITSPSLOTS_B__14_0_OFFSET UNITYSDK_OFFSET(0x12B277A0)

inline static constexpr unsigned int Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex = 69305;

class Class_1_F6160A8B4F4A1F27___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::SpEquipSlotData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x4C220);
	}
	static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*, ::System::Boolean>** StaticGet___9__24_1()
	{
		return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x4C228);
	}
	static ::Class_1_F6160A8B4F4A1F27___c** StaticGet___9()
	{
		return (::Class_1_F6160A8B4F4A1F27___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x4C230);
	}
	static ::System::Comparison_1<::Class_1_679CF71AD3A781CD*>** StaticGet___9__13_0()
	{
		return (::System::Comparison_1<::Class_1_679CF71AD3A781CD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x4C238);
	}
	static ::System::Func_2<::Class_1_679CF71AD3A781CD*, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>** StaticGet___9__24_0()
	{
		return (::System::Func_2<::Class_1_679CF71AD3A781CD*, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F6160A8B4F4A1F27___c_TypeDefinitionIndex)->GetStaticField(0x4C240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __InitSlots_b__13_0(::Class_1_679CF71AD3A781CD* l, ::Class_1_679CF71AD3A781CD* r)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_679CF71AD3A781CD*, ::Class_1_679CF71AD3A781CD*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C___INITSLOTS_B__13_0_OFFSET))(this, l, r);
	}

	::System::Int32 __InitSpSlots_b__14_0(::RPG::Client::ActivityIdleLive::SpEquipSlotData* l, ::RPG::Client::ActivityIdleLive::SpEquipSlotData* r)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*, ::RPG::Client::ActivityIdleLive::SpEquipSlotData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C___INITSPSLOTS_B__14_0_OFFSET))(this, l, r);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _GetAllEquippedNormalEquipsCopy_b__24_0(::Class_1_679CF71AD3A781CD* x)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID, ::Class_1_679CF71AD3A781CD*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_0_OFFSET))(this, x);
	}

	::System::Boolean _GetAllEquippedNormalEquipsCopy_b__24_1(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* y)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_F6160A8B4F4A1F27___C__GETALLEQUIPPEDNORMALEQUIPSCOPY_B__24_1_OFFSET))(this, y);
	}
};
