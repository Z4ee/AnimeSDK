#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RequestMissionCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5D1B24EDA62FA3CA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD9E60E0)
#define CLASS_3_5D1B24EDA62FA3CA__CTOR_OFFSET UNITYSDK_OFFSET(0xD9E60B0)

inline static constexpr unsigned int Class_3_5D1B24EDA62FA3CA_TypeDefinitionIndex = 49056;

class Class_3_5D1B24EDA62FA3CA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RequestMissionCustomValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestMissionCustomValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestMissionCustomValue*))((::PBYTE)hIl2Cpp + CLASS_3_5D1B24EDA62FA3CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D1B24EDA62FA3CA_ONTASKBEGIN_OFFSET))(this);
	}
};
