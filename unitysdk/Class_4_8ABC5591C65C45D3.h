#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerPerformanceMask; }

#define CLASS_4_8ABC5591C65C45D3_METHOD_4_73FEEC595A0D4611_OFFSET UNITYSDK_OFFSET(0x1929A6C0)
#define CLASS_4_8ABC5591C65C45D3_METHOD_4_E498E84AA32F4E1D_OFFSET UNITYSDK_OFFSET(0x1929A5E0)
#define CLASS_4_8ABC5591C65C45D3__CTOR_OFFSET UNITYSDK_OFFSET(0x1929A660)

inline static constexpr unsigned int Class_4_8ABC5591C65C45D3_TypeDefinitionIndex = 19163;

class Class_4_8ABC5591C65C45D3 : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_0; // 0x20
	::Il2CppArray<::RPG::GameCore::FloorSavedValueOverride*>* Field_4_1; // 0x28
	::RPG::GameCore::TriggerPerformanceMask* Field_4_2; // 0x30
	::System::UInt32 Field_4_3; // 0x38
	::System::UInt32 Field_4_4; // 0x3C
	::System::UInt32 Field_4_5; // 0x40
	::System::UInt32 Field_4_6; // 0x44
	::RPG::GameCore::ELevelPerformanceType Field_4_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8ABC5591C65C45D3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_E498E84AA32F4E1D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8ABC5591C65C45D3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8ABC5591C65C45D3*&))((::PBYTE)hIl2Cpp + CLASS_4_8ABC5591C65C45D3_METHOD_4_E498E84AA32F4E1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_73FEEC595A0D4611(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_8ABC5591C65C45D3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_8ABC5591C65C45D3*))((::PBYTE)hIl2Cpp + CLASS_4_8ABC5591C65C45D3_METHOD_4_73FEEC595A0D4611_OFFSET))(a1, a2);
	}
};
