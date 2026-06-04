#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayVoice; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_39E67A37484C8AE0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1431E380)
#define CLASS_3_39E67A37484C8AE0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1431E4E0)
#define CLASS_3_39E67A37484C8AE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1431E350)
#define CLASS_3_39E67A37484C8AE0___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1431E740)

inline static constexpr unsigned int Class_3_39E67A37484C8AE0_TypeDefinitionIndex = 52642;

class Class_3_39E67A37484C8AE0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayVoice*>
{
public:
	::RPG::GameCore::GameEntity* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVoice* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVoice*))((::PBYTE)hIl2Cpp + CLASS_3_39E67A37484C8AE0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39E67A37484C8AE0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39E67A37484C8AE0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39E67A37484C8AE0___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
