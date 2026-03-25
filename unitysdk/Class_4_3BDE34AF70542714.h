#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerPerformanceMask; }

#define CLASS_4_3BDE34AF70542714_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x16C30580)
#define CLASS_4_3BDE34AF70542714_METHOD_4_F15654ABB049A0FA_OFFSET UNITYSDK_OFFSET(0x16C30660)
#define CLASS_4_3BDE34AF70542714__CTOR_OFFSET UNITYSDK_OFFSET(0x16C30600)

inline static constexpr unsigned int Class_4_3BDE34AF70542714_TypeDefinitionIndex = 18587;

class Class_4_3BDE34AF70542714 : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::RPG::GameCore::TriggerPerformanceMask* Field_4_5; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_6; // 0x28
	::System::UInt32 Field_4_1; // 0x30
	::RPG::GameCore::ELevelPerformanceType Field_4_3; // 0x34
	::System::UInt32 Field_4_0; // 0x38
	::System::UInt32 Field_4_4; // 0x3C
	::System::UInt32 Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3BDE34AF70542714__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3BDE34AF70542714*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3BDE34AF70542714*&))((::PBYTE)hIl2Cpp + CLASS_4_3BDE34AF70542714_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F15654ABB049A0FA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3BDE34AF70542714* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3BDE34AF70542714*))((::PBYTE)hIl2Cpp + CLASS_4_3BDE34AF70542714_METHOD_4_F15654ABB049A0FA_OFFSET))(a1, a2);
	}
};
