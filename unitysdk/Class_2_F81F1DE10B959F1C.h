#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_36264895A759B0FF;
class Class_1_947F5BB3E2AFC4CE;
namespace RPG::GameCore { class BattlePerformTimeline; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_2_F81F1DE10B959F1C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17610650)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_2332F476B75A13EA_OFFSET UNITYSDK_OFFSET(0x17612120)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_3D08652C0E05292E_OFFSET UNITYSDK_OFFSET(0x17611800)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_50BF1B0904E78DBA_OFFSET UNITYSDK_OFFSET(0x17612340)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_554208C84546EE8E_OFFSET UNITYSDK_OFFSET(0x176107B0)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_5DE94037AF607DD8_OFFSET UNITYSDK_OFFSET(0x176123A0)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x176120D0)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_8E932595D86E4BD8_OFFSET UNITYSDK_OFFSET(0x17610CB0)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x176122D0)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_AFF76E315021A2C2_OFFSET UNITYSDK_OFFSET(0x17610D00)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x176106A0)
#define CLASS_2_F81F1DE10B959F1C_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x176121E0)
#define CLASS_2_F81F1DE10B959F1C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17610760)
#define CLASS_2_F81F1DE10B959F1C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17610C00)
#define CLASS_2_F81F1DE10B959F1C_TICK_OFFSET UNITYSDK_OFFSET(0x17610C50)
#define CLASS_2_F81F1DE10B959F1C__CTOR_OFFSET UNITYSDK_OFFSET(0x17610640)

inline static constexpr unsigned int Class_2_F81F1DE10B959F1C_TypeDefinitionIndex = 55374;

class Class_2_F81F1DE10B959F1C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::BattlePerformTimeline* Field_2_1; // 0x20
	::UnityEngine::Playables::PlayableDirector* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Animator*>* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::Class_1_947F5BB3E2AFC4CE*>* Field_2_5; // 0x40
	::Class_1_36264895A759B0FF* Field_2_6; // 0x48
	::System::Int32 Field_2_7; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattlePerformTimeline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattlePerformTimeline*))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_554208C84546EE8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_554208C84546EE8E_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_50BF1B0904E78DBA(::UnityEngine::Playables::PlayableDirector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_50BF1B0904E78DBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E932595D86E4BD8(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_8E932595D86E4BD8_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFF76E315021A2C2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_AFF76E315021A2C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_2332F476B75A13EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_2332F476B75A13EA_OFFSET))(this);
	}

	::System::Void Method_2_5DE94037AF607DD8(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Playables::PlayableAsset* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_5DE94037AF607DD8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3D08652C0E05292E(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_3D08652C0E05292E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F81F1DE10B959F1C_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}
};
