#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitEntityEventV2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_C0448188ED40366F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBF1B80)
#define CLASS_3_C0448188ED40366F_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBBF2040)
#define CLASS_3_C0448188ED40366F_METHOD_3_BAE7592D149B0E7F_OFFSET UNITYSDK_OFFSET(0xBBF2370)
#define CLASS_3_C0448188ED40366F_METHOD_3_C65180617FF9BA54_OFFSET UNITYSDK_OFFSET(0xBBF2250)
#define CLASS_3_C0448188ED40366F__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF1A10)
#define CLASS_3_C0448188ED40366F__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBBF1BD0)
#define CLASS_3_C0448188ED40366F__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBBF20A0)
#define CLASS_3_C0448188ED40366F__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBBF2180)

inline static constexpr unsigned int Class_3_C0448188ED40366F_TypeDefinitionIndex = 52800;

class Class_3_C0448188ED40366F : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitEntityEventV2*>
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* HDBOBADLEML; // 0x68
	::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x70
	::System::String* FGMKCOANOOK; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitEntityEventV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitEntityEventV2*))((::PBYTE)hIl2Cpp + CLASS_3_C0448188ED40366F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0448188ED40366F_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0448188ED40366F__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0448188ED40366F__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0448188ED40366F__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_C65180617FF9BA54(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_3_C0448188ED40366F_METHOD_3_C65180617FF9BA54_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_BAE7592D149B0E7F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C0448188ED40366F_METHOD_3_BAE7592D149B0E7F_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0448188ED40366F_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}
};
