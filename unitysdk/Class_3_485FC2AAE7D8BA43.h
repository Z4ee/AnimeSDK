#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvAddAIHangUpInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_485FC2AAE7D8BA43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB774250)
#define CLASS_3_485FC2AAE7D8BA43__CTOR_OFFSET UNITYSDK_OFFSET(0xB774220)

inline static constexpr unsigned int Class_3_485FC2AAE7D8BA43_TypeDefinitionIndex = 48933;

class Class_3_485FC2AAE7D8BA43 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvAddAIHangUpInfo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAddAIHangUpInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAddAIHangUpInfo*))((::PBYTE)hIl2Cpp + CLASS_3_485FC2AAE7D8BA43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_485FC2AAE7D8BA43_ONTASKBEGIN_OFFSET))(this);
	}
};
