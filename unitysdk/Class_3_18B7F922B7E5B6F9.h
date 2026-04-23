#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByVariateType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_18B7F922B7E5B6F9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92A4230)
#define CLASS_3_18B7F922B7E5B6F9__CTOR_OFFSET UNITYSDK_OFFSET(0x92A4150)

inline static constexpr unsigned int Class_3_18B7F922B7E5B6F9_TypeDefinitionIndex = 51148;

class Class_3_18B7F922B7E5B6F9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByVariateType*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByVariateType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByVariateType*))((::PBYTE)hIl2Cpp + CLASS_3_18B7F922B7E5B6F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18B7F922B7E5B6F9_ONTASKBEGIN_OFFSET))(this);
	}
};
