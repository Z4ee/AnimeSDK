#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryStartConnectUltraSkillFrameCapture; }

#define CLASS_3_416075B23CA42B43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139AA090)
#define CLASS_3_416075B23CA42B43__CTOR_OFFSET UNITYSDK_OFFSET(0x139AA060)

inline static constexpr unsigned int Class_3_416075B23CA42B43_TypeDefinitionIndex = 52089;

class Class_3_416075B23CA42B43 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TryStartConnectUltraSkillFrameCapture*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryStartConnectUltraSkillFrameCapture*))((::PBYTE)hIl2Cpp + CLASS_3_416075B23CA42B43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_416075B23CA42B43_ONTASKBEGIN_OFFSET))(this);
	}
};
