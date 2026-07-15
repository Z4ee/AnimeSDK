#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetTargetAssetPreloadState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F2FD9C590749758F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1526E8F0)
#define CLASS_3_F2FD9C590749758F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1526E930)
#define CLASS_3_F2FD9C590749758F__CTOR_OFFSET UNITYSDK_OFFSET(0x1526E8C0)

inline static constexpr unsigned int Class_3_F2FD9C590749758F_TypeDefinitionIndex = 53061;

class Class_3_F2FD9C590749758F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetTargetAssetPreloadState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetAssetPreloadState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetAssetPreloadState*))((::PBYTE)hIl2Cpp + CLASS_3_F2FD9C590749758F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FD9C590749758F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FD9C590749758F_ONTASKBEGIN_OFFSET))(this);
	}
};
