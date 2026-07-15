#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetIsometricRoadLinkerEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3AE3C0E384B880F8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F1FDE0)
#define CLASS_3_3AE3C0E384B880F8__CTOR_OFFSET UNITYSDK_OFFSET(0x17F1FDB0)

inline static constexpr unsigned int Class_3_3AE3C0E384B880F8_TypeDefinitionIndex = 50816;

class Class_3_3AE3C0E384B880F8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetIsometricRoadLinkerEnable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIsometricRoadLinkerEnable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIsometricRoadLinkerEnable*))((::PBYTE)hIl2Cpp + CLASS_3_3AE3C0E384B880F8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AE3C0E384B880F8_ONTASKBEGIN_OFFSET))(this);
	}
};
