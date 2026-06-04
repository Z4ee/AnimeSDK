#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByWorldLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D2A433CCD8D752D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA948170)
#define CLASS_3_D2A433CCD8D752D0__CTOR_OFFSET UNITYSDK_OFFSET(0xA948090)

inline static constexpr unsigned int Class_3_D2A433CCD8D752D0_TypeDefinitionIndex = 51820;

class Class_3_D2A433CCD8D752D0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByWorldLevel*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWorldLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWorldLevel*))((::PBYTE)hIl2Cpp + CLASS_3_D2A433CCD8D752D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2A433CCD8D752D0_ONTASKBEGIN_OFFSET))(this);
	}
};
