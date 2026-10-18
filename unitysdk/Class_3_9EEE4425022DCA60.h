#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

class Class_3_019A582638BC3D1A_1;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_9EEE4425022DCA60_METHOD_3_015EED32BD477392_OFFSET UNITYSDK_OFFSET(0xBEE6B00)
#define CLASS_3_9EEE4425022DCA60_METHOD_3_5242B274EDFF6B6A_OFFSET UNITYSDK_OFFSET(0xBEE6910)
#define CLASS_3_9EEE4425022DCA60_METHOD_3_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xBEE6740)
#define CLASS_3_9EEE4425022DCA60_METHOD_3_D8F3C6B2E2C5586E_OFFSET UNITYSDK_OFFSET(0xBEE6800)
#define CLASS_3_9EEE4425022DCA60_METHOD_3_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xBEE6960)
#define CLASS_3_9EEE4425022DCA60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEE6420)
#define CLASS_3_9EEE4425022DCA60_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEE6A20)
#define CLASS_3_9EEE4425022DCA60__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE63A0)
#define CLASS_3_9EEE4425022DCA60___ONIDLELIVETEAMUPDATED_B__6_0_OFFSET UNITYSDK_OFFSET(0xBEE6BD0)

inline static constexpr unsigned int Class_3_9EEE4425022DCA60_TypeDefinitionIndex = 58175;

class Class_3_9EEE4425022DCA60 : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GLCFFOIDEMA; // 0x28
	::Class_3_019A582638BC3D1A_1* IGHAHBNLIJA; // 0x30
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38

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

	::System::Void Method_3_015EED32BD477392(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9EEE4425022DCA60_METHOD_3_015EED32BD477392_OFFSET))(this, a1);
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
