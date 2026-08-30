#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_463;
namespace RPG::GameCore { class CreateFMChannelSource; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B9321AFB2F8A6685_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153F7670)
#define CLASS_3_B9321AFB2F8A6685_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153F7310)
#define CLASS_3_B9321AFB2F8A6685_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x153F7570)
#define CLASS_3_B9321AFB2F8A6685__CTOR_OFFSET UNITYSDK_OFFSET(0x153F72E0)

inline static constexpr unsigned int Class_3_B9321AFB2F8A6685_TypeDefinitionIndex = 52994;

class Class_3_B9321AFB2F8A6685 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateFMChannelSource*>
{
public:
	::Class_0_16E4307DCC419505_463* BBANMOONFHP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateFMChannelSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateFMChannelSource*))((::PBYTE)hIl2Cpp + CLASS_3_B9321AFB2F8A6685__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9321AFB2F8A6685_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9321AFB2F8A6685_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9321AFB2F8A6685_DISPOSE_OFFSET))(this);
	}
};
