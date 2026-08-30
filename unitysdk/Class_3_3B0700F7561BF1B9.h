#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvCreateGroupEntityV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3B0700F7561BF1B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195425D0)
#define CLASS_3_3B0700F7561BF1B9_METHOD_3_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0x19542B30)
#define CLASS_3_3B0700F7561BF1B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19542620)
#define CLASS_3_3B0700F7561BF1B9__CTOR_OFFSET UNITYSDK_OFFSET(0x195425A0)
#define CLASS_3_3B0700F7561BF1B9__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x19542BE0)

inline static constexpr unsigned int Class_3_3B0700F7561BF1B9_TypeDefinitionIndex = 58025;

class Class_3_3B0700F7561BF1B9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvCreateGroupEntityV2*>
{
public:
	::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvCreateGroupEntityV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvCreateGroupEntityV2*))((::PBYTE)hIl2Cpp + CLASS_3_3B0700F7561BF1B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B0700F7561BF1B9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B0700F7561BF1B9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3B0700F7561BF1B9_METHOD_3_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B0700F7561BF1B9__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
