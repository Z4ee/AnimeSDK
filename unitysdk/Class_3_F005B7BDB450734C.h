#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ActiveFMChannelReceiver; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F005B7BDB450734C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1856D210)
#define CLASS_3_F005B7BDB450734C__CTOR_OFFSET UNITYSDK_OFFSET(0x1856D1E0)

inline static constexpr unsigned int Class_3_F005B7BDB450734C_TypeDefinitionIndex = 52548;

class Class_3_F005B7BDB450734C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActiveFMChannelReceiver*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveFMChannelReceiver* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveFMChannelReceiver*))((::PBYTE)hIl2Cpp + CLASS_3_F005B7BDB450734C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F005B7BDB450734C_ONTASKBEGIN_OFFSET))(this);
	}
};
