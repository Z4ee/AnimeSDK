#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_888;
class Class_1_AE0CA897D782D638;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_4FCB52C442C97F7D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCA52410)
#define CLASS_1_4FCB52C442C97F7D_METHOD_1_30673AE7BB904A52_OFFSET UNITYSDK_OFFSET(0xCA527B0)
#define CLASS_1_4FCB52C442C97F7D_METHOD_1_3206697643131B34_OFFSET UNITYSDK_OFFSET(0xCA521F0)
#define CLASS_1_4FCB52C442C97F7D_METHOD_1_91A6E9E202B0499F_OFFSET UNITYSDK_OFFSET(0xCA52730)
#define CLASS_1_4FCB52C442C97F7D_METHOD_1_EA49255C94F209AA_OFFSET UNITYSDK_OFFSET(0xCA52470)
#define CLASS_1_4FCB52C442C97F7D__CTOR_OFFSET UNITYSDK_OFFSET(0xCA52880)
#define CLASS_1_4FCB52C442C97F7D__SETDATA_B__0_0_OFFSET UNITYSDK_OFFSET(0xCA52890)

inline static constexpr unsigned int Class_1_4FCB52C442C97F7D_TypeDefinitionIndex = 65638;

class Class_1_4FCB52C442C97F7D : public ::System::Object
{
public:
	::RPG::Client::EquipmentItemData* DHNNOPBAJPF; // 0x10
	::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18
	::Class_1_AE0CA897D782D638* JAPKCFJEKCH; // 0x20

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

	::Class_0_16E4307DCC419505_888* Method_1_EA49255C94F209AA()
	{
		return ((::Class_0_16E4307DCC419505_888*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FCB52C442C97F7D_METHOD_1_EA49255C94F209AA_OFFSET))(this);
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
