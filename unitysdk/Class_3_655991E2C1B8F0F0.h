#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_BEFD036212012D82;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryCancelEnterRegion; }

#define CLASS_3_655991E2C1B8F0F0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149F6640)
#define CLASS_3_655991E2C1B8F0F0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x149F66D0)
#define CLASS_3_655991E2C1B8F0F0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x149F6680)
#define CLASS_3_655991E2C1B8F0F0__CTOR_OFFSET UNITYSDK_OFFSET(0x149F6610)

inline static constexpr unsigned int Class_3_655991E2C1B8F0F0_TypeDefinitionIndex = 56175;

class Class_3_655991E2C1B8F0F0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TryCancelEnterRegion*>
{
public:
	::RPG::GameCore::TaskContext* Field_3_0; // 0x28
	::Class_1_BEFD036212012D82* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryCancelEnterRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryCancelEnterRegion*))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_655991E2C1B8F0F0_ONTASKBEGIN_OFFSET))(this);
	}
};
