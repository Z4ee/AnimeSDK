#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueDLC1Dot3PictureFrameFinish; }
namespace System { class Object; }

#define CLASS_2_315ECEDEC3720502_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A32F70)
#define CLASS_2_315ECEDEC3720502_METHOD_2_3153D82DE4567702_OFFSET UNITYSDK_OFFSET(0x15A333B0)
#define CLASS_2_315ECEDEC3720502_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x15A332C0)
#define CLASS_2_315ECEDEC3720502_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A33070)
#define CLASS_2_315ECEDEC3720502_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A33360)
#define CLASS_2_315ECEDEC3720502_TICK_OFFSET UNITYSDK_OFFSET(0x15A33010)
#define CLASS_2_315ECEDEC3720502__CTOR_OFFSET UNITYSDK_OFFSET(0x15A32F60)

inline static constexpr unsigned int Class_2_315ECEDEC3720502_TypeDefinitionIndex = 59068;

class Class_2_315ECEDEC3720502 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueDLC1Dot3PictureFrameFinish*))((::PBYTE)hIl2Cpp + CLASS_2_315ECEDEC3720502__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_315ECEDEC3720502_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_315ECEDEC3720502_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_315ECEDEC3720502_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_315ECEDEC3720502_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_315ECEDEC3720502_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_2_3153D82DE4567702(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_315ECEDEC3720502_METHOD_2_3153D82DE4567702_OFFSET))(this, a1);
	}
};
