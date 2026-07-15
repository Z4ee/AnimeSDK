#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvGameplayTrackNpcEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_74E7ECB5B359C5E4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A7BAC0)
#define CLASS_3_74E7ECB5B359C5E4__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7BA90)

inline static constexpr unsigned int Class_3_74E7ECB5B359C5E4_TypeDefinitionIndex = 49992;

class Class_3_74E7ECB5B359C5E4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvGameplayTrackNpcEnd*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayTrackNpcEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayTrackNpcEnd*))((::PBYTE)hIl2Cpp + CLASS_3_74E7ECB5B359C5E4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74E7ECB5B359C5E4_ONTASKBEGIN_OFFSET))(this);
	}
};
