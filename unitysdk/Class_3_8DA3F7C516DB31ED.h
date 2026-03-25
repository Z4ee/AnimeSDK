#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialStatisticsType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_41BA3D4F4FF43007;
class Class_3_99BDA01B55ECE46A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8DA3F7C516DB31ED_METHOD_3_47C2DFF382C60657_OFFSET UNITYSDK_OFFSET(0x1092C280)
#define CLASS_3_8DA3F7C516DB31ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1092BF60)
#define CLASS_3_8DA3F7C516DB31ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1092BF30)

inline static constexpr unsigned int Class_3_8DA3F7C516DB31ED_TypeDefinitionIndex = 44633;

class Class_3_8DA3F7C516DB31ED : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_99BDA01B55ECE46A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_99BDA01B55ECE46A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_99BDA01B55ECE46A*))((::PBYTE)hIl2Cpp + CLASS_3_8DA3F7C516DB31ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DA3F7C516DB31ED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_47C2DFF382C60657(::Class_1_41BA3D4F4FF43007* a1, ::RPG::GameCore::AvatarSpecialStatisticsType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41BA3D4F4FF43007*, ::RPG::GameCore::AvatarSpecialStatisticsType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_8DA3F7C516DB31ED_METHOD_3_47C2DFF382C60657_OFFSET))(this, a1, a2, a3);
	}
};
