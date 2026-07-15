#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropRuntimeReplaceArtPrefab; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4524EA0751E2B311_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15FD9C50)
#define CLASS_3_4524EA0751E2B311__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD9C20)

inline static constexpr unsigned int Class_3_4524EA0751E2B311_TypeDefinitionIndex = 55763;

class Class_3_4524EA0751E2B311 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropRuntimeReplaceArtPrefab*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropRuntimeReplaceArtPrefab* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropRuntimeReplaceArtPrefab*))((::PBYTE)hIl2Cpp + CLASS_3_4524EA0751E2B311__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4524EA0751E2B311_ONTASKBEGIN_OFFSET))(this);
	}
};
