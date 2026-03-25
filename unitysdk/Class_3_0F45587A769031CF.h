#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0F45587A769031CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1B6CA0)
#define CLASS_3_0F45587A769031CF__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B6C70)

inline static constexpr unsigned int Class_3_0F45587A769031CF_TypeDefinitionIndex = 44783;

class Class_3_0F45587A769031CF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_0F45587A769031CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F45587A769031CF_ONTASKBEGIN_OFFSET))(this);
	}
};
