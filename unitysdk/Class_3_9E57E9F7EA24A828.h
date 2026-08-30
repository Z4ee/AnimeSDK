#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

namespace RPG::GameCore { class GridFightWaitDragEquip; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9E57E9F7EA24A828_METHOD_3_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x1B456640)
#define CLASS_3_9E57E9F7EA24A828_METHOD_3_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0x1B456CC0)
#define CLASS_3_9E57E9F7EA24A828_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B456760)
#define CLASS_3_9E57E9F7EA24A828_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B456C20)
#define CLASS_3_9E57E9F7EA24A828__CTOR_OFFSET UNITYSDK_OFFSET(0x1B456630)

inline static constexpr unsigned int Class_3_9E57E9F7EA24A828_TypeDefinitionIndex = 53807;

class Class_3_9E57E9F7EA24A828 : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::RPG::GameCore::GridFightWaitDragEquip* IGHAHBNLIJA; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragEquip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragEquip*))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828_METHOD_3_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9E57E9F7EA24A828_METHOD_3_BD6A3C745D127D79_OFFSET))(this, a1);
	}
};
