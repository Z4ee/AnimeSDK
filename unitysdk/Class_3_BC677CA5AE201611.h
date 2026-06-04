#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

class Class_1_D8203AFB32E9259C;
namespace RPG::GameCore { class ST_RtMain_UseSkill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC677CA5AE201611_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13528190)
#define CLASS_3_BC677CA5AE201611_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13528440)
#define CLASS_3_BC677CA5AE201611_TICK_OFFSET UNITYSDK_OFFSET(0x13528340)
#define CLASS_3_BC677CA5AE201611__CTOR_OFFSET UNITYSDK_OFFSET(0x13528160)
#define CLASS_3_BC677CA5AE201611___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13528490)

inline static constexpr unsigned int Class_3_BC677CA5AE201611_TypeDefinitionIndex = 50597;

class Class_3_BC677CA5AE201611 : public ::RPG::GameCore::ST_RtTask_1<::RPG::GameCore::ST_RtMain_UseSkill*>
{
public:
	::Class_1_D8203AFB32E9259C* Field_3_0; // 0x28

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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BC677CA5AE201611___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
