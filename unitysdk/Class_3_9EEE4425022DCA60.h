#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

class Class_3_019A582638BC3D1A_1;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_9EEE4425022DCA60_METHOD_3_5242B274EDFF6B6A_OFFSET UNITYSDK_OFFSET(0x14D19AE0)
#define CLASS_3_9EEE4425022DCA60_METHOD_3_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x14D19910)
#define CLASS_3_9EEE4425022DCA60_METHOD_3_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x14D19CD0)
#define CLASS_3_9EEE4425022DCA60_METHOD_3_D8F3C6B2E2C5586E_OFFSET UNITYSDK_OFFSET(0x14D199D0)
#define CLASS_3_9EEE4425022DCA60_METHOD_3_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x14D19B30)
#define CLASS_3_9EEE4425022DCA60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14D192A0)
#define CLASS_3_9EEE4425022DCA60_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14D19BF0)
#define CLASS_3_9EEE4425022DCA60__CTOR_OFFSET UNITYSDK_OFFSET(0x14D19220)
#define CLASS_3_9EEE4425022DCA60___ONIDLELIVETEAMUPDATED_B__6_0_OFFSET UNITYSDK_OFFSET(0x14D19E30)

inline static constexpr unsigned int Class_3_9EEE4425022DCA60_TypeDefinitionIndex = 55596;

class Class_3_9EEE4425022DCA60 : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* Field_3_0; // 0x28
	::RPG::GameCore::TaskContext* Field_3_1; // 0x30
	::Class_3_019A582638BC3D1A_1* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_019A582638BC3D1A_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_019A582638BC3D1A_1*))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_5242B274EDFF6B6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60_METHOD_3_5242B274EDFF6B6A_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60_METHOD_3_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_3_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60_METHOD_3_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_3_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60_METHOD_3_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D8F3C6B2E2C5586E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60_METHOD_3_D8F3C6B2E2C5586E_OFFSET))(this);
	}

	::System::Void __OnIdleLiveTeamUpdated_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60___ONIDLELIVETEAMUPDATED_B__6_0_OFFSET))(this);
	}
};
