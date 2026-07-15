#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtStopLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BCEB349B3F6F3670_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EA6650)
#define CLASS_3_BCEB349B3F6F3670_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EA6690)
#define CLASS_3_BCEB349B3F6F3670__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA6620)

inline static constexpr unsigned int Class_3_BCEB349B3F6F3670_TypeDefinitionIndex = 51409;

class Class_3_BCEB349B3F6F3670 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtStopLookAt*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtStopLookAt* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtStopLookAt*))((::PBYTE)hIl2Cpp + CLASS_3_BCEB349B3F6F3670__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BCEB349B3F6F3670_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BCEB349B3F6F3670_ONTASKBEGIN_OFFSET))(this);
	}
};
