#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPlayerMotionSync; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_95C3AE2A99984DC5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16770860)
#define CLASS_3_95C3AE2A99984DC5_METHOD_3_1656A95CE4A48665_OFFSET UNITYSDK_OFFSET(0x167709B0)
#define CLASS_3_95C3AE2A99984DC5_METHOD_3_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0x16770BE0)
#define CLASS_3_95C3AE2A99984DC5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16770950)
#define CLASS_3_95C3AE2A99984DC5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16770B70)
#define CLASS_3_95C3AE2A99984DC5__CTOR_OFFSET UNITYSDK_OFFSET(0x16770830)

inline static constexpr unsigned int Class_3_95C3AE2A99984DC5_TypeDefinitionIndex = 58712;

class Class_3_95C3AE2A99984DC5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPlayerMotionSync*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPlayerMotionSync* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPlayerMotionSync*))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_ONTASKRESET_OFFSET))(this);
	}

	static ::System::Void Method_3_1656A95CE4A48665(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_METHOD_3_1656A95CE4A48665_OFFSET))(a1);
	}

	static ::System::Void Method_3_EA7C9571288E1295()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_95C3AE2A99984DC5_METHOD_3_EA7C9571288E1295_OFFSET))();
	}
};
