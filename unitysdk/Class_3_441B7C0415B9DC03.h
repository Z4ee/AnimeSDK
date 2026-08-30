#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetCustomAssetPreloadState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_441B7C0415B9DC03_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13505590)
#define CLASS_3_441B7C0415B9DC03_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x135055D0)
#define CLASS_3_441B7C0415B9DC03__CTOR_OFFSET UNITYSDK_OFFSET(0x13505560)

inline static constexpr unsigned int Class_3_441B7C0415B9DC03_TypeDefinitionIndex = 55770;

class Class_3_441B7C0415B9DC03 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetCustomAssetPreloadState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetCustomAssetPreloadState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetCustomAssetPreloadState*))((::PBYTE)hIl2Cpp + CLASS_3_441B7C0415B9DC03__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_441B7C0415B9DC03_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_441B7C0415B9DC03_ONTASKBEGIN_OFFSET))(this);
	}
};
