#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

class Class_1_05E595DC72CB83CA;
namespace RPG::GameCore { class ST_RtMain_UseSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC677CA5AE201611_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124C67D0)
#define CLASS_3_BC677CA5AE201611_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124C6A40)
#define CLASS_3_BC677CA5AE201611_TICK_OFFSET UNITYSDK_OFFSET(0x124C6940)
#define CLASS_3_BC677CA5AE201611__CTOR_OFFSET UNITYSDK_OFFSET(0x124C67A0)
#define CLASS_3_BC677CA5AE201611___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x124C6A90)

inline static constexpr unsigned int Class_3_BC677CA5AE201611_TypeDefinitionIndex = 49930;

class Class_3_BC677CA5AE201611 : public ::RPG::GameCore::ST_RtTask_1<::RPG::GameCore::ST_RtMain_UseSkill*>
{
public:
	::Class_1_05E595DC72CB83CA* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtMain_UseSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtMain_UseSkill*))((::PBYTE)hIl2Cpp + CLASS_3_BC677CA5AE201611__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC677CA5AE201611_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BC677CA5AE201611_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC677CA5AE201611_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BC677CA5AE201611___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
