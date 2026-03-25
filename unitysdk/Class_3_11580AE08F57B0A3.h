#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeTrackVirtualCameraFollowAndAim; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_11580AE08F57B0A3_METHOD_3_577144F9CC5490DC_OFFSET UNITYSDK_OFFSET(0xDE53A10)
#define CLASS_3_11580AE08F57B0A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE53730)
#define CLASS_3_11580AE08F57B0A3__CTOR_OFFSET UNITYSDK_OFFSET(0xDE53700)

inline static constexpr unsigned int Class_3_11580AE08F57B0A3_TypeDefinitionIndex = 46775;

class Class_3_11580AE08F57B0A3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeTrackVirtualCameraFollowAndAim*))((::PBYTE)hIl2Cpp + CLASS_3_11580AE08F57B0A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11580AE08F57B0A3_ONTASKBEGIN_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_577144F9CC5490DC(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_11580AE08F57B0A3_METHOD_3_577144F9CC5490DC_OFFSET))(this, a1, a2, a3, a4);
	}
};
