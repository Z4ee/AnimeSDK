#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveBpFeature; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE5A25CFD093D945_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16488480)
#define CLASS_3_FE5A25CFD093D945__CTOR_OFFSET UNITYSDK_OFFSET(0x16488450)

inline static constexpr unsigned int Class_3_FE5A25CFD093D945_TypeDefinitionIndex = 55502;

class Class_3_FE5A25CFD093D945 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveBpFeature*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveBpFeature* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveBpFeature*))((::PBYTE)hIl2Cpp + CLASS_3_FE5A25CFD093D945__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE5A25CFD093D945_ONTASKBEGIN_OFFSET))(this);
	}
};
