#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerPerformanceMask; }
namespace System { class String; }

#define CLASS_4_3D58785602145ACE_METHOD_4_73FEEC595A0D4611_OFFSET UNITYSDK_OFFSET(0x1CC66A20)
#define CLASS_4_3D58785602145ACE_METHOD_4_965E093F3E1404F4_OFFSET UNITYSDK_OFFSET(0x1CC669D0)
#define CLASS_4_3D58785602145ACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC66A10)

inline static constexpr unsigned int Class_4_3D58785602145ACE_TypeDefinitionIndex = 20065;

class Class_4_3D58785602145ACE : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::FloorSavedValueOverride*>* AKMPDOOGAFJ; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* MGJLINFADJK; // 0x28
	::RPG::GameCore::TriggerPerformanceMask* HGHDDOHMDCD; // 0x30
	::System::String* JFABDOKNDBI; // 0x38
	::System::UInt32 HNPDLANHONH; // 0x40
	::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x44
	::System::UInt32 NJIOMOHBILM; // 0x48
	::System::UInt32 FIMNPJLNLEE; // 0x4C
	::System::UInt32 OLHIGHGKMIH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D58785602145ACE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_965E093F3E1404F4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3D58785602145ACE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3D58785602145ACE*&))((::PBYTE)hIl2Cpp + CLASS_4_3D58785602145ACE_METHOD_4_965E093F3E1404F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_73FEEC595A0D4611(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3D58785602145ACE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3D58785602145ACE*))((::PBYTE)hIl2Cpp + CLASS_4_3D58785602145ACE_METHOD_4_73FEEC595A0D4611_OFFSET))(a1, a2);
	}
};
