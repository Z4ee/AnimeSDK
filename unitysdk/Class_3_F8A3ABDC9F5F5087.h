#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_7AB88D713F5121B3_36;
namespace RPG::GameCore { class SetRaidTargetProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F8A3ABDC9F5F5087_METHOD_3_1FF0B87A9F818945_OFFSET UNITYSDK_OFFSET(0x11791D90)
#define CLASS_3_F8A3ABDC9F5F5087_METHOD_3_79E3564873031768_OFFSET UNITYSDK_OFFSET(0x11791E30)
#define CLASS_3_F8A3ABDC9F5F5087_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11791C70)
#define CLASS_3_F8A3ABDC9F5F5087__CTOR_OFFSET UNITYSDK_OFFSET(0x11791C40)

inline static constexpr unsigned int Class_3_F8A3ABDC9F5F5087_TypeDefinitionIndex = 47268;

class Class_3_F8A3ABDC9F5F5087 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetRaidTargetProgress*>
{
public:
	::Class_1_7AB88D713F5121B3_36* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetRaidTargetProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetRaidTargetProgress*))((::PBYTE)hIl2Cpp + CLASS_3_F8A3ABDC9F5F5087__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8A3ABDC9F5F5087_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_1FF0B87A9F818945(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F8A3ABDC9F5F5087_METHOD_3_1FF0B87A9F818945_OFFSET))(this, a1);
	}

	::System::Void Method_3_79E3564873031768(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_F8A3ABDC9F5F5087_METHOD_3_79E3564873031768_OFFSET))(this, a1, a2);
	}
};
