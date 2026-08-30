#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_E6C4BA4C142021B7;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class ST_Main_FollowTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_212DB7051D42E902_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16201BC0)
#define CLASS_3_212DB7051D42E902_METHOD_3_13004921ED9C7319_OFFSET UNITYSDK_OFFSET(0x16201FC0)
#define CLASS_3_212DB7051D42E902_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x16202440)
#define CLASS_3_212DB7051D42E902_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16202170)
#define CLASS_3_212DB7051D42E902_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16201CA0)
#define CLASS_3_212DB7051D42E902_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16202360)
#define CLASS_3_212DB7051D42E902_TICK_OFFSET UNITYSDK_OFFSET(0x16202280)
#define CLASS_3_212DB7051D42E902__CTOR_OFFSET UNITYSDK_OFFSET(0x16201350)

inline static constexpr unsigned int Class_3_212DB7051D42E902_TypeDefinitionIndex = 52492;

class Class_3_212DB7051D42E902 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_FollowTarget*>
{
public:
	::Class_1_E6C4BA4C142021B7* FLANFCPMIPC; // 0x28
	::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_FollowTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_FollowTarget*))((::PBYTE)hIl2Cpp + CLASS_3_212DB7051D42E902__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_212DB7051D42E902_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_212DB7051D42E902_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_212DB7051D42E902_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_212DB7051D42E902_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_13004921ED9C7319(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_212DB7051D42E902_METHOD_3_13004921ED9C7319_OFFSET))(this, a1);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_212DB7051D42E902_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_212DB7051D42E902_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}
};
