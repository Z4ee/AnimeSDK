#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvTrackNpcPlayerHide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_02FF9058E6609860_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14217F50)
#define CLASS_3_02FF9058E6609860__CTOR_OFFSET UNITYSDK_OFFSET(0x14217F20)

inline static constexpr unsigned int Class_3_02FF9058E6609860_TypeDefinitionIndex = 49113;

class Class_3_02FF9058E6609860 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvTrackNpcPlayerHide*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTrackNpcPlayerHide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTrackNpcPlayerHide*))((::PBYTE)hIl2Cpp + CLASS_3_02FF9058E6609860__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_02FF9058E6609860_ONTASKBEGIN_OFFSET))(this);
	}
};
