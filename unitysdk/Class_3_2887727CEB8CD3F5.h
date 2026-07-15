#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetCustomLocationConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2887727CEB8CD3F5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15FE87B0)
#define CLASS_3_2887727CEB8CD3F5__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE8780)

inline static constexpr unsigned int Class_3_2887727CEB8CD3F5_TypeDefinitionIndex = 53868;

class Class_3_2887727CEB8CD3F5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetCustomLocationConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCustomLocationConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCustomLocationConfig*))((::PBYTE)hIl2Cpp + CLASS_3_2887727CEB8CD3F5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2887727CEB8CD3F5_ONTASKBEGIN_OFFSET))(this);
	}
};
