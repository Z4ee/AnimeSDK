#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_799;
class Class_1_AE0CA897D782D638;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_4FCB52C442C97F7D_METHOD_1_10EFA09ABBB7D6B3_OFFSET UNITYSDK_OFFSET(0xB516790)
#define CLASS_1_4FCB52C442C97F7D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB516730)
#define CLASS_1_4FCB52C442C97F7D_METHOD_1_30673AE7BB904A52_OFFSET UNITYSDK_OFFSET(0xB516A90)
#define CLASS_1_4FCB52C442C97F7D_METHOD_1_3206697643131B34_OFFSET UNITYSDK_OFFSET(0xB516510)
#define CLASS_1_4FCB52C442C97F7D_METHOD_1_91A6E9E202B0499F_OFFSET UNITYSDK_OFFSET(0xB516A10)
#define CLASS_1_4FCB52C442C97F7D__CTOR_OFFSET UNITYSDK_OFFSET(0xB516B60)
#define CLASS_1_4FCB52C442C97F7D__SETDATA_B__0_0_OFFSET UNITYSDK_OFFSET(0xB516B70)

inline static constexpr unsigned int Class_1_4FCB52C442C97F7D_TypeDefinitionIndex = 61311;

class Class_1_4FCB52C442C97F7D : public ::System::Object
{
public:
	::Class_1_AE0CA897D782D638* Field_1_0; // 0x10
	::RPG::AvatarSystem::IAvatar* Field_1_1; // 0x18
	::RPG::Client::EquipmentItemData* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FCB52C442C97F7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3206697643131B34(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_4FCB52C442C97F7D_METHOD_1_3206697643131B34_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FCB52C442C97F7D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_799* Method_1_10EFA09ABBB7D6B3()
	{
		return ((::Class_0_16E4307DCC419505_799*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FCB52C442C97F7D_METHOD_1_10EFA09ABBB7D6B3_OFFSET))(this);
	}

	::System::Boolean Method_1_91A6E9E202B0499F(::RPG::Client::EquipmentItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_4FCB52C442C97F7D_METHOD_1_91A6E9E202B0499F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_30673AE7BB904A52(::RPG::Client::EquipmentItemData* a1, ::RPG::Client::EquipmentItemData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_4FCB52C442C97F7D_METHOD_1_30673AE7BB904A52_OFFSET))(this, a1, a2);
	}

	::System::Boolean _SetData_b__0_0(::RPG::Client::EquipmentItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_4FCB52C442C97F7D__SETDATA_B__0_0_OFFSET))(this, a1);
	}
};
