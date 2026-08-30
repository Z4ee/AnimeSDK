#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class AkCallbackInfo;
namespace RPG::GameCore { class PlayVoice_Single; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B591B80DD72516E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7E9380)
#define CLASS_3_B591B80DD72516E1_METHOD_3_ED0288D8C1E7B478_OFFSET UNITYSDK_OFFSET(0xB7E95E0)
#define CLASS_3_B591B80DD72516E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7E9420)
#define CLASS_3_B591B80DD72516E1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E9350)

inline static constexpr unsigned int Class_3_B591B80DD72516E1_TypeDefinitionIndex = 56565;

class Class_3_B591B80DD72516E1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayVoice_Single*>
{
public:
	::System::UInt32 MGOJNNHAEGC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayVoice_Single* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayVoice_Single*))((::PBYTE)hIl2Cpp + CLASS_3_B591B80DD72516E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B591B80DD72516E1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B591B80DD72516E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_ED0288D8C1E7B478(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_3_B591B80DD72516E1_METHOD_3_ED0288D8C1E7B478_OFFSET))(this, a1, a2, a3);
	}
};
