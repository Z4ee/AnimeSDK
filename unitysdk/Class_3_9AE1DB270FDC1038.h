#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetHitOverrideLayerWeight; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9AE1DB270FDC1038_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x95A5DA0)
#define CLASS_3_9AE1DB270FDC1038__CTOR_OFFSET UNITYSDK_OFFSET(0x95A5D70)

inline static constexpr unsigned int Class_3_9AE1DB270FDC1038_TypeDefinitionIndex = 51183;

class Class_3_9AE1DB270FDC1038 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetHitOverrideLayerWeight*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHitOverrideLayerWeight* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHitOverrideLayerWeight*))((::PBYTE)hIl2Cpp + CLASS_3_9AE1DB270FDC1038__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AE1DB270FDC1038_ONTASKBEGIN_OFFSET))(this);
	}
};
