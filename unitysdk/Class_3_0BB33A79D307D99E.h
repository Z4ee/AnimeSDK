#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RecordAutoLayoutSnapShot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0BB33A79D307D99E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F130D0)
#define CLASS_3_0BB33A79D307D99E__CTOR_OFFSET UNITYSDK_OFFSET(0x15F130A0)

inline static constexpr unsigned int Class_3_0BB33A79D307D99E_TypeDefinitionIndex = 52778;

class Class_3_0BB33A79D307D99E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RecordAutoLayoutSnapShot*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RecordAutoLayoutSnapShot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RecordAutoLayoutSnapShot*))((::PBYTE)hIl2Cpp + CLASS_3_0BB33A79D307D99E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0BB33A79D307D99E_ONTASKBEGIN_OFFSET))(this);
	}
};
