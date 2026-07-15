#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RecordUseAvatarGlobalBuff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CFB447857EE98F75_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1837D3C0)
#define CLASS_3_CFB447857EE98F75__CTOR_OFFSET UNITYSDK_OFFSET(0x1837D390)

inline static constexpr unsigned int Class_3_CFB447857EE98F75_TypeDefinitionIndex = 52784;

class Class_3_CFB447857EE98F75 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RecordUseAvatarGlobalBuff*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RecordUseAvatarGlobalBuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RecordUseAvatarGlobalBuff*))((::PBYTE)hIl2Cpp + CLASS_3_CFB447857EE98F75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFB447857EE98F75_ONTASKBEGIN_OFFSET))(this);
	}
};
