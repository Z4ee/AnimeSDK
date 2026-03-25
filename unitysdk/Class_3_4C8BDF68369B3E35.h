#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_377;
namespace RPG::GameCore { class CreateFMChannelReceiver; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4C8BDF68369B3E35_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1158BBC0)
#define CLASS_3_4C8BDF68369B3E35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1158B800)
#define CLASS_3_4C8BDF68369B3E35_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1158BAA0)
#define CLASS_3_4C8BDF68369B3E35__CTOR_OFFSET UNITYSDK_OFFSET(0x1158B7D0)
#define CLASS_3_4C8BDF68369B3E35___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1158BD30)
#define CLASS_3_4C8BDF68369B3E35___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1158BD20)

inline static constexpr unsigned int Class_3_4C8BDF68369B3E35_TypeDefinitionIndex = 42670;

class Class_3_4C8BDF68369B3E35 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateFMChannelReceiver*>
{
public:
	::Class_0_16E4307DCC419505_377* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateFMChannelReceiver* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateFMChannelReceiver*))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
