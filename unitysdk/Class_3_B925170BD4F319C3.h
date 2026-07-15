#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEraFlipSpotOutlineEdgeParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B925170BD4F319C3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x167523C0)
#define CLASS_3_B925170BD4F319C3__CTOR_OFFSET UNITYSDK_OFFSET(0x16752390)

inline static constexpr unsigned int Class_3_B925170BD4F319C3_TypeDefinitionIndex = 50382;

class Class_3_B925170BD4F319C3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEraFlipSpotOutlineEdgeParam*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEraFlipSpotOutlineEdgeParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEraFlipSpotOutlineEdgeParam*))((::PBYTE)hIl2Cpp + CLASS_3_B925170BD4F319C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B925170BD4F319C3_ONTASKBEGIN_OFFSET))(this);
	}
};
