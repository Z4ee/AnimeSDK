#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_E6C4BA4C142021B7;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class ST_Main_FollowTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2CFA8152F1577D1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165791D0)
#define CLASS_3_2CFA8152F1577D1F_METHOD_3_13004921ED9C7319_OFFSET UNITYSDK_OFFSET(0x165795D0)
#define CLASS_3_2CFA8152F1577D1F_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x16579A50)
#define CLASS_3_2CFA8152F1577D1F_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16579780)
#define CLASS_3_2CFA8152F1577D1F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165792B0)
#define CLASS_3_2CFA8152F1577D1F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16579970)
#define CLASS_3_2CFA8152F1577D1F_TICK_OFFSET UNITYSDK_OFFSET(0x16579890)
#define CLASS_3_2CFA8152F1577D1F__CTOR_OFFSET UNITYSDK_OFFSET(0x165788F0)

inline static constexpr unsigned int Class_3_2CFA8152F1577D1F_TypeDefinitionIndex = 52206;

class Class_3_2CFA8152F1577D1F : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_FollowTarget*>
{
public:
	::Class_1_E6C4BA4C142021B7* FLANFCPMIPC; // 0x28
	::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_FollowTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_FollowTarget*))((::PBYTE)hIl2Cpp + CLASS_3_2CFA8152F1577D1F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CFA8152F1577D1F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CFA8152F1577D1F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2CFA8152F1577D1F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CFA8152F1577D1F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_13004921ED9C7319(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2CFA8152F1577D1F_METHOD_3_13004921ED9C7319_OFFSET))(this, a1);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CFA8152F1577D1F_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2CFA8152F1577D1F_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}
};
