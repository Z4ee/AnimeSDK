#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByStanceCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8580FD1BFEB9B7E9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96AB110)
#define CLASS_3_8580FD1BFEB9B7E9__CTOR_OFFSET UNITYSDK_OFFSET(0x96AB030)

inline static constexpr unsigned int Class_3_8580FD1BFEB9B7E9_TypeDefinitionIndex = 51139;

class Class_3_8580FD1BFEB9B7E9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByStanceCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByStanceCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByStanceCount*))((::PBYTE)hIl2Cpp + CLASS_3_8580FD1BFEB9B7E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8580FD1BFEB9B7E9_ONTASKBEGIN_OFFSET))(this);
	}
};
