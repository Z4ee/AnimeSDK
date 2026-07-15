#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearAllEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4ED25A8EDEDD7713_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C626A0)
#define CLASS_3_4ED25A8EDEDD7713__CTOR_OFFSET UNITYSDK_OFFSET(0x17C62670)

inline static constexpr unsigned int Class_3_4ED25A8EDEDD7713_TypeDefinitionIndex = 52468;

class Class_3_4ED25A8EDEDD7713 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearAllEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearAllEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearAllEffect*))((::PBYTE)hIl2Cpp + CLASS_3_4ED25A8EDEDD7713__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4ED25A8EDEDD7713_ONTASKBEGIN_OFFSET))(this);
	}
};
