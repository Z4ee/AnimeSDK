#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGetLevelReward; }
namespace System { class Object; }

#define CLASS_3_EB9973411D9592AA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A6B6F70)
#define CLASS_3_EB9973411D9592AA_METHOD_3_5C715D615BCEF8BF_OFFSET UNITYSDK_OFFSET(0x1A6B7030)
#define CLASS_3_EB9973411D9592AA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A6B6EC0)
#define CLASS_3_EB9973411D9592AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B6E90)

inline static constexpr unsigned int Class_3_EB9973411D9592AA_TypeDefinitionIndex = 59046;

class Class_3_EB9973411D9592AA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WaitGetLevelReward*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGetLevelReward* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGetLevelReward*))((::PBYTE)hIl2Cpp + CLASS_3_EB9973411D9592AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9973411D9592AA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9973411D9592AA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_5C715D615BCEF8BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EB9973411D9592AA_METHOD_3_5C715D615BCEF8BF_OFFSET))(this, a1);
	}
};
