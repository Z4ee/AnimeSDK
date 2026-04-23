#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtGridTransmitToPos; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_07B4A044A72BD081_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DD7860)
#define CLASS_3_07B4A044A72BD081__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD7830)

inline static constexpr unsigned int Class_3_07B4A044A72BD081_TypeDefinitionIndex = 49958;

class Class_3_07B4A044A72BD081 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtGridTransmitToPos*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtGridTransmitToPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtGridTransmitToPos*))((::PBYTE)hIl2Cpp + CLASS_3_07B4A044A72BD081__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B4A044A72BD081_ONTASKBEGIN_OFFSET))(this);
	}
};
