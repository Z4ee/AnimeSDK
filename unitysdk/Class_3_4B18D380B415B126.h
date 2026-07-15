#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_7AB88D713F5121B3_46;
namespace RPG::GameCore { class SetRaidTargetProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4B18D380B415B126_METHOD_3_1FF0B87A9F818945_OFFSET UNITYSDK_OFFSET(0x162259B0)
#define CLASS_3_4B18D380B415B126_METHOD_3_59C9C2EFD4EDF51F_OFFSET UNITYSDK_OFFSET(0x16225A60)
#define CLASS_3_4B18D380B415B126_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162257F0)
#define CLASS_3_4B18D380B415B126__CTOR_OFFSET UNITYSDK_OFFSET(0x162257C0)

inline static constexpr unsigned int Class_3_4B18D380B415B126_TypeDefinitionIndex = 55950;

class Class_3_4B18D380B415B126 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetRaidTargetProgress*>
{
public:
	::Class_1_7AB88D713F5121B3_46* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetRaidTargetProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetRaidTargetProgress*))((::PBYTE)hIl2Cpp + CLASS_3_4B18D380B415B126__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B18D380B415B126_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_1FF0B87A9F818945(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4B18D380B415B126_METHOD_3_1FF0B87A9F818945_OFFSET))(this, a1);
	}

	::System::Void Method_3_59C9C2EFD4EDF51F(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_4B18D380B415B126_METHOD_3_59C9C2EFD4EDF51F_OFFSET))(this, a1, a2);
	}
};
