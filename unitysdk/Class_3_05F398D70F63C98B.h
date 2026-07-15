#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RecordCameraRootPos; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_05F398D70F63C98B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188DA360)
#define CLASS_3_05F398D70F63C98B__CTOR_OFFSET UNITYSDK_OFFSET(0x188DA330)

inline static constexpr unsigned int Class_3_05F398D70F63C98B_TypeDefinitionIndex = 52779;

class Class_3_05F398D70F63C98B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RecordCameraRootPos*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RecordCameraRootPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RecordCameraRootPos*))((::PBYTE)hIl2Cpp + CLASS_3_05F398D70F63C98B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05F398D70F63C98B_ONTASKBEGIN_OFFSET))(this);
	}
};
