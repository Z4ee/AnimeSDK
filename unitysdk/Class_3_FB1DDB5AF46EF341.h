#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeHeroBasicType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FB1DDB5AF46EF341_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3EB9C0)
#define CLASS_3_FB1DDB5AF46EF341__CTOR_OFFSET UNITYSDK_OFFSET(0xC3EB990)

inline static constexpr unsigned int Class_3_FB1DDB5AF46EF341_TypeDefinitionIndex = 52914;

class Class_3_FB1DDB5AF46EF341 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeHeroBasicType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeHeroBasicType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeHeroBasicType*))((::PBYTE)hIl2Cpp + CLASS_3_FB1DDB5AF46EF341__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB1DDB5AF46EF341_ONTASKBEGIN_OFFSET))(this);
	}
};
