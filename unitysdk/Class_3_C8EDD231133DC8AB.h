#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RefreshFrameCapture; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C8EDD231133DC8AB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE471420)
#define CLASS_3_C8EDD231133DC8AB__CTOR_OFFSET UNITYSDK_OFFSET(0xE4713F0)

inline static constexpr unsigned int Class_3_C8EDD231133DC8AB_TypeDefinitionIndex = 51646;

class Class_3_C8EDD231133DC8AB : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshFrameCapture*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshFrameCapture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshFrameCapture*))((::PBYTE)hIl2Cpp + CLASS_3_C8EDD231133DC8AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8EDD231133DC8AB_ONTASKBEGIN_OFFSET))(this);
	}
};
