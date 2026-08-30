#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideEntityV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_077FC7378EC8AAD8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3E4520)
#define CLASS_3_077FC7378EC8AAD8__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E44F0)

inline static constexpr unsigned int Class_3_077FC7378EC8AAD8_TypeDefinitionIndex = 55303;

class Class_3_077FC7378EC8AAD8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideEntityV2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEntityV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEntityV2*))((::PBYTE)hIl2Cpp + CLASS_3_077FC7378EC8AAD8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_077FC7378EC8AAD8_ONTASKBEGIN_OFFSET))(this);
	}
};
