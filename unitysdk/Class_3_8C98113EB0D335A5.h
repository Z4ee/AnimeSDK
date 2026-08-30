#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtBattleRecordCameraRootPos; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_8C98113EB0D335A5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1550B270)
#define CLASS_3_8C98113EB0D335A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1550B240)

inline static constexpr unsigned int Class_3_8C98113EB0D335A5_TypeDefinitionIndex = 54368;

class Class_3_8C98113EB0D335A5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtBattleRecordCameraRootPos*>
{
public:
	// static const ::System::String* HBNHOEKJBOL; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleRecordCameraRootPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleRecordCameraRootPos*))((::PBYTE)hIl2Cpp + CLASS_3_8C98113EB0D335A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C98113EB0D335A5_ONTASKBEGIN_OFFSET))(this);
	}
};
