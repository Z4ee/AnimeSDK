#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetCameraAxis; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_01219D1316EF1686_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15813E20)
#define CLASS_3_01219D1316EF1686__CTOR_OFFSET UNITYSDK_OFFSET(0x15813DF0)

inline static constexpr unsigned int Class_3_01219D1316EF1686_TypeDefinitionIndex = 55516;

class Class_3_01219D1316EF1686 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetCameraAxis*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetCameraAxis* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetCameraAxis*))((::PBYTE)hIl2Cpp + CLASS_3_01219D1316EF1686__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01219D1316EF1686_ONTASKBEGIN_OFFSET))(this);
	}
};
