#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerPerformanceMask; }
namespace System { class String; }

#define CLASS_4_3D58785602145ACE_METHOD_4_73FEEC595A0D4611_OFFSET UNITYSDK_OFFSET(0x1CEA4F90)
#define CLASS_4_3D58785602145ACE_METHOD_4_965E093F3E1404F4_OFFSET UNITYSDK_OFFSET(0x1CEA4F40)
#define CLASS_4_3D58785602145ACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA4F80)

inline static constexpr unsigned int Class_4_3D58785602145ACE_TypeDefinitionIndex = 20065;

class Class_4_3D58785602145ACE : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::FloorSavedValueOverride*>* AKMPDOOGAFJ; // 0x20
	::RPG::GameCore::TriggerPerformanceMask* HGHDDOHMDCD; // 0x28
	::System::String* JFABDOKNDBI; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* MGJLINFADJK; // 0x38
	::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x40
	::System::UInt32 NJIOMOHBILM; // 0x44
	::System::UInt32 OLHIGHGKMIH; // 0x48
	::System::UInt32 FIMNPJLNLEE; // 0x4C
	::System::UInt32 HNPDLANHONH; // 0x50

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
