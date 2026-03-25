#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ActiveFMChannelSource; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0614730AA3CFB724_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D3AFD0)
#define CLASS_3_0614730AA3CFB724__CTOR_OFFSET UNITYSDK_OFFSET(0x8D3AFA0)

inline static constexpr unsigned int Class_3_0614730AA3CFB724_TypeDefinitionIndex = 42291;

class Class_3_0614730AA3CFB724 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ActiveFMChannelSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveFMChannelSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveFMChannelSource*))((::PBYTE)hIl2Cpp + CLASS_3_0614730AA3CFB724__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0614730AA3CFB724_ONTASKBEGIN_OFFSET))(this);
	}
};
